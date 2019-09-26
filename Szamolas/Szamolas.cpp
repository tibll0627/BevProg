
#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int hanyszor = 0;

	while (a != 0) {
		hanyszor++;
		a = a << 1;
	}

	cout << hanyszor;
}