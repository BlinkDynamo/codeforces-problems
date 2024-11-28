#include <iostream>

using namespace std;

int main() {
	
	int k, l, m, n, d, n_damaged;
	
	
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;
		
	n_damaged = 0;
	
	/* count up to d dragons and increment a counter for harmed dragons */
	for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            n_damaged++;
        }
    }		
	
	cout << n_damaged;
	
	return 0;
}