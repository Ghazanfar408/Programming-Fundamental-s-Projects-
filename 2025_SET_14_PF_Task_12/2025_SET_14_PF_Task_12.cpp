// Question 01:
#include <iostream>
using namespace std;

// Function to calculate bonus based on salary and rating
float calculateBonus(float salary, int rating) {
    float bonus = 0;

    if (rating == 5)
        bonus = salary * 0.20;
    else if (rating == 4)
        bonus = salary * 0.10;
    else if (rating == 3)
        bonus = salary * 0.05;
    else
        bonus = 0;

    return bonus;
}

// Function to display bonus and final salary
void displayBonus(float salary, float bonus) {
    float finalSalary = salary + bonus;
    cout << "Bonus Amount: " << bonus << endl;
    cout << "Final Salary after Bonus: " << finalSalary << endl;
}

int main() {
    float salary;
    int rating;

    cout << "Enter employee salary: ";
    cin >> salary;
    cout << "Enter performance rating (1 to 5): ";
    cin >> rating;

    float bonus = calculateBonus(salary, rating);
    displayBonus(salary, bonus);

    return 0;
}
// Question 02:
/*#include <iostream>
using namespace std;

// Function to calculate percentage
float calculatePercentage(int m1, int m2, int m3, int m4, int m5) {
int totalMarks = m1 + m2 + m3 + m4 + m5;
    float percentage = (totalMarks / 500.0) * 100;
    return percentage;
}

// Function to display result
void displayResult(float percentage) {
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;
}

int main() {
    int m1, m2, m3, m4, m5;
    string name;
    cout << "Enter name of student : " << endl;
    cin >> name;
    cout << "Enter marks of 5 subjects (out of 100):" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float percentage = calculatePercentage(m1, m2, m3, m4, m5);
    displayResult(percentage);

    return 0;
}*/












