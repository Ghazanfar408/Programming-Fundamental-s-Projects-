//Question 01:
#include <iostream>
using namespace std;

int main() {
    int numbers[5], sum = 0;

    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum of the numbers is: " << sum << endl;
    return 0;
}


//Question 02:
/*#include <iostream>
using namespace std;

int main() {
    int count;

    // Input validation
    do {
        cout << "Enter how many numbers you want to average (1-100): ";
        cin >> count;
        if (count < 1 || count > 100) {
            cout << "Invalid input. Please enter a number between 1 and 100.\n";
        }
    } while (count < 1 || count > 100);

    int numbers[100];
    int sum = 0;

    for (int i = 0; i < count; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = static_cast<float>(sum) / count;
    cout << "Average is: " << average << endl;

    return 0;
}*/


//Question 03:

/*#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The largest number is: " << max << endl;
    return 0;
}*/








