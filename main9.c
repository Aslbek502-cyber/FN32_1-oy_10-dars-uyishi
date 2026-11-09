#include <stdio.h>

int main() {
    int i, yigindi = 0;

    for (i = 1; i <= 50; i++){
        if(i % 3 != 0) {
            continue;
    }
   yigindi = yigindi + i;
}
    printf("%d", yigindi);

    return 0;
}