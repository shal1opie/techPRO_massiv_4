#include <iostream>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

int first() {
	srand(time(0));
	int i;
	int n = 0;
	const int m = 14;
	int a[m];
	for (int i = 0; i < 14; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
		if (a[i] % 2 == 0) {
			n++;
		}
	}
	cout << n;
	return n;
}


int main()
{
	first();

}