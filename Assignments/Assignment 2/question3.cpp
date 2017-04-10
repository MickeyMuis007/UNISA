/*
*	Author : Michael Hendricks
*	Student No: 62123661
*	Assignment No: 583679
*	Question 3
*/

#include <iostream>

using namespace std;

int main()
{
    int numStudents, numDays;
    float numHoursProg, totalProg, averageProg,numHoursBio, averageBio, totalBio;
    int student, day =0;    //these are the counters for the loops

    cout << "This program will find the average number of hours "
         << "a day that a student spent programming over a long weekend\n\n";
    cout << "How many students are there?\n";
    cin >> numStudents;
    cout << "Enter the number of days in the long weekend?\n";
    cin >> numDays;

    for (student = 1; student <= 3; student++)
    {
        totalProg = 0;
        totalBio = 0;
        for(day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of hours worked by student for programming"
                 << student << " on day " << day << ".\n";
            cin >> numHoursProg;
            cout << "Please ente the number of hours worked by student for biology"
                 << student << " on day " << day << ".\n";
            cin >> numHoursBio;
            totalProg = totalProg + numHoursProg;
            totalBio = totalBio + numHoursBio;
        }
        averageProg = totalProg / numDays;
        averageBio = totalBio / numDays;

        cout << endl;
        cout << "The average number of hours per day spent programming "
             << "by students " << student << " is " << averageProg << " and for biology "
             << "is " << averageBio << "."
             << endl << endl << endl;
    }
    return 0;

}

