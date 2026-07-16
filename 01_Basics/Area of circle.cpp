#include<iostream>
using namespace std;
int main(){
    float radius;
    const float pi=3.14;
    cout<<"Enter the radius of circle";
    cin>>radius;
    float area =pi*2*radius;
    cout<<"Area of circle is:"<<area;
    return 0;
}