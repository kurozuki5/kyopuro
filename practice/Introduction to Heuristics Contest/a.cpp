#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1ll<<60;
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
    vector score(D,vector<ll>(26,0));
    for(int i=0;i<D;i++){
        for(int t=0;t<26;t++){
            score[i][t]=ans;
            int l=last[t];
            last[t]=i+1;
            for(int j=0;j<26;j++)score[i][t]-=c[j]*((i+1)-last[j]);
            score[i][t]+=s[i][t];
            last[t]=l;
        }
        ll cnt=-INF;
        int f=0;
        for(int t=0;t<26;t++){
            if(score[i][t]>cnt)cnt=score[i][t],f=t;
        }
        ans=cnt;
        last[f]=i+1;
        cout<<f+1<<endl;
    }
}