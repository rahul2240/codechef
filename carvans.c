#include "stdio.h"

int main(void) {
  int test,n,a[100000],count,i,max;
  scanf("%d",&test);
  while(test--)
  { 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    count=1;
    max = a[0]; 
    for(i=1;i<n;i++)
    { 
     if(max>=a[i])
     {  count+=1;
        max = a[i];
     }
    }
    
    printf("%d\n",count);
  }
  return 0;
}
