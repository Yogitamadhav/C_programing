#include <stdio.h>
#include <string.h>

#define MAX_CART_ITEMS 10
#define MAX_PRODUCT_NAME 50


typedef struct {
    char name[MAX_PRODUCT_NAME];
    float price; 
} Product;


typedef struct {
    Product product;
    int quantity;
} CartItem;


Product products[] = {
    {"Laptop", 70000.0},    
    {"Smartphone", 50000.0},
    {"Headphones", 2000.0},
    {"Keyboard", 1500.0},
    {"Mouse", 800.0}
};

int productCount = 5;  

CartItem cart[MAX_CART_ITEMS];  
int cartItemCount = 0;  


void displayProducts();
void addToCart(int productIndex, int quantity);
void viewCart();
void removeFromCart(int productIndex);
void checkout();

int main() {
    int choice, productIndex, quantity;

    printf("Welcome to the Online Shopping Cart System (in Rupees)!\n");

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. View Products\n");
        printf("2. Add Item to Cart\n");
        printf("3. View Cart\n");
        printf("4. Remove Item from Cart\n");
        printf("5. Checkout\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayProducts();
                break;
            case 2:
                printf("Enter product number to add to cart: ");
                scanf("%d", &productIndex);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                if (productIndex >= 1 && productIndex <= productCount) {
                    addToCart(productIndex - 1, quantity);  
                } else {
                    printf("Invalid product selection!\n");
                }
                break;
            case 3:
                viewCart();
                break;
            case 4:
                printf("Enter product number to remove from cart: ");
                scanf("%d", &productIndex);
                if (productIndex >= 1 && productIndex <= productCount) {
                    removeFromCart(productIndex - 1);  
                } else {
                    printf("Invalid product selection!\n");
                }
                break;
            case 5:
                checkout();
                break;
            case 6:
                printf("Thank you for using the online shopping cart system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}


void displayProducts() {
    printf("\n--- Available Products ---\n");
    for (int i = 0; i < productCount; i++) {
        printf("%d. %s - ₹%.2f\n", i + 1, products[i].name, products[i].price);
    }
}

void addToCart(int productIndex, int quantity) {
    if (cartItemCount < MAX_CART_ITEMS) {
        cart[cartItemCount].product = products[productIndex];
        cart[cartItemCount].quantity = quantity;
        cartItemCount++;
        printf("Added %d x %s to your cart.\n", quantity, products[productIndex].name);
    } else {
        printf("Cart is full! Cannot add more items.\n");
    }
}

void viewCart() {
    if (cartItemCount == 0) {
        printf("Your cart is empty.\n");
    } else {
        printf("\n--- Your Shopping Cart ---\n");
        for (int i = 0; i < cartItemCount; i++) {
            printf("%d. %s - Quantity: %d - Total: ₹%.2f\n",
                   i + 1, cart[i].product.name, cart[i].quantity,
                   cart[i].product.price * cart[i].quantity);
        }
    }
}


void removeFromCart(int productIndex) {
    int found = 0;
    for (int i = 0; i < cartItemCount; i++) {
        if (strcmp(cart[i].product.name, products[productIndex].name) == 0) {
            for (int j = i; j < cartItemCount - 1; j++) {
                cart[j] = cart[j + 1];  
            }
            cartItemCount--;
            found = 1;
            printf("Removed %s from your cart.\n", products[productIndex].name);
            break;
        }
    }
    if (!found) {
        printf("Item not found in your cart.\n");
    }
}

void checkout() {
    if (cartItemCount == 0) {
        printf("Your cart is empty! Cannot proceed to checkout.\n");
    } else {
        float total = 0.0;
        printf("\n--- Checkout ---\n");
        for (int i = 0; i < cartItemCount; i++) {
            total += cart[i].product.price * cart[i].quantity;
        }
        printf("Total amount: ₹%.2f\n", total);
        printf("Thank you for shopping with us!\n");
        cartItemCount = 0;  
    }
}
