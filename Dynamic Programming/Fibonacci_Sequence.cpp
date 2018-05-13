#include <iostream>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	else
	{
		int temp1 = 0, temp2 = 1, temp3;
		for (int i = 2; i <= n; i++)
		{
			temp3 = temp1 + temp2;
			temp1 = temp2;
			temp2 = temp3;
		}
		return temp3;
	}
}

int main()
{
	int n = 0;
	cout << "n = ";
	cin >> n;
	int fn = fib(n);
	cout << "f" << "(" << n << ")" << " = " << fn << endl;

	system("pause");
	return 0;
}

