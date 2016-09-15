#include <iostream>
#include <iomanip>

using namespace std;

void  insertion_sort(int list[], int size){
  int i, j, tmp;

  for (i = 1; i < size; i++) {
    j = i;
    while (j > 0 and list[j - 1] > list[j]) {
      tmp = list[j];
      list[j] = list[j - 1];
      list[j - 1] = tmp;
      j--;
    }
  }
}

int main(int argc, char* argv[]){
  int list[100];
  int size;

  cout << "Informe quantidade de elementos da lista: " << endl;
  cin  >> size;

  cout << "Informe os elementos da lista: " << endl;
  for (int i = 0; i < size ; i++){
    cout << "L[" << setw(2) << i << "] : ";
    cin  >> list[i];
  }

  cout << "Lista ordenada: " << endl;
  insertion_sort(list, size);
  for (int i = 0; i < size; i++){
    cout << list[i] << ", ";
  }

  return EXIT_SUCCESS;
}
