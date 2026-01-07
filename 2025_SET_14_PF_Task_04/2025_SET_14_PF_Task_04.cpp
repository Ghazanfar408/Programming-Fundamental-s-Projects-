// Task 01 
// (a)
#include <iostream>
using namespace std;

int main() {
    // Item prices
    int burger_price = 350;
    int drink_price = 120;
    int fries_price = 150;

    // Quantities
    int burgers = 2, drinks = 1, fries = 1;

    // 1. Total bill
    int total = (burgers * burger_price) + (drinks * drink_price) + (fries * fries_price);

    // 2. Sales tax (7%)
    float tax = total * 0.07;

    // 3. Final amount
    float final_amount = total + tax;

    // 4. Average cost per item
    float avg_cost = final_amount / (burgers + drinks + fries);

    cout << "Total Bill: " << total << " PKR\n";
    cout << "Sales Tax (7%): " << tax << " PKR\n";
    cout << "Final Amount: " << final_amount << " PKR\n";
    cout << "Average Cost per Item: " << avg_cost << " PKR\n";

    return 0;
}

// (b)

/*#include <iostream>
using namespace std;

int main() {
    float ticket_price = 1200;

    // Apply 25% discount
    float discounted = ticket_price - (ticket_price * 0.25);

    // Add 8% service charges
    float service_charges = discounted * 0.08;

    // Add Rs. 50 online booking fee
    float final_price = discounted + service_charges + 50;

    cout << "Final Ticket Price: " << final_price << " PKR\n";

    return 0;
}*/

// Task 02
// (a)

/*#include <iostream>
using namespace std;

int main() {
    int required_stock = 500;
    int current_stock = 420;

    cout << "Is stock sufficient? " << (current_stock >= required_stock) << endl;
    cout << "Is stock less than 50% of required? " << (current_stock < (required_stock / 2)) << endl;
    cout << "Is stock exactly equal to required? " << (current_stock == required_stock) << endl;
    cout << "Is shortage greater than 50? " << ((required_stock - current_stock) > 50) << endl;

    return 0;
}*/

 // (b)

/*#include <iostream>
using namespace std;

int main() {
    int total_classes = 60;
    int attended = 48;
    float attendance_percent = (attended * 100.0) / total_classes;

    cout << "Requirement met (>=75%)? " << (attendance_percent >= 75) << endl;
    cout << "Attended more than 50 classes? " << (attended > 50) << endl;
    cout << "Attended less than 60%? " << (attendance_percent < 60) << endl;

    return 0;
}*/




















