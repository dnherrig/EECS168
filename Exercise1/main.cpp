/* -----------------------------------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Dylan Herrig dylan.herrig@gmail.com
 * Assignment:   EECS-168/169 Lab 5 Exercise 1
 * Description:  This program will call to other functions to produce a varity of results.
 * Date: 3/1/2016
 *
 ---------------------------------------------------------------------------- */

#include <iostream>

//function that finds the max of the two values

int max (int a, int b)
	{
		int result = 0;

		if (a > b)
		{	
			result = a;
		}
		else
		{
			result = b;
		}
		


	return(result);

	} 

//funcion to find area of a sphere

double sphereArea (double radius)
	{
		double area = 0.0;
		
		if (radius > 0.0)
		{	
			area = 4.0 * 3.14159 * (radius*radius); //area equation
		}
		else
		{
			area = 0.0;
		}

		return(area);
	}

//function to dictate the number of times a certian word is printed

void printWord(std::string word, int timesToPrint)
	{
		int r = 0;		
		
		while(r < timesToPrint)
		{
		
			std :: cout << word;
			r++;
			std :: cout << '\n';
		}

		
	}

int main()
	{	

		//initalize the varibles 

		int a = 0;
		int b = 0;
		double c = 0.0;
		std::string input;
		int d = 0;

		//use to max function to find the answer given the user's inputs

		std :: cout << "Input two numbers:" << '\n';
		std :: cin >> a;
		std :: cin >> b;
		std :: cout << "The max of " << a << " and " << b << " is: " << max(a,b) << '\n';
		std :: cout << '\n';

		//use the sphereArea function to find the area of a shphere givin the user's inputs

		std :: cout << "Input a radius: ";
		std :: cin >> c;
		std :: cout << "The area of a sphere with this radius is: " << sphereArea (c) << '\n';
		std :: cout << '\n';

		//use the printWord function to produce an output according the the user's inputs
	
		std :: cout << "Input a string:" << '\n';
		std :: cin >> input;
		std :: cout << '\n';
		std :: cout << "How many times do you want to print it?: ";
		std :: cin >> d;
		std :: cout << '\n';
		printWord (input,d);


	}
