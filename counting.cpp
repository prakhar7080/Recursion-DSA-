#include<iostream>
using namespace std;
void printCounting(int n){
    if(n == 0) return;
    cout<<n<<endl;
    printCounting(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    printCounting(n);
}
