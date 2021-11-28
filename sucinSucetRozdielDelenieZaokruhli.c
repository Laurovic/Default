#include <stdio.h>

int main(void){
    int cislo1, cislo2;

    printf ("Zadaj prve cislo:");
    scanf ("%i", &cislo1);
    printf ("Zadaj druhe cislo:");
    scanf ("%i", &cislo2);

    if (cislo1 > cislo2){
        printf ("%i\n", cislo1*cislo2);
        printf ("%i\n", cislo1+cislo2);
        printf ("%i\n", cislo1-cislo2);
        if (cislo1 == 0 || cislo2 == 0){
            printf("0\n0");
        } else {
            printf ("%f\n", (float)cislo1/(float)cislo2);
            printf ("%.0f\n", (float)cislo1/(float)cislo2);
        }
    }else{
        printf ("%i\n", cislo2*cislo1);
        printf ("%i\n", cislo2+cislo1);
        printf ("%i\n", cislo2-cislo1);
        if (cislo1 == 0 || cislo2 == 0){
            printf("0\n0");
        } else {
            printf ("%f\n", (float)cislo1/(float)cislo2);
            printf ("%.0f\n", (float)cislo1/(float)cislo2);
        }}}
