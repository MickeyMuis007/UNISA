/*
*	Author : Michael Hendricks
*	Student No: 62123661
*	Assignment No: 583679
*	Question 2a
*/

# include <iostream>

using namespace std;

int main() {
    int count = 1;
    for (int i = 1; i <= 10; i++)
        if(i < 5 && i != 2)
            cout << "X";

    while (count <= 10){
        if(count < 5 && count != 2)
            cout << "X";
        count++;
    }
    return 0;
}
