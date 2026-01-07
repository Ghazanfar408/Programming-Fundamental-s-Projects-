//Question no #01:
// part (a)
#include <iostream>
using namespace std;
int main() {
    cout << "----------------------------\n";
    cout << "\t Student ID Card\n";
    cout << "----------------------------\n";
    cout << "Name:\t\tGhazanfar Rasheed\n";
    cout << "Roll No:\t2025_SET_14\n";
    cout << "Department:\tSoftware Engineering\n";
    cout << "Session:\t2025-2029\n";
    cout << "----------------------------\n";
    return 0;
	}
	
// part (b)

/*#include <iostream>
using namespace std;
int main() {
    std::cout << "C:\\Program Files\\Dev-C++\\MinGW64\\bin\\\n\n";
    std::cout << "********* MENU *********\n";
    std::cout << "1. Biryani\tRs. 350\n";
    std::cout << "2. Karahi\tRs. 600\n";
    std::cout << "3. Qorma\tRs. 500\n";
    std::cout << "4. Drinks\tRs. 100\n";
    std::cout << "************************\n";
    return 0;
}*/

// part (c)

/*#include <iostream>
using namespace std;
int main() {
    std::cout << "Certificate of Achievement\n";
    std::cout << "\n";
    std::cout << "This is to certify that \"Ghazanfar Rasheed\"\n";
    std::cout << "has successfully completed the\n";
    std::cout << "course \"C++ Programming\" with A+ Grade.\n";
    return 0;
}*/

// part (d)

/*#include <iostream>
using namespace std;
int main() {
    std::cout << "| Roll No | Marks |\n";
    std::cout << "-----------------\n";
    std::cout << "| 101     | 89    |\n";
    std::cout << "| 102     | 92    |\n";
    std::cout << "| 103     | 85    |\n";
    std::cout << "-----------------\n";
    return 0;
}*/

//Question no#02

/*#include <iostream>
using namespace std;

int main()
{
    string name, department;
    int roll;
    float eng, math, phy;
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter marks in English: ";
    cin >> eng;
    cout << "Enter marks in Math: ";
    cin >> math;
    cout << "Enter marks in Physics: ";
    cin >> phy;
    float total = eng + math + phy;
    float percentage = (total / 300) * 100;
    string grade;
    if(percentage >= 90) grade = "A+";
    else if(percentage >= 80) grade = "A";
    else if(percentage >= 70) grade = "B";
    else if(percentage >= 60) grade = "C";
    else grade = "Fail";
    cout << "\n=====================================\n";
    cout << "          STUDENT RESULT CARD        \n";
    cout << "=====================================\n";
    cout << "Name:\t\t" << name << endl;
    cout << "Roll No:\t" << roll << endl;
    cout << "Department:\t" << department << endl;
    cout << "-------------------------------------\n";
    cout << "Subject\t\tMarks\n";
    cout << "-------------------------------------\n";
    cout << "English\t\t" << eng << endl;
    cout << "Math\t\t" << math << endl;
    cout << "Physics\t\t" << phy << endl;
    cout << "-------------------------------------\n";
    cout << "Total Marks:\t" << total << "/300" << endl;
    cout << "Percentage:\t" << percentage << "%" << endl;
    cout << "=====================================\n";
    cout << "Grade:\t\t" << grade << endl;
    cout << "=====================================\n";
    cout << "\nCongratulations " << name << "!\n";
    cout << "=====================================\n";
    return 0;
}*/





