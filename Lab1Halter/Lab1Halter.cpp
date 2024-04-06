// Lab1Halter.cpp : Defines the entry point for the application.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Establish variables for carpet, room lenght and room width
    double costSqrFoot_1;
    double costSqrFoot_2;
    double costSqrFoot_3;
    int roomLength_1;
    int roomLength_2;
    int roomLength_3;
    int roomWidth_1;
    int roomWidth_2;
    int roomWidth_3;
    int roomArea_1;
    int roomArea_2;
    int roomArea_3;
    double carpetTotalCost_1;
    double carpetTotalCost_2;
    double carpetTotalCost_3;
    double laborCost_1;
    double laborCost_2;
    double laborCost_3;
    double taxCost_1;
    double taxCost_2;
    double taxCost_3;
    double totalCost_1;
    double totalCost_2;
    double totalCost_3;

    // Recieve input for room one carpet cost per square foot and room dimensions
    // cout << "What is the price of carpet per square foot for room one? ";
    cin >> costSqrFoot_1;
    // cout << "What is the length of the room one in feet? "; 
    cin >> roomLength_1;
    // cout << "What is the width of the room one in feet? "; 
    cin >> roomWidth_1;

    // Recieve input for room two carpet cost per square foot and room dimensions
    // cout << "What is the price of carpet per square foot for room two? ";
    cin >> costSqrFoot_2;
    // cout << "What is the length of the room two in feet? "; 
    cin >> roomLength_2;
    // cout << "What is the width of the room two in feet? "; 
    cin >> roomWidth_2;
    //cout << endl;

    // Recieve input for room three carpet cost per square foot and room dimensions
     // cout << "What is the price of carpet per square foot for room two? ";
    cin >> costSqrFoot_3;
    // cout << "What is the length of the room two in feet? "; 
    cin >> roomLength_3;
    // cout << "What is the width of the room two in feet? "; 
    cin >> roomWidth_3;
    //cout << endl;

    // Calculate the area of each room in square feet
    roomArea_1 = roomLength_1 * roomWidth_1;
    roomArea_2 = roomLength_2 * roomWidth_2;
    roomArea_3 = roomLength_3 * roomWidth_3;

    // Calculate cost for room 1 to carpet the with an additional 20% cost built-in
    carpetTotalCost_1 = (roomArea_1 * costSqrFoot_1);
    carpetTotalCost_1 = carpetTotalCost_1 + (.2 * carpetTotalCost_1);

    // Calculate cost for room 2 to carpet the with an additional 20% cost built-in
    carpetTotalCost_2 = (roomArea_2 * costSqrFoot_2);
    carpetTotalCost_2 = carpetTotalCost_2 + (.2 * carpetTotalCost_2);

    // Calculate cost for room three to carpet the with an additional 20% cost built-in
    carpetTotalCost_3 = (roomArea_3 * costSqrFoot_3);
    carpetTotalCost_3 = carpetTotalCost_3 + (.2 * carpetTotalCost_3);

    // Calculate the labor costs
    laborCost_1 = 0.75 * roomArea_1;
    laborCost_2 = 0.75 * roomArea_2;
    laborCost_3 = 0.75 * roomArea_3;

    //Calculate Sales Tax and Total Cost for room 1
    totalCost_1 = carpetTotalCost_1 + laborCost_1;
    taxCost_1 = totalCost_1 * 0.07;
    totalCost_1 = totalCost_1 + taxCost_1;

    //Calculate Sales Tax and Total Cost for room 2
    totalCost_2 = carpetTotalCost_2 + laborCost_2;
    taxCost_2 = totalCost_2 * 0.07;
    totalCost_2 = totalCost_2 + taxCost_2;

    //Calculate Sales Tax and Total Cost for room 3
    totalCost_3 = carpetTotalCost_3 + laborCost_3;
    taxCost_3 = totalCost_3 * 0.07;
    totalCost_3 = totalCost_3 + taxCost_3;

    //Display the area of the room 1 and the cost of the carpet
    cout << "Order #1" << endl;
    cout << "Room: " << roomArea_1 << " sq ft" << endl;
    cout << "Carpet: $" << fixed << setprecision(2) << carpetTotalCost_1 << endl;
    cout << "Labor: $" << fixed << setprecision(2) << laborCost_1 << endl;

    //Display the cost in taxes and display the total cost including taxes for room 1
    cout << "Tax: $" << fixed << setprecision(2) << taxCost_1 << endl;
    cout << "Cost: $" << fixed << setprecision(2) << totalCost_1 << endl;
    cout << endl;

    //Display the area of the room 2 and the cost of the carpet
    cout << "Order #2" << endl;
    cout << "Room: " << roomArea_2 << " sq ft" << endl;
    cout << "Carpet: $" << fixed << setprecision(2) << carpetTotalCost_2 << endl;
    cout << "Labor: $" << fixed << setprecision(2) << laborCost_2 << endl;

    //Display the cost in taxes and display the total cost including taxes for room 2
    cout << "Tax: $" << fixed << setprecision(2) << taxCost_2 << endl;
    cout << "Cost: $" << fixed << setprecision(2) << totalCost_2 << endl;
    cout << endl;

    //Display the area of the room 3 and the cost of the carpet
    cout << "Order #3" << endl;
    cout << "Room: " << roomArea_3 << " sq ft" << endl;
    cout << "Carpet: $" << fixed << setprecision(2) << carpetTotalCost_3 << endl;
    cout << "Labor: $" << fixed << setprecision(2) << laborCost_3 << endl;

    //Display the cost in taxes and display the total cost including taxes for room 3
    cout << "Tax: $" << fixed << setprecision(2) << taxCost_3 << endl;
    cout << "Cost: $" << fixed << setprecision(2) << totalCost_3 << endl;
    cout << endl;

    cout << "Total Sales: $" << fixed << setprecision(2) << totalCost_1 + totalCost_2 + totalCost_3;
    cout << endl;
    return 0;
}