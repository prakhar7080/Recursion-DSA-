#include<iostream>
using namespace std;
bool searchInArray(int arr[],int n,int index,int target){
    if(index == n){
        return false;
    }
    if(arr[index] == target) return true;
    return searchInArray(arr,n,index+1,target);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    int index = 0;
    bool isPresent;
    isPresent = searchInArray(arr,n,index,target);
    if(isPresent) cout<<"Present";
    else cout<<"Not Present";
}
