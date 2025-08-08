#include <stdio.h>

int main() {
    int menu;
    float money = 0; 
    float deposit = 0;
    float withdraw = 0;


    while (menu != 4) {
        printf("====== ATM MENU ======");
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit");
        printf("\nChoose an option: ");
        scanf("%d",&menu);

        if (menu == 2){
            printf("Enter amount to deposit: ");
            scanf("%f",&deposit);

            money = money + deposit;
            printf("\n");

        }
        else if (menu == 3){
            printf("Enter amount to withdraw: ");
            scanf("%f",&withdraw);

            money = money - withdraw;

            printf("Withdrawal successful.\n");
            printf("\n");
        }
        else if (menu == 1){
            printf("Current Balance: %.2f\n",money);
            printf("\n");
        }
        else{
            printf("Thank you for using the ATM.\n");
        }
    }

    return 0;
}
