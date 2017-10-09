#include <iostream>
using namespace std;

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c) {
  bool trueIterators = false;
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};

  if(first == last || first > last) cout << "ERROR:\tWrong range..." << endl;
  if(c < 1 || c > 17) cout << "ERROR:\tWrong summ value..." << endl;

  while(first != last) {
    int Summ = arr[first] + arr[last];
    if(Summ < c)
      first++;
    else if(Summ > c)
      last--;
    else {
      trueIterators = true;
      cout << "Our Iterators " << first << " " << last << endl;
      break;
    }
  }
  return 0;
}

int main() {
  int sumElement = 15;
  size_t a = 0, b = 9;
  find_two_elements_with_sum(a, b, sumElement);

  return 0;
}
