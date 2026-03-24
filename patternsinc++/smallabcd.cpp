#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter pattern to  be printed:";
    cin>>n;
    cout<<"the pattern is : "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+96)<<" ";

        }
        cout<<endl;
    }
    return 0;
}