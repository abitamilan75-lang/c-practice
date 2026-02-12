#include <stdio.h>

int main() {
   int num;
   
   printf("enter a character : ");
   scanf("%d",&num);
     
   if (num>=18) 
   {
      printf("eligible for vote  ") ;
   }
    else 
     printf("not eligible for vote");
       
   

    return 0;
}