// Don-t-give-me-five.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <sstream>

using namespace std;
int dontGiveMeFive(int start, int end)
{
	int five = 0;
	for (int i = start; i <= end; i++) {
		stringstream ss;
		ss << i;
		string s;
		ss >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s.at(j) == '5') {
				cout << s << endl;
				five++;
				break;
			}
		}
	}
	return end - start + 1 - five;
}

int main()
{
	cout << dontGiveMeFive(50, 59) << endl;
	system("PAUSE ");
    return 0;
}

