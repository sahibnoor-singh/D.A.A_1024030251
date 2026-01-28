#include <bits/stdc++.h>
using namespace std;
int MedianGame(vector<int> &a,int sz){
  int mn=INT_MAX;
  int mx=INT_MIN;

  for(int i=0;i<sz;i++){
      mn=min(mn,a[i]);
      mx=max(mx,a[i]);
  }

  return mn+mx;
}
int main(){
  vector<int> a={1,2,3,4};
  cout<<MedianGame(a,a.size());
  return 0;
}
