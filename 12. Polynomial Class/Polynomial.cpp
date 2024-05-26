#include <iostream>
using namespace std;

class Polynomial
{
public:
    int *degCoeff;
    int capacity;
    int degree;

    Polynomial()
    {
        degCoeff = new int[5]();
        capacity = 5;
        degree = 0;
    }

    Polynomial(Polynomial const &p)
    {
        degCoeff = new int[p.capacity]();

        for (int i = 0; i <= p.degree; i++)
        {
            degCoeff[i] = p.degCoeff[i];
        }

        capacity = p.capacity;
        degree = p.degree;
    }

    void operator=(Polynomial const &p)
    {
        if (this != &p)
        {
            delete[] degCoeff;
            degCoeff = new int[p.capacity]();
            for (int i = 0; i <= p.degree; i++)
            {
                degCoeff[i] = p.degCoeff[i];
            }
            capacity = p.capacity;
            degree = p.degree;
        }
    }

    ~Polynomial()
    {
        delete[] degCoeff;
    }

    void setCoefficient(int deg, int coeff)
    {

        if (deg < 0)
        {
            cout << "Degree cannot be negative." << endl;
            return;
        }

        while (deg >= capacity)
        {
            capacity *= 2;

            if (deg < capacity)
            {
                int *newDegCoeff = new int[capacity]();

                for (int i = 0; i <= degree; i++)
                {
                    newDegCoeff[i] = degCoeff[i];
                }

                delete[] degCoeff;

                degCoeff = newDegCoeff;
            }
        }

        degree = max(degree, deg);

        degCoeff[deg] = coeff;
    }

    void print() const
    {
        string output = "";

        for (int i = degree; i >= 0; i--)
        {
            if (output.size() == 0)
            {
                output += to_string(degCoeff[i]);
                if (i != 0)
                {
                    output += "x^" + to_string(i);
                }
            }
            else
            {
                if (degCoeff[i] > 0)
                {
                    output += " + " + to_string(degCoeff[i]);
                    if (i != 0)
                    {
                        output += "x^" + to_string(i);
                    }
                }

                else if (degCoeff[i] < 0)
                {
                    output += " - " + to_string(abs(degCoeff[i]));
                    if (i != 0)
                    {
                        output += "x^" + to_string(i);
                    }
                }
            }
        }

        cout << output << endl;
    }

    // Addition of two polynomials

    Polynomial operator+(Polynomial const &p) const
    {
        Polynomial f;

        f.capacity = max(capacity, p.capacity);

        f.degCoeff = new int[f.capacity]();

        f.degree = max(degree, p.degree);

        int i = 0, j = 0;

        while (i <= degree && j <= p.degree)
        {
            f.degCoeff[i] = degCoeff[i] + p.degCoeff[j];
            i++;
            j++;
        }

        while (i <= degree)
        {
            f.degCoeff[i] = degCoeff[i];
            i++;
        }

        while (j <= p.degree)
        {
            f.degCoeff[j] = p.degCoeff[j];
            j++;
        }

        return f;
    }

    // Substraction of two polynomials

    Polynomial operator-(Polynomial const &p) const
    {
        Polynomial f;

        f.capacity = max(capacity, p.capacity);

        f.degCoeff = new int[f.capacity]();

        f.degree = max(degree, p.degree);

        int i = 0, j = 0;

        while (i <= degree && j <= p.degree)
        {
            f.degCoeff[i] = degCoeff[i] - p.degCoeff[j];
            i++;
            j++;
        }

        while (i <= degree)
        {
            f.degCoeff[i] = degCoeff[i];
            i++;
        }

        while (j <= p.degree)
        {
            f.degCoeff[j] = -p.degCoeff[j];
            j++;
        }

        return f;
    }

    Polynomial operator*(Polynomial const &p) const
    {
        Polynomial f;

        f.capacity = degree + p.degree + 1;

        f.degCoeff = new int[f.capacity]();

        f.degree = degree + p.degree;

        for (int i = 0; i <= degree; i++)
        {
            for (int j = 0; j <= p.degree; j++)
            {

                f.degCoeff[i + j] += degCoeff[i] * p.degCoeff[j];
            }
        }

        return f;
    }
};