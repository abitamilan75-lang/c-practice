#include <stdio.h>

int main() {
   int num;
   printf("enter a number : ");
  scanf("%d",&num);
  
   if (num>=10&&num<=20)
   {
      printf("number  within range  ") ;
   }
    
    else 
    {
        printf(" number not with in range  ");
    }
      
    return 0;
}