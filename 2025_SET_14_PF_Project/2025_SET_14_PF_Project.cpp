#include <iostream>
using namespace std;

// Constants
const int MAX_ITEMS = 50;

// Global arrays
string foodItems[MAX_ITEMS];
int foodPrices[MAX_ITEMS];
int foodQty[MAX_ITEMS];
int totalItems = 0;

// Function to add item
void addItem(string name, int price, int quantity) {
    for (int i = 0; i < totalItems; i++) {
        if (foodItems[i] == name) {
            foodQty[i] += quantity;
            return;
        }
    }
    foodItems[totalItems] = name;
    foodPrices[totalItems] = price;
    foodQty[totalItems] = quantity;
    totalItems++;
}

// Show category items and take order
void showCategory(string category) {
    int choice, qty;

    if (category == "Fast Food") {
        cout << "\n--- Fast Food Menu ---\n";
        cout << "1. Burger - Rs.250\n";
        cout << "2. Fries - Rs.150\n";
        cout << "3. Sandwich - Rs.200\n";
        cout << "Select item: ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> qty;

        if (choice == 1) addItem("Burger", 250, qty);
else if (choice == 2) addItem("Fries", 150, qty);
        else if (choice == 3) addItem("Sandwich", 200, qty);
        else cout << "Invalid choice.\n";
    }

    else if (category == "Drinks") {
        cout << "\n--- Drinks Menu ---\n";
        cout << "1. Cola - Rs.100\n";
        cout << "2. Juice - Rs.120\n";
        cout << "3. Water - Rs.50\n";
        cout << "Select item: ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> qty;

        if (choice == 1) addItem("Cola", 100, qty);
        else if (choice == 2) addItem("Juice", 120, qty);
        else if (choice == 3) addItem("Water", 50, qty);
        else cout << "Invalid choice.\n";
    }

    else if (category == "Desserts") {
        cout << "\n--- Desserts Menu ---\n";
        cout << "1. Ice Cream - Rs.180\n";
        cout << "2. Cake Slice - Rs.200\n";
        cout << "3. Donut - Rs.100\n";
        cout << "Select item: ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> qty;

        if (choice == 1) addItem("Ice Cream", 180, qty);
        else if (choice == 2) addItem("Cake Slice", 200, qty);
        else if (choice == 3) addItem("Donut", 100, qty);
        else cout << "Invalid choice.\n";
    }

    else {
        cout << "Invalid category.\n";
    }
}
// Function to display bill
void showBill() {
    int total = 0;
    cout << "\n--- Your Bill ---\n";

    for (int i = 0; i < totalItems; i++) {
        int price = foodPrices[i] * foodQty[i];
        cout << foodItems[i] << " x " << foodQty[i] << " = Rs. " << price << endl;
        total += price;
    }

    cout << "------------------\n";
    cout << "Total Amount: Rs. " << total << endl;
}

// Main menu and control
int main() {
    int mainChoice;

    do {
        cout << "\n====== Restaurant Menu ======\n";
        cout << "1. Fast Food\n";
        cout << "2. Drinks\n";
        cout << "3. Desserts\n";
        cout << "4. Show Bill\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                showCategory("Fast Food");
                break;
            case 2:
                showCategory("Drinks");
                break;
            case 3:
                showCategory("Desserts");
                break;
            case 4:
                showBill();
                break;
            case 5:
                cout << "Thank you! Visit again.\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
} while (mainChoice != 5);

    return 0;
}

