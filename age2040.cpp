//Ben Mickens
//September 12, 2023
//This program has a user input their current age and the current year then calculates what their age will be in the year 2040.

#include <iostream>
#include <cstdlib>

using namespace std; 

int currentAge; 
int currentYear; 
int ageIn2040;

int main() {
	
	//Gather current age and current year from user
	cout << "What is your current age? "; 
	cin >> currentAge;
	cout << "What is the current year? "; 
	cin >> currentYear;
	
	//Calculate age in 2040
	ageIn2040 = 2040 - currentYear + currentAge;
	
	//Output user's age in 2040
	cout << "In 2040, you will be " << ageIn2040 << " years old." << endl; 
	
	system("PAUSE");
	return 0;
}
