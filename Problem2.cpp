#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  if (argc < 3) {
    cout << "Not enough arguments given, cannot calculate.";
    return 1;
  }

  const short roomCap = stoi(argv[1]);
  const short peopleAttending = stoi(argv[2]);

  short comparator = roomCap - peopleAttending;

  if (comparator >= 0) {
    cout << "Room capacity is maintained. Up to " << comparator << " more people can attend before maximum capacity is met.";
  } else {
    cout << "Room is above maximum capacity. There are " << (-1 * comparator) << " too many people planning to attend.";
  }

  return 0;
}
