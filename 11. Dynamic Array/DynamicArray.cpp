#include <iostream>
using namespace std;

class DynamicArray
{

public:
    int *data;
    int nextIndex;
    int capacity;

    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &d)
    {
        data = new int[d.capacity];

        for (int i = 0; i < d.nextIndex; i++)
        {
            data[i] = d.data[i];
        }

        nextIndex = d.nextIndex;
        capacity = d.capacity;
    }

    void operator=(DynamicArray const &d)
    {
        data = new int[d.capacity];

        for (int i = 0; i < d.nextIndex; i++)
        {
            data[i] = d.data[i];
        }

        nextIndex = d.nextIndex;
        capacity = d.capacity;
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[capacity * 2];

            for (int i = 0; i < nextIndex; i++)
            {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;

            capacity *= 2;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int ind) const
    {
        if (ind < nextIndex)
        {
            return data[ind];
        }

        return -1;
    }

    void update(int element, int ind)
    {
        if (ind < nextIndex)
        {
            data[ind] = element;
        }

        else if (ind == nextIndex)
        {
            add(element);
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};