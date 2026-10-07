#include <stdio.h>

int main(){

    for (int i = 1 ; i <= 100 ; i++)
    {
        printf("%3d\t", i * 3);

        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}