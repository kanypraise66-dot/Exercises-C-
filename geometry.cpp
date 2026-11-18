#include <iostream>
#include <string>
using namespace std;

float triangle(float base, float height)
{
    float area = 0.5 * base * height;
    cout << "The area of yojur triangle is : " << area;

    return area;
}

float square(float s1, float s2)
{
    float area = s1 * s2;
    cout << "The area of your square is : " << area;
    return area;
}
float rectangle(float l, float w)
{
    float area = l * w;
    cout << "The area of your rectangle is : " << area;
    return area;
}

int main()
{

    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit program" << endl;

    int select;
    cout << "Enter Selection ";
    cin >> select;

    if (select == 1)
    {
        float s1;
        float s2;
        cout << "Enter the length of side 1";
        cin >> s1;
        cout << "Enter the length of side 2";
        cin >> s2;

        square(s1, s2);
    }
    else if (select == 2)
    {
        float l;
        float w;
        cout << "Enter the length of rectangle";
        cin >> l;
        cout << "Enter the width of rectangle";
        cin >> w;

        rectangle(l, w);
    }
    else if (select == 3)
    {
        float base;
        float Height;
        cout << "Enter the Base length";
        cin >> base;
        cout << "Enter the Height length ";
        cin >> Height;

        triangle(base, Height);
    }
    else if (select == 4)
    {
        cout << "Thank you!";
    }
    else if (select == 3)
    {
        float base;
        float Height;
        cout << "Enter the Base length";
        cin >> base;
        cout << "Enter the Height length ";
        cin >> Height;

        triangle(base, Height);
    }
    else if (select == 4)
    {
        cout << "Thank you!";
    }

    return 0;
}