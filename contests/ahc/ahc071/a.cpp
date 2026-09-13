#include<bits/stdc++.h>
using namespace std;
int main(){
    int W,H,K;
    cin>>W>>H>>K;
    vector<int>c(5);
    for(int i=0;i<5;i++)cin>>c[i];
    vector<int>highest(W,-1);
    for(int i=0;i<K;i++){
        int a,b;
        cin>>a>>b;
        highest[a]=max(highest[a],b);
    }

    vector<vector<int>>Brick(H,vector<int>(W,0)),s(H+1,vector<int>(W+1,0));
    for(int x=0;x<W;x++)for(int y=0;y<=highest[x];y++)Brick[y][x]=1;
    for(int y=0;y<H;y++)for(int x=0;x<W;x++)s[y][x+1]=s[y][x]+Brick[y][x];
    vector<tuple<int,int,int>>ans;
    for(int y=0;y<H;y++){
        int x=0;
        while(x<W){
            if(Brick[y][x]){
                int size=1;
                for(int i=9;i>=1;i-=2){
                    int block_num=s[y][x+i]-s[y][x];
                    if(block_num==i){
                        size=i;
                        break;
                    }
                }
                ans.push_back({x,y,size});
                x+=size;
            }else x++;
        }
    }

    cout<<ans.size()<<endl;
    for(auto [x,y,l]:ans)cout<<x<<" "<<y<<" "<<l<<endl;

}