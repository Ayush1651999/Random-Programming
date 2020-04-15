#include <bits/stdc++.h>
using namespace std;

long int N = 1000000000;

long int exponentiation(long int base, long int exp)
{
	long int modulo;

	if(exp == 0){                        // base case if the exponent is 0
		modulo = 1;
	}

	else{

		if(exp == 1){                        // base case if the exponent is 1
			modulo = base%N;
		}

		else{

			if(exp%2 == 0){                      // recursion relation for even exponents
				modulo = exponentiation(base*base, exp/2)%N;
			}

			else{
				modulo = (base*exponentiation(base*base, (exp-1)/2))%N;
			}
		}
	}

	return modulo;
}

int modular_exponentiation(int base, int exp, int modi)
{
	int remainder;

	// cout<< "boom boom"<< endl;

	if(base%modi == base){
		// cout<<(base^exp)<<endl;
		remainder = (exponentiation(base, exp))%modi;
	}
	else{
		remainder = modular_exponentiation(base%modi, exp, modi);
	}

	return remainder;
}

int main(){
	int base;
	int exp;
	int modi;

	cin>>base>>exp>>modi;

	long int modulo = modular_exponentiation(base, exp, modi);

	cout<<modulo<<endl;
	return 0;
}

// We use the (a bit obvious and derivable) fact that (x^m)mod p = ((x mod p)^m)mod p