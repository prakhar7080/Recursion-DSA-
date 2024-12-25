#include<iostream>
using namespace std;
void printDigits(int number){
    if(number <= 0) return;
    int rem = number%10;
    number = number/10;
    printDigits(number);
    cout<<rem<<" ";
}
int main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;
    printDigits(number);
}
