
// Question 01:
#include <iostream>
using namespace std;

int main()
{
    int category, item, quantity;
    float price, total, discount, finalAmount;
    char choice;

    do
    {
        price = 0;
        discount = 0;

        cout << "\nSelect Category:\n";
        cout << "1. Electronics\n";
        cout << "2. Clothing\n";
        cout << "3. Groceries\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> category;

        if (category == 4)
        {
            cout << "Exiting program...\n";
            break;
        }

        switch (category)
        {
        case 1: // Electronics
            cout << "Electronics Items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Select item: ";
            cin >> item;

            switch (item)
            {
            case 1: price = 1000; break;
            case 2: price = 700; break;
            case 3: price = 150; break;
            default:
                cout << "Invalid item!\n";
                continue;
            }
            break;

        case 2: // Clothing
            cout << "Clothing Items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Select item: ";
            cin >> item;

            switch (item)
            {
            case 1: price = 120; break;
            case 2: price = 40; break;
            case 3: price = 60; break;
            default:
                cout << "Invalid item!\n";
                continue;
            }
            break;

        case 3: // Groceries
            cout << "Groceries Items:\n";
            cout << "1. Milk ($2)\n";
            cout << "2. Bread ($3)\n";
            cout << "3. Eggs ($5)\n";
            cout << "Select item: ";
            cin >> item;

            switch (item)
            {
            case 1: price = 2; break;
            case 2: price = 3; break;
            case 3: price = 5; break;
            default:
                cout << "Invalid item!\n";
                continue;
            }
            break;

        default:
            cout << "Invalid category!\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        total = price * quantity;

        if (total >= 100 && total <= 500)
            discount = total * 0.10;
        else if (total > 500)
            discount = total * 0.20;

        finalAmount = total - discount;

        cout << "\nTotal Price: $" << total << endl;
        cout << "Discount: $" << discount << endl;
        cout << "Final Amount: $" << finalAmount << endl;

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated successfully.\n";
    return 0;
}


// Question 02:
/*#include <iostream>
using namespace std;

int main()
{
    int choice;
    float usd, result;

    cout << "Enter amount in USD: ";
    cin >> usd;

    cout << "Convert to:\n";
    cout << "1. PKR\n";
    cout << "2. Pound\n";
    cout << "3. Euro\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = usd * 278;   // USD to PKR
        cout << "Amount in PKR: " << result << endl;
        break;

    case 2:
        result = usd * 0.79;  // USD to Pound
        cout << "Amount in Pound: " << result << endl;
        break;

    case 3:
        result = usd * 0.92;  // USD to Euro
        cout << "Amount in Euro: " << result << endl;
        break;

    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}*/

// Question 03:

/*#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area;

    cout << "Select Shape:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        area = 3.1416 * radius * radius;
        cout << "Area of Circle: " << area << endl;
        break;

    case 2:
        float length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        area = length * width;
        cout << "Area of Rectangle: " << area << endl;
        break;

    case 3:
        float base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
        break;

    default:
        cout << "Invalid shape selection!\n";
    }

    return 0;
}*/


// Question 04:
/*#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero.\n";
        break;

    default:
        cout << "Invalid operator!\n";
    }

    return 0;
}*/








