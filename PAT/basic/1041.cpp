#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct examinee {
	char id[14];
	int trysit;
	int truesit;
};

int main()
{
	int N;
	examinee temp;
	cin >> N;
	examinee *all = new examinee[N];
	for (int i = 0;i < N;i++) {
		scanf("%s %d %d", temp.id, &temp.trysit, &temp.truesit);
		all[temp.trysit] = temp;
	}
	int n;
	cin >> n;
	int trynum;
	for (int i = 0;i < n;i++) {
		cin >> trynum;
		printf("%s %d\n", all[trynum].id, all[trynum].truesit);
	}

    return 0;
}

