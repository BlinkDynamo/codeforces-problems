#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int n;	/* amount in dollars */
	
	int sizes[] = {100, 20, 10, 5, 1};
	int bills = 0;
	
	cin >> n;
	
	/* 	catch the remainder of n % sizes in order of the sizes array and 
		divide the difference by the size to get the number of bills */
	for (int i=0; i<size(sizes); i++) {
		int r;
		r = n%sizes[i];
		bills += ((n-r)/sizes[i]);
		n=r;
	}
	
	cout << bills;
	
	return 0;
}