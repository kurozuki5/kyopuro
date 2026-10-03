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
    int n,q;
    cin>>n>>q;
    vector<pair<int,int>>a;
    unordered_set<int>notile,nokori;
    for(int i=0;i<n;i++){
        nokori.insert(i);
        notile.insert(i);
    }
    while(q--){
        int t,x;
        char c;
        cin>>t;
        if(t==1){
            cin>>x;
            x--;
            a.push_back({t,x});
            if(notile.count(x))notile.erase(x);
            else notile.insert(x);
        }else{
            cin>>c;
            a.push_back({t,c-'a'});
        }
    }
    reverse(a.begin(),a.end());
    vector<char>ans(n,'a');
    for(auto [t,x]:a){
        if(t==1){
            if(!nokori.count(x))notile.erase(x);
            else if(notile.count(x))notile.erase(x);
            else notile.insert(x);
        }else{
            char c='a'+x;
            auto np=nokori;
            for(auto p:np){
                if(nokori.count(p)){
                    ans[p]=c;
                    nokori.erase(p);
                    notile.erase(p);
                }
            }
        }
    }
    for(auto p:ans)cout<<p;
}
