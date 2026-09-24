#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string department;
    int level;
    double cgpa;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your department: ";
    cin >> department;

    cout << "Enter your level (100, 200, 300): ";
    cin >> level;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "\n--- STUDENT PROFILE ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Level: " << level << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Good morning " << name << "! Keep pushing!" << endl;

    return 0;
}