#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    qsort(prices, n, sizeof(int), compare);

    int count = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (total + prices[i] <= k) {
            total += prices[i];
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
