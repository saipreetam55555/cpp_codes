//constuctor overloading
#include <iostream>
using namespace std;
// Class representing a simple bank account
class BankAccount {
private:
 string name;
 int accNumber;
 double balance;
public:
 // Constructor with default values (if no values provided, defaults are used)
 BankAccount(string n = "Unnamed", int num = 0, double bal = 0.0): 
 name(n), accNumber(num), balance(bal) {
 cout << "Account Created: " << name << " | Acc No: "
 << accNumber << " | Balance: $" << balance << "\n";
 }
 // Function to deposit money into the account
 void deposit(double amount) {
 balance += (amount > 0) ? amount : 0; // Ensures only positive deposits are added
 cout << "Deposited: $" << amount << " | New Balance: $" << balance << "\n";
 }
 // Function to withdraw money from the account
 void withdraw(double amount) {
 if (amount > 0 && amount <= balance) balance -= amount; // Checks if withdrawal is valid
 cout << "Withdrawn: $" << amount << " | Balance: $" << balance << "\n";
 }
};
int main() {
 // Creating three different bank accounts
 BankAccount acc1; // Default account with no details
 BankAccount acc2("Saipreetam", 12345678); // Account with name and account number
 BankAccount acc3("Saipreetam", 12345678, 5000.50); // Account with initial balance
 // Performing transactions on the third account
 acc3.deposit(1500); // Depositing money
 acc3.withdraw(3000); // Withdrawing money
 return 0; // End of the program
}
