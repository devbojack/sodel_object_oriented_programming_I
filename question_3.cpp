#include <iostream>
#include <string>
using namespace std;
/*__________________
Program to set and print a 
voter’s details
____________________*/


// const int MAX_VOTERS = 5000;
// VoteDetails structure that defines one Voter
// struct VoterDetails
// {
//     string nationalIdNumber;
//     string firstName;
//     string middleName;
//     string surname;
//     string pollingStation;
//     string dateOfBirth;
//     string gender;
// };

class Voter {
  private:
    string voterCardId;
    string nationalIdNumber;
    string firstName;
    string middleName;
    string surname;
    string pollingStation;
    string dateOfBirth;
    string gender;

  public:
    // Add the voter's details
    void set_details()
    {
        cout << "Voter Card ID: ";
        getline(cin, voterCardId);

        cout << "National ID Number: ";
        getline(cin, nationalIdNumber);

        cout << "First Name: ";
        getline(cin, firstName);

        cout << "Middle Name: ";
        getline(cin, middleName);

        cout << "Surname: ";
        getline(cin, surname);

        cout << "Polling Station: ";
        getline(cin, pollingStation);

        cout << "Date of Birth (dd-mm-yyyy): ";
        getline(cin, dateOfBirth);

        cout << "Gender (M or F): ";
        getline(cin, gender);
    }

    // Print the voter's details
    void print_details() const
    {
        cout << "Voter Card Id: " << voterCardId << '\n';
        cout << "National Id: " << nationalIdNumber << '\n';
        cout << "First Name: " << firstName << '\n';
        cout << "Middle Name: " << middleName << '\n';
        cout << "Surname: " << surname << '\n';
        cout << "Polling Station: " << pollingStation << '\n';
        cout << "Date of Birth: " << dateOfBirth << '\n';
        cout << "Gender: " << gender << '\n';
    }
};

int main()
{
    Voter voter;
    voter.set_details();
    voter.print_details();
    return 0;
}
