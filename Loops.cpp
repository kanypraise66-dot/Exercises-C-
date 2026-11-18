#include <iostream>
#include <string>
using namespace std;

void loop(int V)
{
    int value = V;
    while (value < 5 || value > 10)
    {

        cout << "Please Enter a value between 5 & 10 !" << endl;
        cin >> value;
    }
    cout << "You have entered a valid value: " << value << endl;
}

int main()
{

    int number;

    cout << "Enter Your Number" << endl;

    while (!(std::cin >> number))
    {
        std::cout << "Sorry you've entered an invalid number" << endl;

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    loop(number);
}