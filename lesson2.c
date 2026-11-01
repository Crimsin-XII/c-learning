#include <stdio.h>

int main () {
    int apples = 5;
    double price = 0.75;
    char grade = 'A';

    printf("apples: %d\n",apples);
    printf("price: %f\n",price);
    printf("grade: %c\n",grade);

    apples = apples + 3;
    printf("apples now: %d\n", apples);

    printf("total cost: %f\n", apples * price);

    return 0;
}