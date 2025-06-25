#include <algorithm> // for transform
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*__________________
Program to reward subscribers depending
on the amount of airtime a subscriber has.
__________________*/

class RewardSystem {
  private:
    string name;
    string phoneNumber;
    double airtime;
    int bonusPoints;

  public:
    // Constructor that captures subscriber's details
    RewardSystem(const string &sName, const string &sPhoneNumber, double sAirTime)
    {
        name = sName;
        phoneNumber = sPhoneNumber;
        airtime = sAirTime;
        bonusPoints = 0;
    }

    // Calculates Subscriber's bonus points
    void compute_bonuspoints()
    {
        if (airtime > 1999.00)
        {
            bonusPoints = 500;
        }
        else if (airtime > 999.00)
        {
            bonusPoints = 300;
        }
        else if (airtime > 499.00)
        {
            bonusPoints = 100;
        }
        else if (airtime > 99.00)
        {
            bonusPoints = 50;
        }
        else
        {
            bonusPoints = 0;
        }
    }

    // Prints the reward information
    void print_reward_info()
    {
        cout << name << " :(PHONE NO:" << phoneNumber << "): AWARDED " << bonusPoints
             << " BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION!" << endl;
    }
};


int main()
{
    string name, phone;
    double airtime;

    cout << "Subscriber's Names: ";
    getline(cin, name);

    cout << "Subscriber's Phone Number: ";
    getline(cin, phone);

    cout << "Subscriber's Airtime Amount: ";
    cin >> airtime;

    RewardSystem subscriber(name, phone, airtime);
    subscriber.compute_bonuspoints();
    subscriber.print_reward_info();
    return 0;
}
