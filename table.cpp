#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no for table to be find : ";
    cin>>n;
    for(int i=1;i<=n*10;i++){
        if(i%n==0){
            cout<<i<<endl;
        }
    }
    return 0;
}