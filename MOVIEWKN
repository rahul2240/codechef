#include <iostream>
using namespace std;

int main() {
  int t,n,l[101],r[101],i,max,val,rate;
  
  cin>>t;
  
  while(t--)
  {
    cin>>n;
    
    for(i=0;i<n;i++)
      cin>>l[i];
      
    for(i=0;i<n;i++)
      cin>>r[i];
      
    max = l[0]*r[0];
    rate = r[0];
    val = 1;
    for(i=1;i<n;i++)
    {
      if(max<l[i]*r[i] || (max == l[i]*r[i] && rate<r[i]))
      {  max = l[i]*r[i];
         rate = r[i];
         val = i+1;
      }
    }
    cout<<val<<endl;
  }
}
