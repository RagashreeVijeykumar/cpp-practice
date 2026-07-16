#include<iostream>
using namespace std;
int main(){
float a,b;
char op;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"Enter the operator(+,-,/,%,*)";
cin>>op;
switch(op){
    case'+':
    cout<<a+b;
    break;
    case'-':
    cout<<a-b;
    break;
    case'/':
    cout<<a/b;
    break;
    case'*':
    cout<<a*b;
    break;
}
    return 0;

}