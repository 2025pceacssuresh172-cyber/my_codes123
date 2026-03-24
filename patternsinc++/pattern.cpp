#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"enter no of rows : ";
    cin>>m;
    cout<<"enter no fo coloumns: ";
    cin>>n;
    cout<<"pattern"<<endl;
    for(int i=1;i<=m;i++){
        for( int j=1;j<=n;j++){ //yha i galat show kar rha hai online code running hai yha ke kl liye j kar dho ho jayega ok
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}