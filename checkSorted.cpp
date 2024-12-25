#include<iostream>
using namespace std;
bool checkSorted(int arr[],int n,int index){
    if(index == n) return true;
    if(arr[index] < arr[index-1]) return false;
    return checkSorted(arr,n,index+1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 1;
    bool isSorted;
    isSorted = checkSorted(arr,n,index);
    if(isSorted) cout<<"Sorted";
    else cout<<"Not sorted";
}
