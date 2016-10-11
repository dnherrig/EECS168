/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Dylan Herrig dylan.herrig@gmail.com
 * Assignment:   EECS-168/169 Lab 5 Exercise 3
 * Description:  This program will find the Palindrome of an Integer
 * Date: 3/4/2016
 *
 ---------------------------------------------------------------------------- */
#include <iostream>


int lengthOfNumber (int x) 
{
	int c = 0;
	int z = 0;
 	
	while (x != 0) // counts how many times you have to reduce the number by a factor of 10 before the number has nothing left
	{
		z = x%10 + z;
		x = x/10;
		c = c+1;
	}
	
	return(c);
}

int reverse (int x) // reverses the number
{
	int z = 0;
	int c = lengthOfNumber(x);
	int y = 1;

	for (int i=1 ; i < c; i++) // calculates 10^of the length, this will be uswed to place the numbers later
	{
		y = y*10;
	}
	
	while (x != 0) //decides where to place each of the numbers
	{
		z = (x%10)*y + z;
		x = x/10;
		y = y/10;
	}
	
	return(z);

}

bool isPalindrome(int x) //checks to see if the reverse and the input are the same number, if they are it returns true.
{
	bool z = true;

	if ( reverse (x) == x)
	{
		z = true;
	}
	else
	{
		z = false;
	}

	return(z);

}




int main ()
{

	//initalize varibles
	int n = 0;		
	int r = 1;

	while ( r == 1) //checks to see that the user wants to keep participating
	{
		//asks for user input, then outputs the results of the functions		
		std :: cout << '\n';		
		std :: cout << "Please enter a Number:" << std :: endl;
		std :: cin >> n;
		std :: cout << "The Length of the Number is:" << lengthOfNumber(n);
		std :: cout << '\n';
		std :: cout << "The Reverse of the Number is:" << reverse(n);
		std :: cout << '\n';
		//checks to see if the isPalindrome function is true and outputs the response based on that
		if ( isPalindrome (n) == true)
		{
			std :: cout << "The Number is a Palindrome." << std :: endl;
		}
		else
		{
			std :: cout << "The Number is not a Palindrome." << std :: endl;
		}

		std :: cout << "Want to try again? (y=1/n=0):" << std :: endl;
		std :: cin >> r; //if 0 is inputed then the looping condition will be false and the user will not be able to input a new number
	}

	std :: cout << "Thank you!" << std :: endl;

return (0);
}
