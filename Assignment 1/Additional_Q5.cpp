#include <bits/stdc++.h>
using namespace std;
long long kaneki(long long n,long long h,long long w){
    long long l=max(h,w);
    long long r=1e9;

    long long res=INT_MAX;

    while(l<r){
        long long m=(l+r)/2;

        long long x=m/h;
        long long y=m/w;

        if(x>=1 && y>=1 && x*y>=n){
            res=min(res,m);
            r=m-1;
        }
        else l=m+1;
    }

    return l;
}
int main(){
    long long n = 9;
    long long h = 1;
    long long w = 8;

    cout << kaneki(n, h, w);
    return 0;
}
