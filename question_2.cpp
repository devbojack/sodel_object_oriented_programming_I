#include <iostream>
#include <string>
using namespace std;

// Vehicle class and its member functions
class Vehicle {
  private:
    std::string make;
    std::string model;
    std::string engineNumber;
    double salesPrice;

  public:
    Vehicle()
    {
        salesPrice = 0;
    }
    // Inserts the vehicle details
    void set_vehicle(const std::string &carMake, const std::string &carModel,
                     const std::string &carEngineNumber, double carSalesPrice)
    {
        make = carMake;
        model = carModel;
        engineNumber = carEngineNumber;
        salesPrice = carSalesPrice;
    }

    // Returns the profit
    double get_profit()
    {
        return salesPrice * 0.15;
    }

    // Prints vehicle data and profit
    void printVehicleData()
    {
        std::cout << "\n"
                  << "Make:  " << make << "\n"
                  << "Model:  " << model << "\n"
                  << "Engine Number:  " << engineNumber << "\n"
                  << "Price:  " << salesPrice << "\n"
                  << "Profit:  " << get_profit() << "\n"
                  << "\n";
    }
};

int main(void)
{
    Vehicle cars;

    cars.set_vehicle("Nissan", "Sunny", "AOPXLAL", 24000000);
    cars.printVehicleData();
    cars.set_vehicle("Toyota", "Harrier", "A12A7AA", 4200000);
    cars.printVehicleData();
    cars.set_vehicle("Lexus", "RX450D", "JLSPALL", 30000000);
    cars.printVehicleData();
    return 0;
}
