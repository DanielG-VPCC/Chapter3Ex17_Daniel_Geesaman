/*
Title:Chapter 3 Exercise 17 - Math Tutor
File name:Chapter3Ex17_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:10/12/2024
Requirements:

Write a program that can be used as a math tutor for a young student. 
The program should display two random numbers to be added.
The program should then pause while the student works on the problem.
When the student is ready to check the answer, he or she can press a key 
and the program will display the correct solution.

After this is coded, create a second branch that revises your code so that 
before the answer is displayed the user is allowed to enter an answer. 
Then display the correct answer and tell the student either "you are correct"
or "your answer is not correct".
*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
	int random1, random2, answer;
	random1 = rand() % 1000;
	random2 = rand() % 1000;
	answer = random1 + random2;


	cout << " " << random1 << endl << "+" << random2 << endl << "------";
	cin.get();
	cout << " " << answer;
}

