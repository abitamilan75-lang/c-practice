#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter a character : ");
  scanf("%d%d%d",&a,&b,&c);
  
   if (a==b&&b==c)
   {
      printf("equilateral triangle ") ;
   }
    
    else 
    {
        printf(" not eguilateral triangle ");
    }
      
    return 0;
}