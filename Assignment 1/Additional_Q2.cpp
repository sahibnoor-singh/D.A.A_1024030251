#include <bits/stdc++.h>
using namespace std;
int ValidSubseq(int sz,vector<int> &v){
    sort(v.begin(),v.end());
    int res=0;
    int i=0;

    for(int j=0;j<sz;j++){
        while(v[j]-v[i]>10) i++;

        res=max(res,j-i+1);
    }

    return res;
}
int main(){
    vector<int> v={1,2,3,4,100};
    cout<<ValidSubseq(v.size(),v);
    return 0;
}
