#include <stdio.h>

int main() {

    //Intitialize Variables
    int first = 10;
    int second = 10;
    char letter = 'z';

    //print each variable value and its memory address

    printf("First = %d, address %p\n", first, (void *)&first);
    printf("Second = %d, address %p\n", second, (void *)&second);
    printf("Letter = %c, address %p\n", letter, (void *)&letter);

    
return 0;

}