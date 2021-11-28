#include <stdio.h>

int main(void) {
    int str1, str2, str3;

    printf("Zadaj prvu stranu :");
    scanf("%i", &str1);
    printf("Zadaj druhu stranu :");
    scanf("%i", &str2);
    printf("Zadaj tretiu stranu :");
    scanf("%i", &str3);

    int tst1 = str1*str1==str2*str2+str3*str3;
    int tst2 = str2*str2==str3*str3+str1*str1;
    int tst3 = str3*str3==str2*str2+str1*str1;

    if (tst1 || tst2 || tst3 == 1 ) {
        printf("true");
    } else {
        printf("false");
    }}
