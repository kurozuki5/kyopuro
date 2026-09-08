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
    int q;
    cin>>q;
    deque<int>b;
    priority_queue<int,vector<int>,greater<int>>pq;
    while(q--){
        int c,x;
        cin>>c;
        if(c==1){
            cin>>x;
            b.push_back(x);
        }else if(c==2){
            if(pq.empty()){
                cout<<b.front()<<endl;
                b.pop_front();
            }else{
                cout<<pq.top()<<endl;
                pq.pop();
            }
        }else{
            while(!b.empty()){
                auto t=b.front();b.pop_front();
                pq.push(t);
            }            
        }
    }
}
