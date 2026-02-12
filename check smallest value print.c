#include <stdio.h>

int main() {
    int value1, value2;
    scanf("%d%d",&value1,&value2);
    if(value1<value2){
        printf("%d is smallest",value1);
    }
    else
    {
      printf("%d is smallest",value2);
        
    }
    return 0;
}