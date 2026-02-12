#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter a character : ");
  scanf("%d%d%d",&a,&b,&c);
  
   if ( a+b+c==180)
   {
      printf("valid triange ") ;
   }
    
    else 
    {
        printf(" not valid triangle");
    }
      
    return 0;
}