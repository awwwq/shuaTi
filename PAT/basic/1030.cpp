#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll N, p, A[100005], ans = 0, i = 0, j = 0;
int main() {
	cin >> N >> p;
	for (int i = 0; i < N; ++i) cin >> A[i];
	sort(A, A + N);
	while (j < N) {
		if (A[j] <= p * A[i]) ++j;
		else ans = max(ans, j - i), ++i;
	}
	ans = max(j - i, ans);
	cout << ans << endl;
}
