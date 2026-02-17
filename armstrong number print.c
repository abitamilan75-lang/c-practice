#include <stdio.h>
#include <math.h>

int main() {
    int N, original, sum = 0, digit, numDigits = 0;

    
    scanf("%d", &N);

    original = N;

    
    for (int temp = N; temp > 0; temp /= 10) {
        numDigits++;
    }

   
    for (int temp = N; temp > 0; temp /= 10) {
        digit = temp % 10;
        int power = 1;

       
        for (int i = 1; i <= numDigits; i++) {
            power *= digit;
        }

        sum += power;
    }

   
    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
