#include <stdio.h>

void field() {
   for (int y = 0; y < 25; y++) {
        for (int x = 0; x < 80; x++) {
            if(y == 0 || y == 24)
                printf("-");
             else 
                printf(" ");
        }
    printf("\n");
    }
}

 int main() {
    field();
    return 0;
 }