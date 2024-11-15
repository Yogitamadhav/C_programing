#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 100

char username[MAX_USERNAME_LENGTH], password[MAX_USERNAME_LENGTH];
char enteredUsername[MAX_USERNAME_LENGTH], enteredPassword[MAX_USERNAME_LENGTH];
float balance = 0.0;

void deposit(float amount);
void withdraw(float amount);
void checkBalance();
int login();

int main() {
    int choice;
    float amount;

    printf("Welcome to the Basic Bank Account Management System!\n");

    // Loop to show the menu until the user chooses to exit
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Create a new account\n");
        printf("2. Login to your account\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);
        getchar();  // This will consume the newline left by scanf

        switch (choice) {
            case 1:
                // Creating a new account
                printf("Creating a new account...\n");
                printf("Enter new username: ");
                fgets(username, MAX_USERNAME_LENGTH, stdin);
                username[strcspn(username, "\n")] = 0;  // Remove the newline character

                printf("Enter new password: ");
                fgets(password, MAX_USERNAME_LENGTH, stdin);
                password[strcspn(password, "\n")] = 0;

                printf("Account created successfully!\n");
                break;

            case 2:
                // Login process
                if (login()) {
                    printf("Login successful!\n");
                } else {
                    printf("Invalid username or password. Please try again.\n");
                }
                break;

            case 3:
                // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 4:
                // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 5:
                // Check balance
                checkBalance();
                break;

            case 6:
                // Exit the program
                printf("Thank you for using the bank management system. Goodbye!\n");
                return 0;  // Exits the program

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

// Login function to verify username and password
int login() {
    printf("Enter your username: ");
    fgets(enteredUsername, MAX_USERNAME_LENGTH, stdin);
    enteredUsername[strcspn(enteredUsername, "\n")] = 0;  // Remove newline

    printf("Enter your password: ");
    fgets(enteredPassword, MAX_USERNAME_LENGTH, stdin);
    enteredPassword[strcspn(enteredPassword, "\n")] = 0;

    // Check if the entered username and password match
    if (strcmp(username, enteredUsername) == 0 && strcmp(password, enteredPassword) == 0) {
        return 1;  // Login successful
    }
    return 0;  // Login failed
}

// Deposit function to add money to the account
void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Successfully deposited %.2f.\n", amount);
    } else {
        printf("Deposit failed! Amount must be greater than 0.\n");
    }
}

// Withdraw function to remove money from the account
void withdraw(float amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            printf("Successfully withdrew %.2f.\n", amount);
        } else {
            printf("Insufficient balance! Withdrawal failed.\n");
        }
    } else {
        printf("Invalid amount. Withdrawal must be greater than 0.\n");
    }
}

// Function to check the current balance
void checkBalance() {
    printf("Your current balance is: %.2f\n", balance);
}
