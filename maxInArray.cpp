#include<iostream>
#include<climits>
using namespace std;
int maxInArray(int arr[],int n,int index,int max){
    if(index == n){
        return max;
    }
    if(max<arr[index]) max = arr[index];
    return maxInArray(arr,n,index+1,max);
}
int main(){
    int arr[5] = {1000,1,-8,0,24646};
    int n=5;
    int max = INT_MIN;
    max = maxInArray(arr,n,0,max);
    cout<<max;
}
