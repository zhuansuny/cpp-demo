#include <iostream>
using namespace std;

class Dog
{
public:
    Dog()
    {
        cout << "dog is created" << endl;
    }
    Dog(string name, int speed) : name(name), speed(speed){};
    void run()
    {
        cout << "dog " << name << "is running, speed is " << speed << endl;
    }
    string name;
    int speed;
};

void vector_demo();
void testClass();