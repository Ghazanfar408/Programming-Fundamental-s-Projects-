
// Question # 01:
#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter current temperature (C): ";
    cin >> temperature;

    if (temperature > 45)
    {
        cout << "ALERT! Temperature is above safe limit.\n";
    }
    else
    {
        cout << "Temperature is within the safe range.\n";
    }

    return 0;
}

// Question # 02:
/*#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill;
    const int allowedUnits = 100;
    const float maintenanceFee = 39;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= allowedUnits)
    {
        bill = units * 5;
    }
    else
    {
        bill = units * 10;
        bill = bill + (bill * 0.29); // 29% sales tax
    }

    bill = bill + maintenanceFee;

    cout << "Total Electricity Bill: $" << bill << endl;

    return 0;
}*/

// Question # 03:
/*#include <iostream>
using namespace std;

int main()
{
    float salary, bonus = 0;
    int years;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    if (years >= 3)
    {
        if (years <= 5)
            bonus = salary * 0.05;
        else if (years <= 10)
            bonus = salary * 0.10;
        else
            bonus = salary * 0.15;
    }
    else
    {
        bonus = 0;
    }

    float newSalary = salary + bonus;

    cout << "Bonus Amount: " << bonus << endl;
    cout << "Updated Salary: " << newSalary << endl;

    return 0;
}*/

// Question 04:
/*#include <iostream>
using namespace std;

int main()
{
    int level, experience;
    char remote;
    float basicSalary = 0;
    float expBonus = 0;
    float remoteBonus = 0;
    float grossSalary, tax = 0, finalSalary;

    cout << "Enter Job Level (1-4): ";
    cin >> level;

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "Working in remote area? (y/n): ";
    cin >> remote;

    // Basic Salary
    if (level == 1)
        basicSalary = 120000;
    else if (level == 2)
        basicSalary = 85000;
    else if (level == 3)
        basicSalary = 60000;
    else if (level == 4)
        basicSalary = 40000;
    else
    {
        cout << "Invalid Job Level!\n";
        return 0;
    }

    // Experience Bonus
    if (experience >= 15)
        expBonus = basicSalary * 0.25;
    else if (experience >= 10)
        expBonus = basicSalary * 0.15;
    else if (experience >= 5)
        expBonus = basicSalary * 0.10;
    else
        expBonus = 0;

    // Remote Bonus
    if (remote == 'y' || remote == 'Y')
        remoteBonus = basicSalary * 0.08;

    grossSalary = basicSalary + expBonus + remoteBonus;

    // Tax Calculation
    if (grossSalary >= 150000)
        tax = grossSalary * 0.30;
    else if (grossSalary >= 100000)
        tax = grossSalary * 0.20;
    else if (grossSalary >= 60000)
        tax = grossSalary * 0.10;
    else
        tax = 0;

    finalSalary = grossSalary - tax;

    cout << "\n----- Salary Details -----\n";
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Experience Bonus: " << expBonus << endl;
    cout << "Remote Bonus: " << remoteBonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}*/



