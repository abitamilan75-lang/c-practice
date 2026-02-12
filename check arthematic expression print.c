#include <stdio.h>

int main() {
    int a,b;
    char sk;
    int result;
    printf("enter a experssion: ");
    scanf("%d %c %d",&a,&sk,&b);
    
    switch(sk) {
        case '+':
          result=a+b;
          printf("result = %d",result);
        break;
    
      case '-':
     result= a-b;
     printf("result = %d",result);
     break;
     
       case'*':
         result=a*b;
         printf("result =%d",result);
         break;
     
     case'/' :
         result=a/b;
         printf("result = %d",result);
         break;
     
     
     defualt:
     printf("invalid ");
    }
     
     return 0;
     
     
     }