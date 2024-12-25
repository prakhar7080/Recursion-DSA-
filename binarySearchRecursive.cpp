#include<iostream>
using namespace std;
bool binarySearchRecursive(int arr[], int n, int target, int s, int e){
    if(s>e) return false;
    int mid = (s+e)/2;
    if(arr[mid] == target) return true;
    if(mid > target) {
        return binarySearchRecursive(arr,n,target,s,mid-1);
    }
    else return binarySearchRecursive(arr,n,target,mid+1,e);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    int s = 0;
    int e =n-1;
    bool isPresent; 
    isPresent = binarySearchRecursive(arr,n,target,s,e);
    if(isPresent) cout<<"Present";
    else cout<<"Not Present";
}
