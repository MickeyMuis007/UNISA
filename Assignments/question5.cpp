/*
*	Author : Michael Hendricks
*	Student No: 62123661
*	Assignment No: 583679
*	Question 5
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

const float LABOUR_COST = 24;
string name = "", customerNo = "";
float carpetPrice = 0, labourTotal = 0, total = 0, length = 0, width = 0, discount = 0;
int area = 0;

int calculateCarpetSize(float lenght, float width) {
	int area = (int)round(lenght * width);
	return area;
}

float calculateCarpetCost(int area, float price) {
	return area * price;
}

float calculateLabourCost(int area) {
	return area * LABOUR_COST;
}


bool qaulifyForDiscount(string customerNo) {
	if (customerNo.length() > 0) {
		if (customerNo.at(0) == '0')
			return true;
		else
			return false;
	}
	else
		return false;
}

float computeDiscount(string customerNo, float amount) {	
	float discountPerc = 0, discountAmount;
	if (qaulifyForDiscount(customerNo)) {		
		cout << "Enter discount % for customer " + customerNo + ": ";
		cin >> discountPerc;
	}
	discountAmount = (amount * (discountPerc / 100));
	return discountAmount;

}

void printCustomerStatement() {
	labourTotal = calculateLabourCost(area);
	total = carpetPrice + labourTotal;
	discount = computeDiscount(customerNo, carpetPrice);
	float tax = carpetPrice * 0.14;
	cout << "\tCROSWELL CARPET STORE\n\t      STATEMENT" << endl;
	cout << "\tCustomer name\t: " << name << endl;
	cout << "\tCustomer number\t: " << customerNo << endl << endl;
	cout << "\tCarpet price\t: " << carpetPrice << endl;
	cout << "\tLabour\t\t: " << labourTotal << endl << endl;	
	cout << "\tSubtotal\t: " << total << endl;
	cout << "\tLess discount\t: " << discount << endl << endl;
	total = total + discount;
	cout << "\tSubtotal\t: " << total << endl;
	cout << "\tPlus tax\t: " << tax << endl;
	cout << "\tTotal\t\t: " << total + tax << endl << endl << endl;

}
int main () {	

	//First Customer
	name = "Mr. Wilson";
	customerNo = "81429";
	area = calculateCarpetSize(8.2, 6.8);
	carpetPrice = calculateCarpetCost(area, 159.50);	
	printCustomerStatement();

	//Second Customer
	name = "Mr. and Mrs Adams";
	customerNo = "04246";
	area = calculateCarpetSize(5, 4);
	carpetPrice = calculateCarpetCost(area, 118.50);
	printCustomerStatement();

	//Third Customer
	name = "Ms. Logan";
	customerNo = "39050";
	area = calculateCarpetSize(4.5, 4.5);
	carpetPrice = calculateCarpetCost(area, 89.9);
	printCustomerStatement();
	return 0;
}