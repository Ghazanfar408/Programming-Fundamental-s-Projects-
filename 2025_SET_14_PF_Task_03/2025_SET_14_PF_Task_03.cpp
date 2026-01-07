#include <iostream>
using namespace std;

int main() {
    // Expression 1
    cout << "5+3*2 = " << (5+3*2) << endl;

    // Expression 2
    cout << "8/4+6*3 = " << (8/4+6*3) << endl;

    // Expression 3
    cout << "(10+2)*5-6/2 = " << ((10+2)*5-6/2) << endl;

    // Expression 4
    cout << "9-3+2*4 = " << (9-3+2*4) << endl;

    // Expression 5
    cout << "15/(3+2)*(6-4) = " << (15/(3+2)*(6-4)) << endl;

    // Expression 6
    cout << "10+6/2*3-4 = " << (10+6/2*3-4) << endl;

    // Expression 7
    cout << "7+(3*4)-(6/2) = " << (7-(3*4)-(6/2)) << endl;

    // Expression 8
    cout << "5+10/4*3-2 = " << (5+10/4*3-2) << endl;

    // Expression 9
    cout << "5+10.0/4*3-2 = " << (5+10.0/4*3-2) << endl;

    // Expression 10
    cout << "(25/((3+2))*4-(18%5)+6 = " << ((25/((3+2))*4-(18%5)+6)) << endl;

    // Expression 11
    cout << "10+5>3*4 = " << (10+5>3*4) << endl;

    // Expression 12
    cout << "5*3>20 || 12%5==2 = " << (5*3>20 || 12%5==2) << endl;

    // Expression 13
    int x = 5, y = 3;
    cout << "x++ ++y > 10 = " << (++x + ++y > 10) << endl;

    // Expression 14
    int m = 2, n = 3, o = 4;
    cout << "m++ ++n * ++o = " << (m++ * ++n * ++o) << endl;

    return 0;
}

// Task 01

/*#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The number " << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;
    return 0;
}*/

// Task 02

/*#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    string category = (age < 13) ? "Child" :
                     (age <= 19) ? "Teenager" : "Adult";

    cout << "Age " << age << " falls under the category: " << category << endl;
    return 0;
}*/


// Task 03


/*#include <iostream>
#include<string>
using namespace std;

int main() {
    float balance;
    int loyal;

    cout << "Enter account balance: $";
    cin >> balance;

    cout << "Are you a loyal customer? (1 = Yes, 0 = No): ";
    cin >> loyal;

    // Determine account type
    string accountType = (balance < 100) ? "Low Balance Account" :
                         (balance <= 500) ? "Standard Account" : "Premium Account";

    // Determine special offer eligibility
    string offer = ((balance > 200 && loyal == 1)) ? "Eligible for special offer " : "Not Eligible for special offer ";
    cout << "Account Type: " << accountType << endl;
    cout << "Special Offer: " << offer << endl;

    return 0;
}*/






