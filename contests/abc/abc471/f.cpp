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
    int n,k;
    cin>>n>>k;
    vector<string>s(n);
    int lengh=0;
    rep(i,n){
        cin>>s[i];
        lengh=max(lengh,(int)s[i].size());
    }
    vector<pair<int,string>>cnt;
    rep(i,n){
        string t=s[i];
        for(int j=0;j<lengh-t.size();j++)s[i]='0'+s[i];
        cnt.push_back({t.size(),s[i]});
    }
    sort(cnt.begin(),cnt.end(),greater<pair<int,string>>());
    vector<pair<int,string>>ans;
    for(int i=0;i<k;i++){
        int size=cnt[i].second.size(),sub=cnt[i].first;
        string t=cnt[i].second.substr(size-sub,sub);
        ans.push_back({t[0]-'0',t});
    }
    sort(ans.begin(),ans.end(),greater<pair<int,string>>());
    for(int i=0;i<k;i++){
        if(i==0){
            string c=ans[i].second;
            int f=0;
            for(int j=0;j<c.size();j++){
                if(c[j]!='0')break;
                f++;
            }
            if(c.substr(f,(int)c.size()-f)==""){
                cout<<0<<endl;
                return 0;
            }
            cout<<c.substr(f,(int)c.size()-f);
        }
        else cout<<ans[i].second;
    }
}
