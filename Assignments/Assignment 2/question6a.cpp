#include <iostream>
#include <string>

using namespace std;

string theEmployee = "";
float theHoursWorked = 0, thePayRate = 0, overtime = 0;

void getInputs(string& theEmployee, float& theHoursWorked, float& thePayRate)
{
    string firstName, lastName;
    cout << "Enter employee name: ";
    cin >> firstName >> lastName;
    theEmployee = firstName + " " + lastName;
    cout << "\nEnter the number of hours worked: ";
    cin >> theHoursWorked;
    cout << "\nEnter hourly pay rate: ";
    cin >> thePayRate;
}

float calculateEmployeePay(float theHoursWorked, float thePayRate){
    float pay = 0;
    if(theHoursWorked > 40) {
        overtime = theHoursWorked - 40;
        return (40 * thePayRate) + (thePayRate * overtime * 1.5);
    }
    return theHoursWorked * thePayRate;
}

void printPaySlip(){
    float pay = calculateEmployeePay(theHoursWorked, thePayRate);
    cout << "Pay slip for " << theEmployee << endl;
    cout << "Hours worked: " << theHoursWorked << endl;
    cout << "Overtime hours: " << overtime << endl;
    cout << "Hourly pay rate: R" << thePayRate << endl;
    cout << "Pay: R" << pay << endl;
}

int main () {
    getInputs(theEmployee, theHoursWorked, thePayRate);
    printPaySlip();
}
