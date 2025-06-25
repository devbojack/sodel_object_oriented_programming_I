#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*__________________
Program to add employee data
and compute the pension
__________________*/

class Employee {
  private:
    string employeeId;
    string firstName;
    string secondName;
    string surname;
    char gender;
    string dateOfBirth;
    double basicSalary;

  public:
    // Employee Constructor
    Employee(std::string eId, std::string fName, std::string mName, std::string sName, char eGender,
             std::string DOB, double bSalary)
    {
        employeeId = eId;
        firstName = fName;
        secondName = mName;
        surname = sName;
        gender = eGender;
        dateOfBirth = DOB;
        basicSalary = bSalary;
    }

    // Friend function
    friend double compute_pension(const Employee &emp);

    // Displays employee information
    void show_employee()
    {
        cout << "\n\t\tEMPLOYEE DETAILS\n";
        cout << "\t\t================\n\n";

        cout << setw(20) << left << "ID NUMBER" << ": " << employeeId << endl;
        cout << setw(20) << left << "FIRST NAME" << ": " << firstName << endl;
        cout << setw(20) << left << "SECOND NAME" << ": " << secondName << endl;
        cout << setw(20) << left << "SURNAME" << ": " << surname << endl;
        cout << setw(20) << left << "GENDER" << ": " << gender << endl;
        cout << setw(20) << left << "DATE OF BIRTH" << ": " << dateOfBirth << endl;
        cout << setw(20) << left << "BASIC SALARY Ksh." << ": " << fixed << setprecision(1)
             << basicSalary << endl;
    }
};

// Friend function to compute 5% pension
double compute_pension(const Employee &emp)
{
    return emp.basicSalary * 0.05;
}

int main()
{
    string employeeId, fName, mName, sName, DOB;
    char gender;
    double bSalary;

    cout << "\t\tADD EMPLOYEE DETAILS\n";
    cout << "\t\t=====================\n\n";

    cout << "ENTER ID NUMBER\t\t\t: ";
    getline(cin, employeeId);

    cout << "ENTER FIRST NAME\t\t: ";
    getline(cin, fName);

    cout << "ENTER SECOND NAME\t\t: ";
    getline(cin, mName);

    cout << "ENTER SURNAME\t\t\t: ";
    getline(cin, sName);

    cout << "ENTER GENDER (M or F)\t\t: ";
    cin >> gender;
    cin.ignore();

    cout << "ENTER DATE OF BIRTH (DD-MM-YYYY): ";
    getline(cin, DOB);

    cout << "ENTER BASIC SALARY IN KSH: ";
    cin >> bSalary;
    cin.ignore();

    Employee emp_obj(employeeId, fName, mName, sName, gender, DOB, bSalary);

    double pension = compute_pension(emp_obj);
    emp_obj.show_employee();
    cout << "Pension: " << pension << endl;

    return 0;
}
