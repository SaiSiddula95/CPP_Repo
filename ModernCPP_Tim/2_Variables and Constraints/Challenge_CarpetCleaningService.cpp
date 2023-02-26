#include <iostream>

using namespace std;

int main()
{
    const int pricePerSmallRoom = 25;
    const int pricePerLargeRoom = 35;
    const double salesTax = 6.0/100;
    int numberOfSmallRooms{0};
    int numberOfLargeRooms{0};
    double totalCost{0};

    cout << "How many small rooms do you need cleaned?";
    cin >> numberOfSmallRooms;
    cout << "How many large rooms do you need cleaned?";
    cin >> numberOfLargeRooms;
    totalCost = (pricePerSmallRoom * numberOfSmallRooms + pricePerLargeRoom * numberOfLargeRooms);
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << totalCost << endl;
    cout << "Tax: $" << totalCost * salesTax << endl;
    cout << "======================================" << endl;
    cout << "Total estimate: $" << totalCost + totalCost*salesTax << endl;
    cout << "This estimate is valid for 30 days";

    return 0;
}

