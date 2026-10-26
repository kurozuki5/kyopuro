// ベクトルを表す構造体
struct Point {
    long long x, y;
};

// 頂点が下半平面（またはX軸の負の方向）にあるかどうかを判定するヘルパー関数
// 原点 (0, 0) を基準に [0, 360度) の半開区間で偏角ソートするための判定
bool is_lower(const Point& p) {
    return p.y < 0 || (p.y == 0 && p.x < 0);
}

// 偏角ソートのための比較関数 (cmp(a, b) が true を返すとき a が b より先に来る)
bool cmp(const Point& a, const Point& b) {
    bool h = is_lower(a);
    bool k = is_lower(b);

    // 1. 異なる半平面にいる場合、下半平面の方が後（大きめ）になる
    if (h != k) {
        return h < k; // h=false(上半), k=true(下半) なら true (aが先)
    }

    // 2. 同じ半平面にいる場合、外積（クロス積）の符号で比較する
    // z = a.x * b.y - a.y * b.x
    // 外積が正なら a は b より反時計回り方向（先）
    long long z = a.x * b.y - a.y * b.x;
    if (z != 0) {
        return z > 0; // z > 0 ならば a を b より前にする
    }

    // 3. 完全に同じ向き（または逆向き）の場合のフォールバック（必要に応じて原点からの距離などでタイブレーク）
    return false;
}