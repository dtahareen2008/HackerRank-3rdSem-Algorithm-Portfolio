
#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandles(int candles_count, int* candles) {
    int max = candles[0];
    int count = 0;

    for (int i = 0; i < candles_count; i++) {
        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        } 
        else if (candles[i] == max) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int* candles = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    printf("%d\n", birthdayCakeCandles(n, candles));

    free(candles);
    return 0;
}
