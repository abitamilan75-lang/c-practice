#include <stdio.h>

int main() {
    int N, original, reverse = 0;

    
    scanf("%d", &N);

    original = N;

    
    for (; N > 0; N /= 10) {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
    }

    
    if (reverse == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
