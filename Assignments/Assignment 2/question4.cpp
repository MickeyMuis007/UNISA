# include <iostream>
# include <iomanip>
using namespace std;

void selTabs(int start, int rows, int increments = 1){
    cout << "NUMBER\tSQUARE\tCUBE\n";
    for (int i = 1; i <= rows; i++ ){
        cout << start << "\t" << start*start << "\t" << start*start*start << endl;
        start += increments;
    }
}

void printTabs (){
    int start, rows, increments;
    cout << "Enter the starting value of the table\n";
    cin >> start;
    cout <<"Enter the number of values to be displayed\n";
    cin >> rows;
    cout << "Enter the increment between the values\n";
    cin >> increments;
    selTabs(start,rows,increments);
}

int main (){
    printTabs();
    return 0;
}
