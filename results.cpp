#include <iostream>
using namespace std;

int main() {
    double math, physics, chemistry;
    double total, average;

    cout << "ENGINEERING RESULT CALCULATOR" << endl;
    cout << "Enter Math score: ";
    cin >> math;
    
    cout << "Enter Physics score: ";
    cin >> physics;
    
    cout << "Enter Chemistry score: ";
    cin >> chemistry;

    total = math + physics + chemistry;
    average = total / 3;

    cout << "\n--- RESULT ---" << endl;
    cout << "Total Score: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 70) {
        cout << "Grade: A - Excellent! Keep it up BELIEVE!" << endl;
    } else if (average >= 60) {
        cout << "Grade: B - Very Good!" << endl;
    } else if (average >= 50) {
        cout << "Grade: C - Good!" << endl;
    } else {
        cout << "Grade: F - You need to study more!" << endl;
    }

    return 0;
}