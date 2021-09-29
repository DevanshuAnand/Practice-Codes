#include<bits/stdc++.h>

using namespace std;

int power(int a, int p){

	if(p == 0)
		return 1;
	int lowerPowers =(power(a,p-1));
	int ans = a*lowerPowers;
	return ans;
}

int main(){

	int a,b;
	cin >> a >> b;
	int ans = power(a,b);
	cout << ans;
}