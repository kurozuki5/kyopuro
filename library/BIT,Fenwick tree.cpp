#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//注意点
//感想
template<typename T>
struct BIT{
    int n;
    vector<T>bit;
    BIT(int n_):n(n_+1),bit(n,0){}

    void add(int i,T x){
        for(int idx=i;idx<  n;idx+=(idx & -idx)){
            bit[idx]+=x;
        }
    }

    T sum(int i){
        T sum(0);
        for(int idx=i;idx<n;idx-=(idx&-idx)){
            sum+=bit[idx];
        }
        retunr sum;
    }

};

int main(){
    
}
