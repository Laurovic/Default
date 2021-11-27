#include <stdio.h>
#include <stdlib.h>

int main(void){
    float cyan, magenta, yellow, black;

    printf("Zadaj C (0-100):");
    scanf("%f", &cyan);

    if (cyan*(cyan-100) <= 0){
        printf("Zadaj M (0-100):");
        scanf("%f", &magenta);
        if (magenta*(magenta-100) <= 0){
            printf("Zadaj Y (0-100):");
            scanf("%f", &yellow);
            if (yellow*(yellow-100) <= 0){
                printf("Zadaj K (0-100):");
                scanf("%f", &black);
                if (black*(black-100) <= 0){
                    float red = 255*(1-cyan/100)*(1-black/100);
                    float green = 255*(1-magenta/100)*(1-black/100);
                    float blue = 255*(1-yellow/100)*(1-black/100);

                    printf(" %.0f\n %.0f\n %.0f\n", red, green, blue);
                    exit(0);}
                printf("Zly vstup");
                exit(0);}
            printf("Zly vstup");
            exit(0);}
        printf("Zly vstup");
        exit(0);}
    printf("Zly vstup");
    exit(0);}
