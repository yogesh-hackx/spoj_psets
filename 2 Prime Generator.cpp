//PrimeGenerator :)



#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int a)
{
	int root = sqrt(a);
	if(a == 1)
		return 0;
	for (int j = 2; j<=root; j++)
	{
		if (a%j == 0)
		{
			return 0;
		}
	}
	return 1;

}

int main()
{
	
	int t,p;
	cin>>t;
	int m[t], n[t];
	for(int i =0; i<t; i++)
	{
		cin>>m[i]>>n[i];
	}
	
	for(int i =0; i<t; i++)
	{
		for (int p = m[i]; p>=m[i]&& p<=n[i]; p++)
		{
			if(isPrime(p))
				cout<<p<<endl;
		}

		cout<<endl;
	}	

	return 0;
}
