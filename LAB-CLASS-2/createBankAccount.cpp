#include <iostream>
using namespace std;
class BankAccount
{
public:
    string account_owner;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_owner, string address, int age, string password)
    {
        this->account_owner = account_owner;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000000;
        this->balance = 0;
        cout << "Your account no is " << this->account_number << endl;
    }

    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if (amount<0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Add money successful" << endl;
        }

        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    void deposit_money(string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (this->balance<amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Deposit money successful" << endl;
        }

        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    friend class MyCash;
};
class MyCash
{
protected:
    int balance;

public:
MyCash(){
        this->balance = 0;
}
    void add_money_from_bank(BankAccount *myAccount, string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid amount" << endl;
            return;
        }
        if (myAccount->balance < amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        if (myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "Add money from bank is succesful" << endl;
        }
        else{
            cout << "Password didn't match";
        }
    }
    int show_balance(){
        return balance;
    }
};

BankAccount *create_account()
{
    string account_owner, password, address;
    int age;
    cout << "Create Account " << endl;
    cin >> account_owner >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(account_owner, address, age, password);
    return myAccount;
};

void add_money(BankAccount *myAccount)
{
    
    
    string password;
    int amount;
    cout << "ADD MONEY" << endl;
    cin >> password >> amount;
    myAccount->add_money(password, amount);
    cout << "Your account balance is " << myAccount->show_balance("abc") << endl;
};
void deposit_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Deposit MONEY" << endl;
    cin >> password >> amount;
    myAccount->deposit_money(password, amount);
    cout << "Your account balance is " << myAccount->show_balance("abc") << endl;
};
void add_money_from_bank(MyCash *myCash, BankAccount *myAccount){
    string password;
    int amount;
    cout << "ADD MONEY FROM BANK" << endl;
    cin >> password >> amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    cout << "Your account balance is " << myAccount->show_balance("abc") << endl;
    cout << "MyCash balance is " << myCash->show_balance() << endl;
}
int main()
{

    BankAccount *myAccount = create_account();
    
    MyCash *myCash = new MyCash();

     Flag:
    cout << "Select option: " << endl;
    cout << "1. Add Money to Bank" << endl;
    cout << "2.Deposit Money from Bank" << endl;
    cout << "3.Add Money to MyCash from Bank" << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        add_money(myAccount);
        }
        else if (option == 2)
        {
            deposit_money(myAccount);
        }
        else if (option == 3)
        {
            add_money_from_bank(myCash, myAccount);
        }
        else
        {
            cout << "Invalid option" << endl;
        }
        goto Flag;

        return 0;
}