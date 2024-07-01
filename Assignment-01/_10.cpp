#include<iostream>
using namespace std;
void question9(int n){

	for(int i=1; i<=n; i++){
		int num=1;
		for(int j=1; j<=i; j++){
			cout<<num<<" ";
			num++;
		}
		for(int k=1; k<=n-1; k++){
			cout<<" ";
		}
		cout<<endl;
	}
}
int main () {
	int n;
	cin>>n;
	question9(n);

	return 0;
}