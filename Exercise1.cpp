#include <iostream>
#include <random>
using namespace std;

void subcription()
{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 11); // This should print values from 0-11

    int daysUntilExpiration = dist(gen);

    cout << daysUntilExpiration << endl;

    switch (daysUntilExpiration)
    {
    case 10:
    case 9:
    case 8:
    case 7:
    case6:

        cout << "Your Subcription will expire soon, Renew now!" << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
        cout << "Your subcription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;

        break;

    case 1:

        cout << "Your subcription expires within a day" << endl;
        cout << "Renew now and save 20%";

        break;

    case 0:

        cout << "Your subcription has expired " << endl;
        break;

    default:
        cout
            << "You have an active subcription";
    }
}

int main()
{

    subcription();
}