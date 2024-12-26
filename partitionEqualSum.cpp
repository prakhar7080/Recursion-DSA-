#include<iostream>
using namespace std;
bool partition(int arr[],int n,int index,int sumleft,
        int sumright){
        if(index == n){
            return sumleft == sumright;
        }
        return partition(arr,n,index+1,sumleft+arr[index],sumright)||
        partition(arr,n,index+1,sumleft,sumright+arr[index]);
    }
int main(){
    int arr[4] = {9,8,1};
    int n = 4;
    int index = 0;
    int sumleft,sumright;
    bool ans;
    ans = partition(arr,n,index,sumleft,sumright);
    if(ans) cout<<"Can";
    else cout<<"Not can";
}
