#include<iostream>
using namespace std;

void zeroPattern(int n){
	for(int i=1; i<=n; i++){
		cout<<i<<'\t';
		if(i>2){
			for(int j=1; j<=i-2; j++){
				cout<<0<<'\t';
			}
		}
		if(i>1)cout<<i<<'\t';
	cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;


	zeroPattern(n);
	return 0;
}