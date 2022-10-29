#include "main.hpp"
int main()
{
	// string txt = "AAAAABBBBDDDDEEZ";
	string txt;
	char letter;

	makestring(txt);
	cout << txt << endl;
	letter = leastused(txt);
	cout << letter << endl;
}