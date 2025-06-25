#include <iostream>
#include <string>
using namespace std;

// Maximum number of allowed cars in the database
const int MAX_CARS = 150;

// Car structure that defines one car
struct Car
{
    std::string make;
    std::string model;
    std::string engineNumber;
    double salePrice;
};

// Vehicle class with Car list and their member functions
class Vehicle {
  private:
    Car cars[MAX_CARS];
    int salesCount;

  public:
    Vehicle(void)
    {
        salesCount = 0;
    }

    // Inserts a new car sales to the cars array
    void set_vehicle(const std::string &make, const std::string &model,
                     const std::string &engineNumber, double salesPrice)
    {
        if (salesCount < MAX_CARS)
        {
            cars[salesCount] = {make, model, engineNumber, salesPrice};
            salesCount++;
        }
        else
        {
            std::cout << "Sales database is full!\n";
        }
    }

    // Returns the total profit
    void get_profit()
    {
        if (salesCount > 0)
        {
            std::cout << "\n" << "Total Profit from the sale of " << salesCount << " cars. \n";
            double totalProfit = 0;
            for (int i = 0; i < salesCount; ++i)
            {
                totalProfit += cars[i].salePrice * 0.15;
            }
            std::cout << "Total Profit : " << totalProfit << "\n";
        }
    }
};

int main(void)
{
    Vehicle cars;

    cars.set_vehicle("Nissan", "Sunny", "AOPXLAL", 240);
    cars.set_vehicle("Toyota", "Harrier", "A12A7AA", 420);
    cars.set_vehicle("Lexus", "RX450D", "JLSPALL", 300);
    cars.get_profit();
    return 0;
}
