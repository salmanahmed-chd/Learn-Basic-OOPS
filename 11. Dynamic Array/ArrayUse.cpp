#include "DynamicArray.cpp"

int main()
{
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    DynamicArray d2(d1);

    d2.update(100, 0);

    d1.print();
    d2.print();

    DynamicArray d3 = d1;

    d3.update(400, 3);

    d1.print();
    d3.print();
}