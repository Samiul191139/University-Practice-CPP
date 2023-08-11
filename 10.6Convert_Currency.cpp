#include <iostream>
#include <unordered_map>
using namespace std;
class Currency 
{
private:
    string name;
    double exchangeRateToUSD;

public:
    Currency(const string& n, double rate) : name(n), exchangeRateToUSD(rate) {}

    double convertToUSD(double amount) const
    {
        return amount * exchangeRateToUSD;
    }

    double convertFromUSD(double amount) const
    {
        return amount / exchangeRateToUSD;
    }

    friend double operator*(double amount, const Currency& currency)
    {
        return amount * currency.exchangeRateToUSD;
    }
};

int main() 
{
    Currency usd("USD", 1.0);
    Currency euro("Euro", 1.18);
    Currency yen("Japanese Yen", 0.009);
    double amountInEuro = 100.0;
    double amountInUSD = amountInEuro * euro;
    cout << amountInEuro << " Euro is equal to " << amountInUSD << " USD" << endl;
    double amountInYen = 1000.0;
    double amountInUSD2 = amountInYen * yen;
    cout << amountInYen << " Japanese Yen is equal to " << amountInUSD2 << " USD" << endl;
    return 0;
}