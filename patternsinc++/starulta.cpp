#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side of square :";
    cin>>n;
    cout<<"pattern will be : "<<endl;
    for(int i =1 ;i<=n;i++){
        for(int j=1 ; j<=n-i+1;j++){
            cout<<"* ";// if cout<<j; then 1234 ulta pattern printed on the screen o k
        }
        cout<<endl;
    }
    return 0;
}