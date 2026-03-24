#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of sides: ";
    cin>>n;
    cout<<"pattern will be : ";
    for(int i=1;i<=n;i++){
        if(n%i==0){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";

            }
        }
        else{
            for (int j=1;j<=i;j++){
                cout<<char(j+64)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;// galta hai bhai idhar ok 
}