// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1

TEST_CASE("Ex1 leastused() ", "[example]")
{
	char ret;
	string str;

	str = "AAAAABBBBDDDDEEZ";
	ret = leastused(str);
	cout << "test string is " << str << "\tYour return value is: " << ret << endl;

	INFO("The result should  Z\n");
	REQUIRE(ret == 'Z');
	cout << "--------------------------------------------------\n";

	str = "AAABBBC";
	ret = leastused(str);
	cout << "test string is " << str << "\tYour return value is: " << ret << endl;

	INFO("The result should  C\n");
	REQUIRE(ret == 'C');
	cout << "--------------------------------------------------\n";

	str = "CAAA";
	ret = leastused(str);
	cout << "test string is " << str << "\tYour return value is: " << ret << endl;

	INFO("The result should  C\n");
	REQUIRE(ret == 'C');
	cout << "--------------------------------------------------\n";
}

char check(string txt)
{
	int seen[26] = {0};
	int cnt, i, idx, mincnt, minidx;
	char alpha;

	alpha = 'A';
	for (i = 0; i < 26; i++)
	{
		cnt = count(txt.begin(), txt.end(), alpha);
		alpha += 1;
		seen[i] = cnt;
	}
	// for (int i = 0; i < 26; i++)
	// {
	// 	cout << seen[i] << "\t";
	// }
	// cout << endl;
	for (i = 0; i < 26; i++)
	{
		if (seen[i] == 0)
			continue;
		if ((i == 0) or (mincnt > seen[i]))
		{
			mincnt = seen[i];
			minidx = i;
		}
	}
	alpha = 'A' + minidx;
	return alpha;
}

TEST_CASE("Ex2 leastused() ", "[example]")
{
	string str;
	char ret, checkval;

	makestring(str);
	// str = "AAABBBC";
	ret = leastused(str);
	cout << "test string is " << str << "\tYour return value is: " << ret << endl;
	checkval = check(str);

	INFO("The result should be " << checkval);
	REQUIRE(ret == checkval);
	cout << "--------------------------------------------------\n";
}