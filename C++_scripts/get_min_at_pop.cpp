
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
stack<int>_push(int arr[],int n);
void _getMinAtPop(stack<int>s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		stack<int>mys=_push(arr,n);
		_getMinAtPop(mys);
		cout<<endl;

	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* inserts elements of the array into 
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack<int> s;
   for(int i=0; i<n; i++){
	   s.push(arr[i]);
   }
   return s;
}
/* print minimum element of the stack each time
   after popping
*/
int min_stack(stack<int>s)
{
	stack<int>s_;
	s_ = s;
	int x = s_.top();

	while(!s_.empty()){
		if(s_.top()<x){
			x = s_.top();
		}
		s_.pop();
	}
	return x;
}

void _getMinAtPop(stack<int>s)
{
	// your code here
	while(!s.empty()){

		cout << min_stack(s)<<" ";
		s.pop();
	}
}