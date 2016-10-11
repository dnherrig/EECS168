/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Dylan Herrig dylan.herrig@gmail.com
 * Assignment:   EECS-168/169 Lab 5 Exercise 2
 * Description:  This program takes in an integer value form the user and finds the sum of the digits.
 * Date: 3/1/2016
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

int addDigits (int x)
{
	int z = 0; //declare a varible that will hold the value

	while (x != 0)//as long as the value of x isn't zero then it will keep adding, this prevents an infinate loop
	{
		z = x%10 + z;
		x = x/10;
	}
	
	return(z);//return the result to int main
}

int main ()
{	
	//declare varibles
	int n =0;
	int r =1;

	while ( r == 1) //checks to see that the user wants to keep participating
	{
		std :: cout << '\n';		
		std :: cout << "Please enter a No:" << std :: endl;
		std :: cin >> n;
		std :: cout << "The sum of the digits is : " << addDigits (n) << std :: endl;
		std :: cout << '\n';
		std :: cout << "Want to try again? (y=1/n=0):" << std :: endl;
		std :: cin >> r; //if 0 is inputed then the looping condition will be false and the user will not be able to input a new number
	}

	std :: cout << "Thank you!" << std :: endl;


	return(0);
}
