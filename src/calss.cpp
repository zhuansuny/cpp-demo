#include "class.hpp"
void testClass()
{
    Rectangle rc(1, 2, 3, 4);
    cout << rc.getArea() << endl;
    rc.Sharp::showName();

    Sharp *s = new Rectangle(1, 2, 3, 4);
    s->showName();
};