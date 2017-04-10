#include <iostream>
#include <ctype.h>

using namespace std;

void specialDiscount (char type){
    char combo;
    cout << "\nInclude popcorn(y-yes or n-no): ";
    cin >> combo;
    if(toupper(type) == 'P')
        cout << "Pensioners get a discount of ";
    else
        cout << "Students get a discount of ";
    if(toupper(combo) == 'Y')
        cout << "20% including popcorn.\n";
    else
        cout << "10% without popcorn.\n";
}

float discount(){
    char combo;
    cout << "\nInclude popcorn(y-yes or n-no): ";
    cin >> combo;
     if(toupper(combo) == 'Y')
        cout << "You get 10% discount including popcorn.\n";
    else
        cout << "You get no discount without popcorn.\n";
}

int main () {
    char type;
    cout << "Enter customer type(p-pensioner, s-student or o-other: ";
    cin >> type;
    if(toupper(type) == 'S' || toupper(type) == 'P'){
        specialDiscount(type);
    }
    else if (toupper(type) == 'O'){
        discount();
    }
    else{
        cout << "\nNot an valid customer type." << endl;
    }
}
