#include<iostream>
using namespace std;

void question8(int n){
	for(int i=1; i<=n; i++){
		int num=1;
		for(int j=1; j<=n-i+1; j++){

			cout<<num<<" ";
			num++;
		}
		if(i>1 ){
			for(int p=1; p<=2*i-3 ; p++){
				cout<<"*"<<" ";
			}
		}
		cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;

	question8(n);
	return 0;
}