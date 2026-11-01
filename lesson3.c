#include <stdio.h>

int main() {

    int apples = 5;
    double price = 0.75;
    char grade = 'A';

    printf("char:  %zu byte(s)\n", sizeof(char));
    printf("int:  %zu byte(s)\n", sizeof(int));
    printf("double:  %zu byte(s)\n", sizeof(double));

    printf("apples uses %zu bytes\n", sizeof(apples));
    printf("price uses %zu bytes\n", sizeof(price));
    printf("grade uses %zu bytes\n", sizeof(grade));

    return 0;

}