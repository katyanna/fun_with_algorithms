#include <iostream>
using namespace std;

int binary_search(int k, int list[], int first, int last){
  if (first > last) {
    return -1;
  }

  int mid = (first + last)/2;

  if (k < list[mid]) {
    return binary_search(k, list, first, mid - 1);
  } else if (k > list[mid]) {
    return binary_search(k, list, mid + 1, last);
  } else {
    return mid;
  }
}

int main(){
  int list[] = {1, 3, 5, 7, 9, 13};

  cout << binary_search(4, list, 0, 5) << endl;
  cout << binary_search(9, list, 0, 5) << endl;
  cout << binary_search(3, list, 0, 5) << endl;

  return EXIT_SUCCESS;
}
