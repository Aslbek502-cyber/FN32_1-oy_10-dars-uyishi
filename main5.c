#include <stdio.h>

int main() {
    int n, f = 1;

    printf("Son kiriting: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("Faktorial = %d", f);

    return 0;
}