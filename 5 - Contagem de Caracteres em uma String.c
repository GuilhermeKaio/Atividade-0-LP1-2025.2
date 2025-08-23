#include <stdio.h>
#include <string.h>

int main(void){
    char str[420];
    fgets(str, sizeof(str), stdin);
    printf("%ld caracteres \n", strlen(str) - 1);
    return 0;
}