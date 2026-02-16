 #include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i != 0; i = i / 10) {
        rem = i % 10;
        reverse = reverse * 10 + rem;
    }

    printf("Reversed number = %d", reverse);

    return 0;
    
}


  