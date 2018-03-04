#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	char strPAT[100010];
	cin >> strPAT;
	int istr = strlen(strPAT), numAT = 0, numPAT = 0, num = 0;
	while (istr--) {
		if ('T' == strPAT[istr]) numAT++;
		else if ('A' == strPAT[istr]) numPAT += numAT;
		else {
			num += numPAT;
			if (num >= 1000000007) num %= 1000000007;
		}
	}
	cout << num;
  return 0;
}

