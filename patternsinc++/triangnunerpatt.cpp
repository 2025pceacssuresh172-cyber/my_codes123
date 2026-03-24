#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no be printed: ";
    cin>>n;
    cout<<"Pattern will be : "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}