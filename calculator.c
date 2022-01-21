#include <stdio.h>

int main(){

    int num1, num2;
    int character;
    printf("Please, enter first number: ");
    scanf("%d", &num1);

    printf("Please, enter second number: ");
    scanf("%d", &num2);

    printf("What do you want:\n 1. +\n 2. -\n 3. *\n 4. /\n 5. %\n");
    scanf("%d", &character);

    switch(character){
    case 1:
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
    case 5:
        printf("%d %% %d = %d", num1, num2, num1 % num2);
        break;
    default:
        printf("Please enter correct number!");
        break;
    }

    return 0;
}
