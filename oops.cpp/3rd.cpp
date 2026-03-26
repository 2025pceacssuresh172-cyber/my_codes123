#include <iostream>
using namespace std;
class hero
{
private:
    int health;

public:
    char level;
    char getlevel()
    {
        return level;
    }
    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};

    int main()
    {
        hero d;
        // d.sethealth();
        cout<<d.gethealth();
        d.sethealth(56);
        //d.gethealth();
        d.level='a';
        cout<<d.gethealth();
        cout<<d.getlevel();
    }
