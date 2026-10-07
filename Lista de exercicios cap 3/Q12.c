#include <stdio.h>

int main() {
    float fahrenheit, kelvin;

    printf("===============================================\n");
    printf("  Celsius (C)   |   Fahrenheit (F)   |   Kelvin (K)  \n");
    printf("===============================================\n");

    for (int celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        printf("  %10.2f   |   %14.2f   |   %10.2f  \n", (float)celsius, fahrenheit, kelvin);
    }

    printf("===============================================\n");

    return 0;
}