#include <iostream>
using namespace std;

int main(){
	int a[5] = {2,2,2,2,2};

	int top =0;
	a[++top] = 7;

	cout << a[0] << a[1] << "__________" << top;

return 0;
}