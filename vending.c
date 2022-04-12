#include <stdio.h>

int main() {
    int amount, balance;

    printf("******* WELCOME TO THEE VENDING MACHINE **********" \n)
    printf("Products are Ice Cream: Ksh.60.00" \n)

    scanf("%d", &amount)

    if (amount == 20 || amount == 40) {
        printf("Correct amount")
    } else {
        printf("This machine only accepts Ksh. 20 or Ksh. 40")
    }
   
    return 0;
}