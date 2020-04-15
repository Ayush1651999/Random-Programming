#include <bits/stdc++.h>
using namespace std;
#include <math.h>

class triangle{

    public:
	int x0, y0, x1, y1, x2, y2;
};

int gcd(int a, int b) 
{ 
    if (b == 0) 
       return a; 
    return gcd(b, a%b); 
} 

int lattice_on(int x0, int y0, int x1, int y1)
{
	if(x0 == x1){
		return abs(y0-y1);
	}
	if(y0 == y1){
		return abs(x0-x1);
	}
	int n = gcd(abs(x1-x0), abs(y1-y0));
	return n;
}

int main(){

	triangle t;

	cin >> t.x0 >> t.y0 >> t.x1 >> t.y1 >> t.x2 >> t.y2;

	int n1 = lattice_on(t.x0, t.y0, t.x1, t.y1);
	int n2 = lattice_on(t.x1, t.y1, t.x2, t.y2);
	int n3 = lattice_on(t.x2, t.y2, t.x0, t.y0);

	int n = n1+n2+n3;

	cout << n << endl;
	return 0;
}