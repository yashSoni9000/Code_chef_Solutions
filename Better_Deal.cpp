#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int price_first_store = 100 * (100 - a) / 100;
    int price_second_store = 200 * (100 - b) / 100;
    if (price_first_store < price_second_store) {
      cout << "FIRST" << endl;
    } else if (price_first_store > price_second_store) {
      cout << "SECOND" << endl;
    } else {
      cout << "BOTH" << endl;
    }
  }
  return 0;
}

// take the discount and compare , whosoever is less print it else print both