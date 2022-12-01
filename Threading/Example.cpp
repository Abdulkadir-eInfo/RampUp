#include <iostream>
#include <thread>
#include <mutex>

#define acno 100011
#define name "AKM"
int balance=1000;
std::mutex m;
using namespace std;

void ShowAccount()
{
    cout << "Account Number: " << acno << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}
void Deposit()
{
    long amt;
    // cout << "Enter Amount U want to deposit? ";
    // cin >> amt;
    amt = 100;
    m.lock();
    balance = balance + amt;
    m.unlock();
}
void Withdrawal()
{
    long amt;
    // cout << "Enter Amount U want to withdraw? ";
    // cin >> amt;
    amt = 500;
    if (amt <= balance)
    {
        m.lock();
        balance = balance - amt;
        m.unlock();
    }
    else
        cout << "Less Balance..." << endl;
}

// main code
int main()
{
    //Man1 wants ro view account details
    std::thread man1(ShowAccount);
    //Man2 wants to deposit money in the account
    std::thread man2(Deposit);
    //And hey, man3 wants to withdraw money from the same account
    std::thread man3(Withdrawal);

    ShowAccount();
    man1.join();
    man2.join();
    man3.join();
    return 0;
}