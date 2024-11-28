#include <iostream>

using namespace std;


int main() {
	/* take in i */
	int n;
	cin >> n;

	string answers[n];

	for (int i=0; i<n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a==b+c) || (b==a+c) || (c==a+b)) {
			answers[i] = "YES";
		} else answers[i] = "NO";
	}

	for (int j=0; j<n; j++) {
		cout << answers[j] << endl;
	}
}