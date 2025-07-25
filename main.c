#include <stdio.h> // preprocessor directive
#include <stdbool.h> //needed for bools
#include <string.h> // helps in working with strings

int main(){
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    printf("enter item: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1]= '\0';

    printf("price of each: ");
    scanf("%f", &price);

    printf("enter QTY: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYour items: %d %s\n", quantity, item);
    printf("%c%.2f", currency, total);

    return 0;
}