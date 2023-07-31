#include <bits/stdc++.h>
using namespace std;

int main()
{
  //decalring a vector and reversing it
  int n; cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int x; cin>>x;
    v.push_back(x);
  }
  
  //reverssing the vector
  reverse(v.begin(),v.end());
  
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
  
  return 0;
}
