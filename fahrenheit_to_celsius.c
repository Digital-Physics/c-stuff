#include <stdio.h>

int main(void){
    float fahr, cels;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;

    printf("Fahrenheit to Celsius:\n");

    while (fahr <= upper) {
        cels = (fahr - 32.0) * (5.0/9.0);
        printf("%f\t%f\n", fahr, cels);
        printf("%3.0f%6.1f\n", fahr, cels); // %6.1f is "at least 6 characters wide, with 1 digit after decimal"
        printf("%.2f%6f\n\n", fahr, cels); // 2 decimals; at least 6 characters wide
        fahr = fahr + step;
    }
}