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
    string x;
    cin>>x;
    map<char,int>l;
    for(int i=0;i<x.size();i++)l[x[i]]=i;

    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    sort(s.begin(),s.end(),[&](string s,string t){
        for(int i=0;i<min(s.size(),t.size());i++){
            if(l[s[i]]<l[t[i]])return true;
            else if(l[s[i]]>l[t[i]])return false;
        }   
        if(s.size()<t.size())return true;
        else return false;
    });

    for(auto ans:s)cout<<ans<<endl;
}
