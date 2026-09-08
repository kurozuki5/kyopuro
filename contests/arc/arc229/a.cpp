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
    int x;
    cin>>x;
    for(int i=0;i<50;i++){
        for(int j=0;j<=i;j++){
            if(x==(i-j)*j){
                for(int k=0;k<i;k++){
                    if(k<j)cout<<"A";
                    else cout<<"C";
                    if(k==i-1)break;
                    cout<<"R";
                }
                return 0;
            }
        }
    }
}
