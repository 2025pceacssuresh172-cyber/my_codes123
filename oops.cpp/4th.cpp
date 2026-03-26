#include<iostream>
using namespace std;
class nunu{
    private:
    int RAHUL;
    int ROHIT;
    int SUBHAM;
    public:
    char name[100];
    void setvalue(int a,int b, int c){
        RAHUL = a;
        ROHIT= b;
        SUBHAM =c;
    }
    int  getRAHUL(){
        return RAHUL;
        //return ROHIT;
        //return SUBHAM;
    }
    int getROHIT(){
        return ROHIT;
    }
    int getSUBHAM(){
        return SUBHAM;
    }
};
int main(){
    nunu n;
    n.setvalue(45,56,70);
    cout<<n.getRAHUL();
    cout<<n.getROHIT();
    cout<<n.getSUBHAM();
    

}