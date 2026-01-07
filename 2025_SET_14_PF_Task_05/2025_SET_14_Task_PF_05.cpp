// Task 01
// (a)

#include <iostream>
using namespace std;

int main() {
    int attendance;
    cout<<"Enter your attendance: "<<endl;
    cin>>attendance;
    bool feePaid = true;
    cout << "Eligibility: " << ((attendance >= 75 && feePaid) ? "Eligible" : "Not Eligible") << endl;
    return 0;
}


// (b)

/*#include <iostream>
using namespace std;

int main() {
    float purchaseAmount;
    bool membershipCard = false;
    cout<<"Enter your purchaseamount: "<<endl;
    cin>>purchaseAmount;
    cout << "Discount Status: " << ((purchaseAmount > 5000 || membershipCard) ? "Discount Applied" : "No Discount") << endl;
    return 0;
}*/

// Task 02
// (a)

/*#include <iostream>
using namespace std;

int main() {
    float balance;
     cout<<"Enter your balance: "<<endl;
    cin>>balance;
    balance += balance * 0.10; // 10% bonus
    cout << "Updated Balance with Bonus: " << balance << endl;
    return 0;
}*/

// (b)

/*#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
    marks += 5; // grace marks
    cout << "Total Marks after Grace: " << marks << endl;
    return 0;
}*/

// (c)

/*#include <iostream>
using namespace std;

int main() {
    int fuel;
    cout<<"Enter your fuel: "<<endl;
    cin>>fuel;
    fuel -= 2; // 2 liters consumed
    cout << "Fuel Left: " << fuel << " liters" << endl;
    return 0;
}*/

// (d)

/*#include <iostream>
using namespace std;

int main() {
    int temperature ;
    bool windowClosed = true;
    cout<<"Enter your temperature: "<<endl;
    cin>>temperature;
    cout << ((temperature > 30 && windowClosed) ? "AC ON" : "AC OFF") << endl;
    return 0;
}*/
































