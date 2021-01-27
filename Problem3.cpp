#include <iostream>

using namespace std;

int main()
{
    cout << "How many hours have been worked?\n";
    float hours;
    cin >> hours;
    float grossPay;

    if (hours <= 40.00) {
      grossPay = hours * 16.00;
    } else {
      grossPay = (40.00 * 16.00) + ((hours - 40.00) * 16.00 * 1.5);
    }
    float ssDeduction = .06 * grossPay;
    float fiDeduction = .14 * grossPay;
    float siDeduction = .05 * grossPay;
    float miDeduction = 10.00;

    cout << "Gross initial pay: $" << grossPay << ".\n\tSocial security deducts: $" << ssDeduction;
    cout << ".\n\tFederal income tax: $" << fiDeduction << ".\n\tState income tax: $" << siDeduction;
    cout << ".\n\tMedical Insurance cost: $" << miDeduction << ".\n Expected take home income for the week: $";
    cout << (grossPay - ssDeduction - fiDeduction - siDeduction - miDeduction);
    return 0;
}
