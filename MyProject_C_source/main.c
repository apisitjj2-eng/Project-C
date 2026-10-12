#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("input number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n number = \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}


