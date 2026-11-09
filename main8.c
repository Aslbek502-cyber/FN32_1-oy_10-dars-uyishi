#include <stdio.h>

int main() {
    int son;
    int i = 1;

   

    while(i <= 10){
        printf("%d-sonni kiriting: ", i);
        scanf("%d", &son);

        if(son < 0) {
            printf("manfiy son kiritildi");
            break;
        }
     printf("kiritilgan son: %d\n", son);
    i++;
    }

   

    return 0;
}