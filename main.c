#include <stdio.h>

int main() {
    int num;
    printf("Введіть ціле число і я вам скажу чи ділиться воно на 3: ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        printf("Число %d ділиться на 3!\n", num);
    }
    else {
        printf("Число %d не ділиться на 3!\n", num);
    }

    return 0;
}
