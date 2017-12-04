#include <stdio.h>

int main(){
  char a[100000];
  int x,count,count_a,count_b;
  
  while(scanf("%s",a)==1)
  {     
        count=0;
        count_a=0;
        count_b=0;
        
        
        for(x=0;x<20;x++)
        {
               
            if (x%2==0){
              if (a[x]=='1')
                count_a+=1;}
            else{
              if(a[x]=='1')
                count_b+=1;}
                
                
               // printf("shoot %d = count A = %d count B = %d \n",count,count_a,count_b);
                count = x+1;
  
    if ((x==5) && (count_a-count_b>=3 || count_b-count_a>=3 ))
      {
      break;}
    else if ((x==6) && ( count_a-count_b>=3 || count_b-count_a>=2 ))
     {
      break; }
    else if ((x==7) && ( count_a-count_b>=2 || count_b-count_a>=2 ))
     { 
      break; }
      else if ((x==8) && ( count_a-count_b>1 || count_b-count_a>=1 ))
     { 
      break; }
    else if ((x==9) && ( count_a-count_b>0 || count_b-count_a>0 ))
      {
      break;}
    else if ((x>=10) && (x%2==1) && ( count_a-count_b>=1 || count_b-count_a>=1 ) )
      {
      break;}
    
        }
        
        if(count_a>count_b)
        {
          printf("TEAM-A %d\n", count);
        }
        else if (count_b>count_a)
          printf("TEAM-B %d\n", count);
        else
          printf("TIE\n");
  }
  
  
  return 0;
}
