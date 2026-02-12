#include <stdio.h>

int main() {
    int a,b;
    int k;
    int result;
    printf(" ");
    scanf("%d %d %d",&k,&a,&b);
    
    switch(k) {
        case 1:
          result=a+b;
          printf("result = %d",result);
        break;
    
      case 2:
     result= a-b;
     printf("result = %d",result);
     break;
     
       case 3:
         result=a*b;
         printf("result =%d",result);
         break;
     
     case 4 :
         result=a/b;
         printf("result = %d",result);
         break;
     
     
     defualt:
     printf("invalid ");
    }
     
     return 0;
     
     
     }