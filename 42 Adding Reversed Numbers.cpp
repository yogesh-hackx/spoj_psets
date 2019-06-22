#include <iostream>
using namespace std;

int numOfDigits(int a);
int reverse(int a);

int main()
{
	int t;
	cin>>t;
	int m[t], n[t], sum[t];

	for(int i=0; i<t; i++)
	{
		cin>>m[i]>>n[i];
		m[i] = reverse(m[i]);
		n[i] = reverse(n[i]);
		sum[i] = m[i] + n[i];
		sum[i] = reverse(sum[i]);
	}

	for(int k = 0; k<t; k++)
	{
		cout<<sum[k]<<endl;
	}

	return 0;
}

int numOfDigits(int l)
{
	int x = l;
	int num = 0;

	do
	{
		++num;
		x /= 10;
	}while(x);

	return num;
}

int reverse(int p)
{
	int rev = 0;
	int unit;
	int len = numOfDigits(p);
	for (int j = 0; j<len; j++)
	{
		unit = p%10;
		rev = rev *10;
		rev = (rev) + (unit);
		p = p/10;
	}
	return rev;
}