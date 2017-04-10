/*
*	Author : Michael Hendricks
*	Student No: 62123661
*	Assignment No: 583679
*	Question 2b
*	Answer 2b: The program will display 13 as the sum. It exclude to since it is
               adding 1 plus next variable before adding to the sum.
*/

# include <iostream>

using namespace std;

int main(){
    int next = 2, sum = 1;
    while (next <= 5){
        sum = sum + next;
        next++;
    }
    cout << "The sum of 2 through 5 is " << sum <<endl;
    return 0;
}
