/*
*
* Name: [roman aga]
* Department: [computer science]
* Matric no: [45106813ja]
*  A program that reads two integers and determine and prints 
* if the first integer is a multiple of the second

*stub file to enable you complete assignment#1-assignment#2
*
*
*/
#include <iostream>
using namespace std;
int main()
{
	int firstnumber;
	int secondnumber;
	int thirdnumber;
	
	cout <<"enter a number ";
	cin >> firstnumber;
	
	cout <<"enter a second number: ";
	cin >> secondnumber;
	
	thirdnumber = firstnumber / secondnumber;
	if (firstnumber % secondnumber == 0)
	cout << firstnumber <<" is a multiple of " << secondnumber;
	
	else
	cout << firstnumber << "is not a multiple of"<< secondnumber;
	
	return 0;
}
	
	
	

