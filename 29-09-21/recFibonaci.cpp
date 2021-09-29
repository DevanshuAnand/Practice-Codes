#include<bits/stdc++.h>

using namespace std;

int fib(int n){

	if( n ==0 )
		return 0;
	if(n == 1)
		return 1;
	int smallsum1= fib(n-1) + fib(n-2);
	int ans  = smallsum1  + n;
	return ans;
}

int main(){
	int n ;
	cin >> n;

	cout<< fib(n);
}