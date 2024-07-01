#include <bits/stdc++.h>
using namespace std;

int main() {


int n;
cin>>n;

int gen= n*(n+1)/2;

vector<int> fibo={0,1};
	int a=0;
	int b=1;
	int c= a+b;
for(int i=2; i<gen; i++){

	fibo.push_back(c);
	a=b;
	b=c;
	c=a+b;
}
int num=0;
for(int i=1; i<=n; i++ ){
	for(int j=1; j<=i; j++){
		cout<<fibo[num]<<'\t';
		num++;
	}
	cout<<endl;
}

}
