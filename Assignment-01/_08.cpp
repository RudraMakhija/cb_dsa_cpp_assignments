#include<bits/stdc++.h>
using namespace std;
void question1(int n){
	for(int i=1; i<=n; i++){
		int num=1;
		for(int j=1; j<=i; j++){
			cout<<num;
			num++;
		}
		for(int k=1; k<=n-i; k++){
			cout<<"*";
		}
		cout<<endl;

	}
}

int main() {
	int n;
	cin>>n;

	question1(n);
	return 0;
}