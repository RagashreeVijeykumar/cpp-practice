#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a and b:";
	cin>>a>>b;
	char op;
	cout<<"Enter the op:";
	cin>>op;
	
	
	if(op=='+'){
		cout<<a+b;
	}
		else if(op=='-'){
			cout<<a-b;
	}
	else if(op=='*'){
		cout<<a*b;
	}
	else if(op=='%'){
		cout<<a%b;
	}
	return 0;
}