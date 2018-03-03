#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int change(char ch) {
	if (ch >= '0'&&ch <= '9') {
		return ch - 48;
	}
	else if (ch >= 'A'&&ch <= 'Z') {
		return ch - 55;
	}
	else if (ch >= 'a'&&ch <= 'z') {
		return ch - 61;
	}
}

int main()
{
	char temp;
	int sale[62] = { 0 };
	int salelen = 0;
	int need[62] = { 0 };
	int needlen = 0;
	bool YesorNo=true;
	int neednum = 0;
	scanf("%c", &temp);
	while (temp!='\n')
	{
		salelen++;
		sale[change(temp)]++;
		scanf("%c", &temp);
	}
	scanf("%c", &temp);
	while (temp != '\n')
	{
		needlen++;
		need[change(temp)]++;
		scanf("%c", &temp);
	}
	for (int i = 0;i < 62;i++) {
		if (need[i] != 0) {
			if (need[i] > sale[i]) {
				YesorNo = false;
				neednum += (need[i] - sale[i]);
			}
		}
	}
	if (YesorNo) {
		cout << "Yes " << salelen - needlen;
	}
	else {
		cout << "No " << neednum;
	}
    return 0;
}

