#include <iostream>
using namespace std;
int main()
{
	char z[] = "1634";
	char y[4];
A1:
	cout << "Please imput your answer!\n";
	cin >> y;
	int a = 0;
	int b = 0;

	

	for (int i = 0; i < 4; i++) {
		if (z[i] == y[i])
			a++;
	}
	for (int i = 0; i < 4; i++) {
		if (y[i] == z[0] || y[i] == z[1] || y[i] == z[2] || y[i] == z[3])
			b++;
	}
	if (a == 4) {
		cout << "Congrauation!" << endl;
	}
	else {
		cout << a << "a" << b << "b" << endl;
		goto A1;
	}


	return 0;

}
