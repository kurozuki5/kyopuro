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
    int n,m;
    cin>>n>>m;
    vector a(2*n,vector<char>(m));
    vector<pair<int,int>>t;
    for(int i=0;i<2*n;i++){
        t.push_back({0,i});
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    for(int i=0;i<m;i++){
        auto p=t;
        for(int j=0;j<n;j++){
            char f=a[t[2*j].second][i],s=a[t[2*j+1].second][i];
            if(f=='G'&&s=='C'||f=='C'&&s=='P'||f=='P'&&s=='G')p[2*j].first++;
            else if(f!=s)p[2*j+1].first++;
        }
        sort(p.begin(),p.end(),[](auto a,auto b){
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first;
        });
        swap(p,t);
    }
    for(int i=0;i<2*n;i++)cout<<t[i].second+1<<endl;
}
