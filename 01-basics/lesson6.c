#include <stdio.h>

int main () {

    int score;

    printf("Enter A Score (0-100):  \n");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Keep Practicing\n");
    }

    printf("Counting up to your score in tens: \n");
    for (int i = 0; i <= score; i += 10) {
        printf("%d", i);
    }
        printf("\n");

    return 0;

}