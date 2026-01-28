#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> &arr,int n,int m,int x){
    int or_val=0;
    int segs=1;

    for(int i=0;i<n;i++){
        if((or_val | arr[i]) <= x) or_val |= arr[i];
        else{
            segs++;
            or_val=arr[i];
        }
    }
    if(or_val > x) return 0;
    return (segs <= m);
}
int solve(vector<int> &arr,int n,int m){
    int lo=0,hi=0;

    for(int val:arr){
        hi |= val;
    }
    lo=hi;

    while(lo<hi){

        int mid=(lo+hi)/2;
        if(possible(arr,n,m,mid)) hi=mid;
        else lo=mid+1;

    }

    return lo;
}
int main(){
    int n=3,m=2;
    vector<int> arr={12,9,7};

    cout<<solve(arr,n,m);
    return 0;
}
