#include <bits/stdc++.h>
using namespace std;
int speciality(int k,vector<int> &v,int sz){
  sort(v.begin(),v.end());
  int tot=0;
  for(int i=0;i<sz;i++){
    if(sz-i-1>=k) tot+=v[i];
  }

  return tot;
}
int main(){
  vector<int> v={4,3,2,7,8};
  cout<<speciality(2,v,v.size());
  return 0;
}
