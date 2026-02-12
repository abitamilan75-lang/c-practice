#include <stdio.h>

int main() {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    
    switch(a) {
        case 1:
          printf("monday ",a);
        break;
    
      case 2:
      printf("tuesday ",a);
     break;
     
       case 3:
         printf("wednesday ",a);
         break;
     
     case 4:
        
         printf("thursday  ",a);
         break;
     
     
     defualt:
     printf("invalid/n");
    }
     
     return 0;
     
     
     }