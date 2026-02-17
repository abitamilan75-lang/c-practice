 #include <stdio.h>

int main() {
    int N, original;
    int sum = 0;

    scanf("%d", &N);
    original = N;

    
    for (int temp = N; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int fact = 1;

        
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
    }

   
    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}



