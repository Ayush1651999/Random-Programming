#include <bits/stdc++.h>
using namespace std;

long int N = 100000000000;

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

int main()
{
	long int base = 5; 
    long int exp = 12;

    long int modulo; 
    modulo = exponentiation(base, exp);
    cout << modulo <<endl;
    return 0;
}