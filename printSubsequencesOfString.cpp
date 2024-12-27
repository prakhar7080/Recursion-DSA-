#include<iostream>
using namespace std;
//This code will print all subsequences
void printSub(string str, string substr, int index){
    if(index == str.length()){
        cout<<substr<<endl;
        return;
    }
    char ch = str[index];
    printSub(str,substr + ch, index+1);
    printSub(str,substr,index+1);
}
int main(){
    string str = "abc";
    string substr = "";
    int index = 0;
    printSub(str,substr,index);
}
