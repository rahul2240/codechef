#include <iostream>
using namespace std;
 
int main() {
  long long int test_cases,n,k,simple_array[200002],sum_array[200002],sum,i,positive,negative,max,max_in_sum_array,x,zero;
  
  cin>>test_cases;
  
  while(test_cases--)
  {
    cin>>n>>k;
    positive=0;
    negative=0;
    sum=0;
    max=0;
    zero=0;
    //INPUT ARRAY
    for(i=0;i<n;i++)
    {
      cin>>simple_array[i];
      sum=sum+simple_array[i];
      if(simple_array[i]>0)
      {
        positive += 1;
      }
      else if (simple_array[i]==0)
      zero+=1;
      else 
        negative+=1;
    
    }
    
    // CHECKING START
    
    if(positive==n || negative==0) // 1
    {
      max = sum*k;
    }
    else if(negative==n || positive == 0) // 2
    {
      max=simple_array[0];
      for(i=1;i<n;i++)
      {
        if(max<simple_array[i])
        {
          max = simple_array[i];
        }
      }
    }
    else if(zero==n)
    {
      max = 0;
    }
    else if(k==1)
    {
      sum=0;
      max=0;
      sum_array[0] = simple_array[0];
      if(simple_array[0]>0)
      {
        sum = simple_array[0];
        max = simple_array[0];
      }  
        for(i=1;i<n;i++)
        {
          if(simple_array[i]>0)
          {
            sum = sum + simple_array[i];
            sum_array[i] = sum;
            
          }
          else if(simple_array[i]<0 && simple_array[i]+sum>0)
          {
            sum_array[i] = simple_array[i]+sum;
            sum = sum_array[i];
          }
          else
          {
            sum=0;
            sum_array[i] = simple_array[i];
          }
          if(max<sum_array[i])
          {
            max = sum_array[i];
          }
        }
      
      
      
    }
    else // 3
    { 
      if(sum>0) // =====================
      {
        
        max = (k-2)*sum ;
        
        
        sum=0;
        
        max_in_sum_array=0;
        sum_array[0]=simple_array[0];
        max_in_sum_array = sum_array[0];
        
        if(simple_array[0]>0)
          {
            sum=simple_array[0];
          }
        for(i=1;i<n;i++)
        {
          if(simple_array[i]>=0)
            {
              sum+=simple_array[i];
              
            }
          else if(simple_array[i]<0 && sum==0)
          {
            sum=0;
          }
          else if(simple_array[i]<0 && simple_array[i]+sum>0)
          {sum = sum +simple_array[i];
          }
          else
          {
            sum=0;
          }
          sum_array[i] = sum_array[i-1]+simple_array[i];
          if(max_in_sum_array<sum_array[i])
          {
            max_in_sum_array=sum_array[i];
           
          }
        } 
          
          max +=sum + max_in_sum_array;
         
      }
      else  //=========================
      {  
              for(i=0;i<n;i++)
              {
                simple_array[i+n] = simple_array[i];
              }
         
          sum=0;
          max=0;
            if(simple_array[0]>0)
              {
                sum=simple_array[0];
                max=sum;
              }
             
                for(i=1;i<2*n;i++)
                {
                        if(simple_array[i]>=0)
                        {
                          sum+=simple_array[i];
                          
                        }
                         else if(simple_array[i]<0 && sum==0)
                        {
                            sum=0;
                        }
                        else if(simple_array[i]<0 && simple_array[i]+sum>0)
                        {sum = sum +simple_array[i];
                        }
                        else
                        {
                          sum=0;
                        }
                        if(max<sum)
                          {
                            max=sum;
                          }
                } //===============
          
        } // end else
      
     }
    
    cout<<max<<endl;
    
    
  } //end while
 
 
 return 0;
} 
