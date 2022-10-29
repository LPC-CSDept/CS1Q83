#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void makestring(string &);
char leastused(string);

void makestring(string &txt)
{
	int idx;
	srand(time(0));

	for (int i = 0; i < 100; i++)
	{
		idx = rand() % 26 + 'A';
		txt.push_back(idx);
	}
}
char leastused(string txt)
{

	//**************************************************
	// Make your code
	//**************************************************
}