#include <bits/stdc++.h>
using namespace std;

int abs(int x){
	if(x<0) return -x;
	else return x;
}
struct sample {
	int aa, bb;
};

int gcd(int a, int b) 
{ 
    if (b == 0) 
       return a; 
    return gcd(b, a%b); 
} 

void reduce(sample *ip, sample *op) {	
	int st1 = gcd(abs(ip->aa), ip->bb);
	op->aa = ip->aa/st1;
	op->bb = ip->bb/st1;

	if(ip->bb < 0) {
		op->aa= -op->aa;
		op->bb= -op->bb;
	}
	cout << op->aa <<" "<< op->bb <<endl;
}

int main(){
	sample num1, num2;
	sample *pt1, *pt2;
	pt1 = &num1;
	cin >> num1.aa >> num1.bb;
	reduce(pt1, pt2);
	num2 = *pt2;
	cout << *num2 <<endl;

	return 0;
}