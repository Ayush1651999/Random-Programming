// CPP program to demonstrate working of STL stack 
#include <iostream> 
#include <stack> 
using namespace std; 

void showstack(stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack <int> s1;
	int c1 =0;
	stack <int> s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	s2.push(5);
	s2.push(6);

	s2=s1;
	showstack(s2);
	return 0; 
} 

