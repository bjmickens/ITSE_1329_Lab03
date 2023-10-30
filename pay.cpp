//Ben Mickens
//September 12, 2023
//This program has the user input the number of hours worked for a week and the hourly pay rate then outputs the total pay. 

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

double hoursWorked;
double payRate;
double totalPay;

int main() 
{
	//Gather hours worked and hourly pay from user
	cout << "How many hours did you work this week? ";
	cin >> hoursWorked;
	cout << "How much do you get paid per hour? $";
	cin >> payRate; 

	//Format output for currency
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	
	//Calculate and display total weekly pay
	totalPay = hoursWorked * payRate;
	cout << "You earned $" << totalPay << " this week." << endl;
	system("PAUSE");
	return 0;
}
