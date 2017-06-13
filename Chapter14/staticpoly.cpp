#include "statichier.hpp"
#include <vector>

template<typename GeoObj>
void myDraw(GeoObj const& obj)
{
    obj.draw();
}

template <typename GeoObj1, typename GeoObj2>
Coord distance (GeoObj1 const& x1, GeoObj2 const& x2)
{
    Coord c = x1.center_of_gravity() - x2.center_of_gravity();
    return c.abs();
}

template <typename GeoObj>
void drawElements (std::vector<GeoObj> const& elems)
{
    for(unsigned i = 0; i < elems.size(); ++i)
    {
        elems[i].draw();
    }
}

int main()
{
    Line l;
    Circle c, c1, c2;

    myDraw(l);
    myDraw(c);

    std::cout << "Distance between c1 and c2 is: " << std::endl;
    distance(c1, c2);
    std::cout << "Distance between l and c is: " << std::endl;
    distance(l, c);

    std::vector<Line> coll;
    coll.push_back(l);

    drawElements(coll);

    system("pause");
}