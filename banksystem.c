#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bankAccount{
    int accountNumber;
    char accountHolderName[50];
    float balance;
};

struct bankAccount accounts[100];

int numAccounts = 0;

void createAccount(){
    int accountNumber;
    char accountHolderName[50];
    float balance;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter account holder name: ");
    scanf("%s", accountHolderName);
    printf("Enter balance: ");
    scanf("%f", &balance);
    accounts[numAccounts].accountNumber = accountNumber;
    strcpy(accounts[numAccounts].accountHolderName, accountHolderName);
    accounts[numAccounts].balance = balance;
    numAccounts++;
    printf("Account created successfully.\n");
}

void deposit(){
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    for(int i = 0; i < numAccounts; i++){
        if(accounts[i].accountNumber == accountNumber){
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdraw(){
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    for(int i = 0; i < numAccounts; i++){
        if(accounts[i].accountNumber == accountNumber){
            if(accounts[i].balance >= amount){
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
                return;
            }
            else{
                printf("Insufficient balance.\n");
                return;
            }
        }
    }
    printf("Account not found.\n");
}

void checkBalance(){
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    for(int i = 0; i < numAccounts; i++){
        if(accounts[i].accountNumber == accountNumber){
            printf("Account holder name: %s\n", accounts[i].accountHolderName);
            printf("Account balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

int main(){
    int choice;
    do{
        printf("\nMenu\n");
        printf("1. Create account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printf("Thank you for using our banking system.\n"); break;
            default: printf("Invalid choice.\n"); break;
        }
    }while(choice != 5);
    return 0;
}
