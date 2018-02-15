#include <iostream>
#include <numeric>

using namespace std;

int checkprimenumber(int);
int lcm();

int main() 
{
	int num1, num2;
	bool flag;
	

	cout << "Enter First Number" << endl;
	cin >> num1;
	cout << "Enter Second Number" << endl;
	cin >> num2;

	cout << "Prime number between " << num1 << " and " << num2 << " are: ";

	for(int i = num1+1; i < num2; ++i)
	{
		flag = checkprimenumber(i);

		if(flag)
			cout << i << " ";
	}

	     

	return 0;
}

int checkprimenumber(int n)
{
	bool flag = true;

	for(int j = 2; j <= n/2; ++j)
	{
		if (n%j == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

