// Question 01:
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    cout << "First 10 natural numbers:" << endl;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    return 0;
}
// Question 02:
/*#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }

    cout << "Sum of first 10 natural numbers is: " << sum << endl;

    return 0;
}*/
// Question 03:
/*#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":" << endl;
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}*/

// Question 04:
/*#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    long long factorial = 1;
cout << "Enter a number to find its factorial: ";
    cin >> num;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}*/
// Question 05:
/*#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    cout << "Enter a number to find its factors: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    while (i <= num) {
        if (num % i == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}*/










