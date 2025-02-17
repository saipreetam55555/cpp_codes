#include <iostream>
using namespace std;

class ElectricityBill {
public:
float totalCost, extraCharge;
int totalUnits;

  float computeBill() {
  cout << "Enter the number of electricity units consumed: ";
  cin >> totalUnits;

  if (totalUnits <= 100) {
    totalCost = totalUnits * 0.50; // 50 paise per unit
  } 
  else if (totalUnits > 250 && totalUnits < 500) {
    totalCost = totalUnits * 0.60; // 60 paise per unit
  } 
  else {
    cout << "Invalid input. Enter values within the specified range." << endl;
    return 0;
  }

  if (totalCost > 200) {
    extraCharge = totalCost - 200;
    extraCharge = (10.0 / 100) * extraCharge + extraCharge;
    totalCost = totalCost + extraCharge;
  }

  return totalCost; // Return the calculated amount
 }
};

int main() {
    float finalBill;
    ElectricityBill bill;
    
    finalBill = bill.computeBill();

    if (finalBill != 0) {
        cout << "The total electricity bill is: Rs. " << finalBill << endl;
    }

    return 0;
}

