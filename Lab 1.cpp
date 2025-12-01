#include <iostream>
#include <string>
using namespace std;

double calculateCharge(string vehicleType, int hoursParked) {
    double rate = 0;

    if (vehicleType == "Car") {
        rate = 5.0;
    } else if (vehicleType == "Bus") {
        rate = 8.0;
    } else if (vehicleType == "Staff Car") {
        rate = 3.0;
    }
    return rate * hoursParked;
}

int main() {
    string vehicleID[4] = {"AB01", "CM03", "KL44", "AC12"};
    string vehicleType[4] = {"Car", "Staff Car", "Bus", "Car"};
    int entryTime[4] = {9, 12, 7, 11};
    int exitTime[4] = {16, 15, 12, 13};
    int hoursParked[4];

    for (int i = 0; i < 4; i++) {
        hoursParked[i] = exitTime[i] - entryTime[i];
    }

    cout << "Smart Parking Summary Report\n";
    cout << "------------------------------------------\n";
    cout << "| Vehicle ID | Vehicle Type | Hours Parked | Total Charge ($) |\n";
    cout << "------------------------------------------\n";

double totalRevnue = 0
   

}
