#include <stdio.h> 

int main (){

    int ddd, mm, aaa;
    printf("Por favor, digite o dia, mês e ano: ");
    scanf("%d/%d/%d", &ddd, &mm, &aaa);

    printf ("%04d/%02d/%02d", aaa, mm, ddd); 

}