#include <stdio.h>

int main(void){
    int sum = 0;
    int a[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    
    printf("%d", sum);

    return 0;
}