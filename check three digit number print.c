#include <stdio.h>

int main() {
   int num;
   
   printf("enter a character : ");
   scanf("%d",&num);
     
   if (num<=100 && num>=999) 
   {
      printf("three digit number ") ;
   }
    else 
     printf("not three digit number");
       
   

    return 0;
}