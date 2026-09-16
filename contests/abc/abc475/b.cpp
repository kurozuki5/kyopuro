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
    int n;
    cin>>n;
    vector<int>ans(3,0);
    for(int i=0;i<n;i++){
        int a,cnt=1000;
        cin>>a;
        while(a>cnt)cnt+=1000;
        a=cnt-a;
        while(a>0){
            if(a>=100){a-=100;ans[2]++;}
            else if(a>=10){a-=10;ans[1]++;}
            else{
                a--;
                ans[0]++;
            }
        }
    }
    for(auto a:ans)cout<<a<<" ";
}
