#include <stdio.h>

int main (){
    
    int i = 1;
    int j = 1;
    int k = 1;


    printf("for: ");
    for(i ;i <= 100 ; i++)
    {
        printf("%d ", i);
    }
    
    printf("\n\nwhile: ");
    while (j <= 100)
    {
        printf("%d ", j);
        j++;
    }

    printf("\n\ndo-while: ");
    do
    {
        printf("%d ", k);
        k++;
    } while(k <= 100);

}
