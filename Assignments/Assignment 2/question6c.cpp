#include <iostream>
#include <string>

using namespace std;

string getName() {
    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    return firstName + " " + lastName;
}

void getHours(string fullName, float rate){
    float hours = 0, pay = 0;
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    pay = hours * rate;
    if (hours > 40){
        cout << "Fullname: " << fullName << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Pay: " << pay + pay * 0.1;
    }
    else {
        cout << "Fullname: " << fullName << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Pay: " << pay - pay * 0.1;
    }
}
int main () {
    getHours(getName(), 43);
}
