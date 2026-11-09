#include <stdio.h>

int main() {
  int maxfiyson = 7;
    int son;
    int topildi = 0;

    for (int i = 1; i <= 5; i++){
        printf("son kiriting: ");
        scanf("%d", &son);

        if(son == maxfiyson){
            printf("tabriklaymiz topdingiz\n");
            topildi = 1;
            break;
        } else {
            printf("motogri qayta urunib korin\n");
        }
    }
    if(topildi == 0){
        printf("maxfiy son: %d", maxfiyson);
        
    }
    return 0;
}