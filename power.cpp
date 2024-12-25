#include<iostream>
using namespace std;
int power(int base, int expo){
    if(expo == 0) return 1;
    return base * power(base,expo-1);
}
int main(){
    int base,expo,ans;
    cout<<"Enter the base value ";
    cin>>base;
    cout<<"Enter the exponenet value ";
    cin>>expo;
    ans = power(base,expo);
    cout<<"Ans : "<<ans;
}
