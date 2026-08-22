#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int D;
    cin>>D;
    vector<int>c(26);
    vector s(D,vector<ll>(26));
    
    for(int i=0;i<26;i++)cin>>c[i];
    for(int i=0;i<D;i++){
        for(int j=0;j<26;j++)cin>>s[i][j];
    }
    ll ans=0;
    vector<int>last(26,0);
    for(int i=0;i<D;i++){
        int t;
        cin>>t;
        t--;
        last[t]=i+1;
        for(int j=0;j<26;j++)ans-=c[j]*((i+1)-last[j]);
        ans+=s[i][t];
        cout<<ans<<endl;
    }
}