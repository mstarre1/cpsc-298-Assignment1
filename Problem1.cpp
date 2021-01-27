#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    if (argc <= 1) {
      cout << "No arguments given, cannot calculate.";
      return 1;
    }

    const float metricTonOunces = 35273.92;
    float pkgWeight = stof(argv[1]);
    
    cout << "One package weighs " << pkgWeight << " ounces, so it would take " << (metricTonOunces/pkgWeight) << " package(s) to have a metric ton of cereal.";

    return 0;
}
