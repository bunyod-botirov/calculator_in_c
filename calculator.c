#include <stdio.h>

int main(){

    float num1, num2;
    int character;
    bool check = false;

    while(1){
        if(check){
            break;
        }
        printf("-----CALCULATOR-----\n");

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        printf("0. Exit\n1. +\n2. -\n3. *\n4. /\nPlease enter the number: ");
        scanf("%d", &character);

        switch(character){
            case 0:
                check = true;
                break;
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                break;
            case 5:
                printf("%d %% %d = %d", num1, num2, num1 % num2);
                break;
            default:
                printf("Please enter correct number!\n");
                break;
        }
    }
    return 0;
}
