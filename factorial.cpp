#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no for to find factorial: ";
    cin>>n;
    int product= 1;
    for(int i =1;i<=n;i++){
        product = product*i;
       // cout<<product<<endl;

     }
    cout<<"factorial is :"<<product;
    return 0; 
}