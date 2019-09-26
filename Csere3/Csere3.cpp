
#include <iostream>
using namespace std;

int main() {

	int a = 8, b = 2;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "a: " << a << " b: " << b;

}