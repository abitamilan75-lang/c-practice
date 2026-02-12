#include <stdio.h>

int main() {
    char k;
    printf("enter a letter: ");
    scanf("%c",&k);
    
    switch(k) {
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
        
          printf(" vowel");
        break; 
        
     
     
     default :
     printf("consonant");
    }
     
     return 0;
     
     
     }