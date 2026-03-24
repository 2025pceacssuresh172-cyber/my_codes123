#include<iostream>
using namespace std;
int maxofthree(int a, int b, int c){
    if(a>b && a>=c) return a;
    if(b>=a && b>c) return b;
    else return c;
}
int main(){
    cout<<maxofthree(7,7,1);
}