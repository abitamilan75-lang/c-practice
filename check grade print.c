#include <stdio.h>

int main() {
   int mark;
   printf("enter a mark : ");
  scanf("%d",&mark);
    
     
   if (mark >=90) 
   {
      printf(" A grade") ;
   }
    else if (mark>=75&&mark<=90) {
     printf(" B grade");
    }
    else 
    {
        printf(" C grade");
    }
       
   

    return 0;
}