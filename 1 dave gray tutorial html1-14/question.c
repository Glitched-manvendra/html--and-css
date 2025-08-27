#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int k, m, d, c;
    scanf("%d%d%d%d", &k, &m, &d, &c);
    int f;
    f = (k + ((13 * m - 1) / 5) + d + (d / 4) + (c / 4) - 2 * c) % 7;

    if (f == 0) {
        printf("sunday");
    } else if (f == 1) {
        printf("monday");
    } else if (f == 2) {
        printf("tuesday");
    } else if (f == 3) {
        printf("wednesday");
    } else if (f == 4) {
        printf("thursday");
    } else if (f == 5) {
        printf("friday");
    } else if (f == 6) {
        printf("saturday");
    } else {
        printf("Invalid day");
    }

    return 0;
}
