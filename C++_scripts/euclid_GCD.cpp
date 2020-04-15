#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y)
{
	int HCF;

	int a = std::max(x,y);
	int b = std::min(x,y);

	if(a%b == 0){
		HCF = b;
	}

	else{
		HCF = GCD(a-b,b);
	}

	return HCF;
}

int main()
{
	int a,b;
	cin >> a >> b;

	int HCF = GCD(a,b);

	cout<<HCF<<endl;
	return 0;
}