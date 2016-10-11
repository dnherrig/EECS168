/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Dylan Herrig dylan.herrig@gmail.com
 * Assignment:   EECS-168/169 Lab 5 Exercise 3
 * Description:  This program will obtains a year from the user. Then tells the user if the year is a leap year or not.
 * Date: 3/4/2016
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

bool isLeapYear (int year)
{
	if ( year % 4 == 0) // check to see if the year is a multiple of 4
	{
		if (year % 100 == 0) // check to see if the year is a multiple of 100
		{
			if (year % 400 == 0) // of these multiples of 100 check which ones are also a multiple of 400
			{
				return (true); // if year is a multiple of 4, 100 and 400 then say it is a leap year
			}	
			else // in other cases say it is not a leap year
			{
				return (false);
			}
		} 
		else 
		{
			return (true); // returns true if a number is divisible by 4 but not by 100
		}
	}
	else
	{
		return (false); // numbers not divisible by 4 will return false
	}



}

int main ()
{	
	//initalize the varibles
	int year = 0;	// used to input into the boolean function
	char play = '\0'; // controls looping condition

	std :: cout << "Welcome!" << std :: endl;

	do
	{				
		std :: cout << "Input a year:"; // take user input for year
		std :: cin >> year;
		
		//checks to see if the isLeapYear function is true and outputs the response based on that
		if ( isLeapYear(year) == true)
		{
			std :: cout << year << " is a leap year!" << std :: endl;
		}
		else
		{
			std :: cout << year << " is not a leap year!" << std :: endl;
		}

		std :: cout << "Quit? (y/n):" << std :: endl;
		std :: cin >> play; //if y is inputed then the looping condition will be false and the user will not be able to input a new number

		if ( play != 'y' && play != 'n') // check that the user inputed a character that was either y or n
		{
			std :: cout << "Sorry you input is incorrect, try again." << std :: endl;
			std :: cout << "Quit? (y/n):" << std :: endl;
			std :: cin >> play;	
		}

		std :: cout << '\n';
	} while ( play == 'n' ); //checks to see that the user wants to keep participating

	std :: cout << "Goodbye." << std :: endl;




return (0);
}


