#include<bits/stdc++.h>
using namespace std;

template<typename T>
struct segtree{
    T e;
    function<T(T,T)> op;
    int n;
    vector<T>data;
    segtree(int n_,function<T(T,T)>op,T e):op(op),e(e){
        n=1;
        while(n<n_)n*=2;
        data=vector<T>(2*n,e);
    }
    void set(int i,T val){
        i+=n;
        data[i]+=val;
        while(i>1){
            i/=2;
            data[i]=op(data[i*2],data[i*2+1]);
        }
    }
    T query(int l,int r){
        l+=n,r+=n;
        T l_val=e,r_val=e;
        while(l<r){
            if(l%2==1){
                l_val=op(l_val,data[l]);
                l++;
            }
            if(r%2==1){
                r--;
                r_val=op(r_val,data[r]);
            }
            l/=2;
            r/=2;
        }
        return op(l_val,r_val);
    }
};