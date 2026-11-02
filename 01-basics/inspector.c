#include <stdio.h>

int main () {

    //type 1: int (integer/whole numbers) expect score = 4 bytes and level = 4 bytes    
int score = 100; 
int level = 5;

   //type 2: float (floating point/decimal numbers) expect pi = 4 bytes and temperature = 4 bytes
float pi = 3.14159f;
float temperature = 98.6f;

  //type 3: char (character/single letter) expect grade = 1 byte and symbol = 1 byte
char grade = 'A';
char symbol = '$';
    printf("----------integers---------\n");
    printf("name\tvalue\tsize\taddress\n");
    printf("score\t%d\t%zu\t%p\n", score, sizeof(score), (void*)&score);
    printf("level\t%d\t%zu\t%p\n", level, sizeof(level), (void*)&level);
    
    printf("---------float-----------\n");
    printf("name\tvalue\tsize\taddress\n");
    printf("pi\t%.5f\t%zu\t%p\n", pi, sizeof(pi), (void*)&pi); 
    printf("temperature\t%.1f\t%zu\t%p\n", temperature, sizeof(temperature), (void*)&temperature);

    printf("--------characters----------\n");
    printf("name\tvalue\tsize\taddress\n");
    printf("grade\t%c\t%zu\t%p\n", grade, sizeof(grade), (void*)&grade);
    printf("symbol\t%c\t%zu\t%p\n", symbol, sizeof(symbol), (void*)&symbol);


    //change value of float temperature
    temperature = 89.9f;

    printf("name\tvalue\tsize\taddress\n");
    //prediction address will stay the same, yes the value changes 
    printf("temperature\t%.1f\t%zu\t%p\n", temperature, sizeof(temperature), (void*)&temperature);

return 0;

}