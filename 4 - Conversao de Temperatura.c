#include <stdio.h>

int main(void){
    int option = 1;
    float temp;

    printf("Celsius to Fahremheit(1) or Fahremheit to Celsius(2)?\n");
    scanf("%d", &option);
    if (option == 1)
    {
        scanf("%f", &temp);
        temp = (temp * 1.8) + 32;
    }
    else{
        if (option == 2)
        {
            scanf("%f", &temp);
            temp = (temp - 32) / 1.8; 
        }
        else{
            printf("Not a valid option");
            
            return 0;
        }   
    }
    
    printf("%.0f",temp);

    (option == 1) ? printf("°F") : printf("°C");

    return 0;
}