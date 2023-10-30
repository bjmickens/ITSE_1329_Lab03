//Ben Mickens
//September 12, 2023
//This program has a user input the number of questions on an exam, the number of correct questions, and a student's first name.
//The program then outputs the student's name, as well as the grade earned on the exam. 

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

char name[20];
double numberOfQuestions;
double correctAnswers;
double grade; 

int main() {
	
	//Gather name, questions on exam, and correct answer inputs from the user
	cout << "What is the student's first name? ";
	cin >> name; 
	cout << "How many questions were on the exam? ";
	cin >> numberOfQuestions;
	cout << "How many questions did " << name << " get correct? ";
	cin >> correctAnswers;
	
	//Calculate grade
	grade = (correctAnswers / numberOfQuestions) * 100;
	
	//Output name and grade
	cout << setiosflags(ios::fixed);
	cout << setprecision(0);
	cout << name <<"'s grade for the exam was " << grade << "%." << endl;
	
	system("PAUSE");
	return 0;
}
