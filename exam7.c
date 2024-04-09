#include <stdio.h>

int main() {
    int rows = 5;
    int num = 11; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}