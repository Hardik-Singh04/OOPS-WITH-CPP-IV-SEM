#include <iostream>
using namespace std;
class MarrineAnimals
{
    public:
        void display_Marine_Animals()
        {
            cout<<"I am Marrine Animal "<<endl;
        }
};
class Mammals
{
    public:
        void display_Mammals()
        {
            cout<<"I am Mammal "<<endl;
    }
};
class BlueWhale:public MarrineAnimals,public Mammals
{
    public:
        void display_Blue_Whale()
        {
            cout<<"I belong to both categories Mammals as well as Marine Animals "<<endl;
        }
};
int main()
{
    Mammals ob1;
    MarrineAnimals ob2;
    BlueWhale ob3;
    ob1.display_Mammals();
    ob2.display_Marine_Animals();
    ob3.display_Blue_Whale();
    ob3.display_Mammals();
    ob3.display_Marine_Animals();
    return 0;
}
