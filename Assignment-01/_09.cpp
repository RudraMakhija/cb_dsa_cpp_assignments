#include<iostream>
using namespace std;

void manmohan(int n){
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			for(int j=1; j<=i; j++){
				cout<<1;
			}
		}
		else{
			cout<<1;
			for(int p=1; p<=i-2; p++){
				cout<<0;
			}
			cout<<1;
		}
		cout<<endl;
	}
	}
int main() {
	int n; 
	cin>>n;



	manmohan(n);
	return 0;
}