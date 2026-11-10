#include <stdio.h>

int main() {
    int a[] = {4, 5, 2, 10, 8};
    int n = 5, i, j, found;

    for (i = 0; i < n; i++) {
        found = 0;

        for (j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                printf("%d -> %d\n", a[i], a[j]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("%d -> -1\n", a[i]);
    }

    return 0;
}