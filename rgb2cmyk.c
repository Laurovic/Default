#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float Red, Green, Blue, cyan, magenta, yellow, black, max, Red1, Green1, Blue1;

    printf("Zadaj R:");
    scanf("%f",&Red);
    if (Red * (Red - 255) <= 0) {
        printf("Zadaj G:");
        scanf("%f", &Green);
        if (Green * (Green - 255) <= 0) {
            printf("Zadaj B:");
            scanf("%f", &Blue);
            if (Blue * (Blue - 255) <= 0) {
                Red1 = Red / 255;
                Green1 = Green / 255;
                Blue1 = Blue / 255;

                if (Red == 0 && Green == 0 && Blue == 0) {
                    cyan = 0, magenta = 0, yellow = 0, black = 1;
                    printf("%.0f\n%.0f\n%.0f\n%.0f", cyan * 100, magenta * 100, yellow * 100, black * 100);
                    exit(0);
                }

                max = Red1;
                if (Green1 > max) {
                    max = Green1;
                }
                if (Blue1 > max) {
                    max = Blue1;
                }

                black = 1 - max;
                cyan = (max - Red1) / max;
                magenta = (max - Green1) / max;
                yellow = (max - Blue1) / max;

                printf("%.0f\n%.0f\n%.0f\n%.0f", cyan * 100, magenta * 100, yellow * 100, black * 100);
                exit(0);
            }}}
    printf("Zly vstup");}