#include <iostream>
using namespace std;
class Hero
{
    // ENCAPSULATION
private:
    string name;
    int power;
    int ki;

public:
    getpower()
    {
        return this->power;
    }
};
int main()
{
    Hero goku;
    cout << "ALL IS WELL" << endl;
}