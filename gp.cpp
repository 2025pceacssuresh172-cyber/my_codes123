#include<iostream>
using namespace std;
int main(){
    int a,n;
    cout<<"enter no of terms to be printed :";
    cin>>n;
    a= 5;
    for(int i=5;i<=n;i++){//5 10 20 40 80   n terms
        cout<<a<<endl;
        a = a*2;
    }
    return 0;
}