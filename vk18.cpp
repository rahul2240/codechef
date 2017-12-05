#include <iostream>
        using namespace std;
         
        long long int digitfun(long long int n)
        {
          int even,odd,difference,b;
          odd=0;
          even=0;
          while(n>0)
          {
            b = n%10;
            n = n/10;
            if(b%2==0)
              even+=b;
            else
              odd+=b;
          }
            
          if(even-odd>0)
            difference = even-odd;
          else
            difference = odd-even;
            
          return difference;
        }
         
        int main() {
          long long int test_cases,n,i,j,total,sum,lower,count,a[2000000],b[2000001];
          
          sum=0;
          a[0]=0;
          for(i=0;i<2000000;i++)
          {
            sum += digitfun(i+2);
            
          }
          
          b[0]=sum;
          a[0]=sum;
          for(i=1;i<2000000;i++)
          {
            b[i] = b[i-1]-digitfun(i+1);
            a[i] = a[i-1]+b[i];
          }
          
            
        
          
  
          cin>>test_cases;
          
            while(test_cases--)
            {  
                cin>>n;
     
                 total = 0;
                 
               
                   total = a[n-1] - (a[2*n-1]-a[n-1]);
              

                cout<<total<<"\n";
            }
        }
