#include<iostream>
#include<iomanip>
using namespace std;
void swap(int*a  , int *b){
    int temp = *a;
    *a= *b;
    *b = temp;

}
int main(){
    int a =12,b= 45;
    swap(&a,&b);
    cout<<a<<endl<<b;
}