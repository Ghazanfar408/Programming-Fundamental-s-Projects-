// Question 01:
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}

// Question 02:
/*#include <iostream>
using namespace std;

int main() {
    int num, limit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}*/

// Question 03:
/*#include <iostream>
using namespace std;

int main() {
    int n, value, evenSum = 0, oddSum = 0;
    cout << "How many numbers you want to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;

        if (value % 2 == 0)
            evenSum += value;
        else
            oddSum += value;
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}*/

// Question 04(using for loop):
/*#include <iostream>
using namespace std;

int main() {
    int popA, popB, years = 0;
    float rateA, rateB;

    cout << "Enter population of town A: ";
    cin >> popA;
    cout << "Enter growth rate of town A (%): ";
    cin >> rateA;
    cout << "Enter population of town B: ";
    cin >> popB;
    cout << "Enter growth rate of town B (%): ";
    cin >> rateB;

    for (years = 0; popA < popB; years++) {
        popA += (popA * rateA / 100);
        popB += (popB * rateB / 100);
    }

    cout << "After " << years << " years, population of town A will be " << popA
         << " and town B will be " << popB << endl;

    return 0;
}*/
// (using while loop):
/*#include <iostream>
using namespace std;

int main() {
    int popA, popB, years = 0;
    float rateA, rateB;

    cout << "Enter population of town A: ";
    cin >> popA;
    cout << "Enter growth rate of town A (%): ";
    cin >> rateA;
    cout << "Enter population of town B: ";
    cin >> popB;
    cout << "Enter growth rate of town B (%): ";
    cin >> rateB;

    while (popA < popB) {
        popA += (popA * rateA / 100);
        popB += (popB * rateB / 100);
        years++;
    }
cout << "After " << years << " years, population of town A will be " << popA
         << " and town B will be " << popB << endl;

    return 0;
}*/
//Question 05:
/*#include <iostream>
using namespace std;

int main() {
    int temps[7];
    int sum = 0, highest = -1000;

    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int i = 0; i < 7; i++) {
        cout << "Enter temperature for " << days[i] << ": ";
        cin >> temps[i];
        sum += temps[i];

        if (temps[i] > highest)
            highest = temps[i];
    }

    float avg = sum / 7.0;

    cout << "Average temperature of the week: " << avg << endl;
    cout << "Highest temperature recorded: " << highest << endl;

    return 0;
}*/





