#include<iostream>
using namespace std;
void printArray(int arr[],int n,int index){
    if(index == n){
        return;
    }
    cout<<arr[index]<<" ";
    printArray(arr,n,index+1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    printArray(arr,n,0);
}
