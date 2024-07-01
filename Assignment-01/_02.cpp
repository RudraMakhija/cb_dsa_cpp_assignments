#include<iostream>
using namespace std;

void question2(int n){
		
	for(int i=1; i<=n; i++){

		for(int j=1; j<=n-i; j++){
			cout<<" ";
			cout<<'\t';
		}

		int num=i;
		for(int k=1; k<=i; k++){

			cout<<num;
			cout<<'\t';
			num++;
		}
		if(i>1){
			int num2= 2*i-2;
			for(int p=1; p<=i-1; p++){
				
				cout<< num2;
				cout<<'\t';
				num2--;
			}
		}
		cout<<endl;
	}
}
int main() {
	int n;
	cin>>n;

	question2(n);

	return 0;
}