#include <stdio.h>

int main() {
   int num;
   printf("enter a character : ");
  scanf("%d",&num);
  
   if (num % 11 == 0)
   {
      printf(" divisible by 11") ;
   }
    
    else 
    {
        printf(" not case");
    }
      
    return 0;
}