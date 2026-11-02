#include <stdio.h>

int main() {

    int quanity;
    double price;
    char size;

    printf("How Many Items? ");
    scanf("%d", &quanity);

    printf("Price Per Item? ");
    scanf("%lf", &price);

    printf("Size (S, M, L)? ");
    scanf(" %c", &size);

    double total = quanity * price;

    printf("\nOrder: %d x %.2f, Size %c\n", quanity, price, size);
    printf("Total: %.2f\n", total);

    return 0;



}