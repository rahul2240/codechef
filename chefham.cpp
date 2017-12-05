#include <iostream>
using namespace std;

int main() {
  int test_cases,n,a[100000],count,i,b[100000],temp;
  
  cin>>test_cases;
  while(test_cases--)
  {
    cin>>n;
    
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    
      for(i=0;i<n-1;i++)
        {
          b[i] = a[i+1]; 
        }
        b[n-1] = a[0];
        
        
        
    if(n==1)
    {
      cout<<0<<endl;
      cout<<a[0]<<endl;
    }
    else if(n==2 && a[0]==a[1])
    {
      cout<<0<<endl;
      cout<<a[0]<<" "<<a[1]<<endl;
    }
    else if (n==3 && (a[1]==a[2] || a[0]==a[1] || a[0]==a[2]))
    {
      cout<<2<<endl;
      for(i=1;i<3;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<a[0];
      cout<<endl;
    }
    else
    { count=0;
      cout<<n<<endl;
      
      while(count!=n){
      
        for(i=0;i<n;i++)
        {
          if(a[i]!=b[i])
          {
            count++;
            
          }
          else
          {
            count=0;
                 temp = b[n-1]; //remember last element
              for(i=n-2;i>=0;i--)
              {
                  b[i+1] = b[i]; //move all element to the right except last one
              }
              b[0] = temp;
            break;
          }
        }
      }
          
     for(i=0;i<n;i++)
        {
         cout<<b[i]<<" "; 
        }
    cout<<endl;
    }

  }
  
  
}
