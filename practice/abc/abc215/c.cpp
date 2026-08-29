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
int main(){
    string s;
    cin>>s;
    int k,cnt=0;
    cin>>k;
    sort(s.begin(),s.end());
    do{
        cnt++;
        if(k==cnt){
            cout<<s<<endl;
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
}
