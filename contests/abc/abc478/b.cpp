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
    int n,v;
    cin>>n>>v;
    vector<int>w(n);
    for(int i=0;i<n;i++)cin>>w[i];
    int ans=-1;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(i+j+k+3<=v){
                    ans=max(ans,w[i]+w[j]+w[k]);
                }
            }
        }
    }
    cout<<ans<<endl;
}
