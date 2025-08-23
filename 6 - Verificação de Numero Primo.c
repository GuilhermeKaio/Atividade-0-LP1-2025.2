#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0){
            printf("não é primo!");
            return 0;
        }
    }
    (n > 1) ? printf("é primo.") : printf("não é primo!");

    return 0;
}