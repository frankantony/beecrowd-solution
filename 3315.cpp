#include <iostream>
#include<string>

using namespace std;

int main()
{
	int n, value, maximum = 0;
	for (int i = 0;i < 4;i++) {
		int sum = 0;
		for (int j = 0;j < 7;j++) {
			cin >> value;
			sum += value;
		}
		if (maximum < sum)
			maximum = sum;
	}
	string binary = "";
	cout <<  maximum << " = ";
	while (maximum != 0) {
		int number = (maximum % 2);
		char caracter = number + '0';
		binary += caracter;
		maximum /= 2;
	}
	
	int len = binary.size();
	for (int i = len-1; i >= 0;i--)
		cout << binary[i];
	if (len == 0)
		cout << "0";
	cout << endl;
	return 0;
}

