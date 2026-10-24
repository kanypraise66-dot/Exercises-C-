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

    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
    {
        cout << "Your Subcription will expire soon, Please Renew!" << endl;
    }
    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        cout << "Your Subcription Expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration == 1)
    {
        cout << "Your Subcription Expires within a Day" << endl;
        cout << "Renew now and save 20%" << endl;
    }
    else if (daysUntilExpiration == 0)
    {
        cout << "Your Subcription has Expired!" << endl;
    }
    else
    {
        cout << "You have an active Subcription!" << endl;
    }
}

int main()
{

    subcription();
}