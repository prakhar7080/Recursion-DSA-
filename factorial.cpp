#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number" << endl;
    cin>>n;
    cout<<"Factorical of "<<n<<" is : ";
    cout<<factorial(n)<<endl;
}
