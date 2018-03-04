/*
*	Author : Michael Hendricks
*	Student No: 62123661
*	Assignment No: 583679
*	Question 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int selection, number;
    float cost;
    cout << "Please enter the choice of hotdog(a number from 1 to 4 or 0 to quit)";
    cout << "Hot Dog Menu       " << endl;
    cout << "1: Plain hotdog    " << endl;
    cout << "2: Chilli hotdog   " << endl;
    cout << "3: Cheese hotdog   " << endl;
    cout << "4: Russian hotdog  " << endl;
    cout << "0: QUIT            " << endl;
    cin >> selection;
    while(selection < 0 || selection > 4)
    {
        cout << "Invalid choice - Please re-enter";
        cin >> selection;
    }
    cout << "You have selected option number " << selection << endl;
    cout << "How many hotdogs would you like?" << endl;
    cin >> number;
    switch(number){
        case 1: cost = number * 15.0;
                cout << "The cost is R " << cost << endl;
                break;

        case 2: cost = number * 12.50;
                cout << "The cost is R " << cost << endl;
                break;

        case 3: cost = number * 17.0;
                cout << "The cost is R " << cost << endl;
                break;

        case 4: cost = number * 22.5;
                cout << "The cost is R " << cost << endl;
                break;

        case 0: cout<< "Please come again" << endl;
                break;

        default: cout << "Invalid selection. Try again please." << endl;
    }

    return 0;
}

