#include<iostream>
using namespace std;
void fib(int count,int a,int b){
    if(count == 10)return;
    cout<<a+b<<endl;
    fib(count+1,b,a+b);
}
int main(){
    int a,b,count;
    cout<<"Enter first 2 digits : ";
    cin>>a;
    cin>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    count = 2;
    fib(count,a,b);
}
