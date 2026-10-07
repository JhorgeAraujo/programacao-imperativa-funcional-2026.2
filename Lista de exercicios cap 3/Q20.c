#include <stdio.h>

int main(){
    for (int i = 32; i <= 126; i++)
    {
        printf("Decimal: %3d | Hexadecimal: %02X | Caractere: %c\n", i, i, i);
    }


}