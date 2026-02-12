#include <stdio.h>

int main() {
   int num;
   
   printf("enter a character : ");
   scanf("%d",&num);
     
   if (num % 3 == 0 && num % 7 == 0 ) 
   {
      printf("multiple by 3 and 7") ;
   }
    else 
     printf("not multiple by 3 and 7");
       
   

    return 0;
}