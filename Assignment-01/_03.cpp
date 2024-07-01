#include<iostream>
using namespace std;

void question3(int n){
	int num=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<num;
			cout<<'\t';
			num++;
		}
		for(int k=1; k<=n-i; k++){
			cout<<" ";
		}
		cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;

	question3(n);

	return 0;
}