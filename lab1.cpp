#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cout << "Enter a number" ;
	cin >> n ;

	l_2:
	cout << n <<"  ";

	if(n==1)
		goto bre;
	else if (n%2==1)
		n=3*n+1;
	else if (n%2==0)
		n=n/2;

	goto l_2;

	bre:
	return 0;
}
