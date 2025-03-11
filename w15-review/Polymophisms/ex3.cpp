#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual void Pay(double amount)
    {
        cout << "Paying $" << amount << " using a generic payment method." << endl;
    }
};

class CreditCard : public PaymentMethod
{
public:
    void Pay(double amount)
    {
        cout << "Paying $" << amount << " using a credit card." << endl;
    }
};

class PayPal : public PaymentMethod
{
public:
    void Pay(double amount)
    {
        cout << "Paying $" << amount << " using PayPal." << endl;
    }
};

int main()
{
    PaymentMethod *scb_card = new CreditCard();
    PaymentMethod *my_paypal = new PayPal();

    double amount = 100.0;
    PaymentMethod *default_payment_method = scb_card;
    default_payment_method->Pay(amount);

    default_payment_method = my_paypal;
    default_payment_method->Pay(amount);

    return 0;
}