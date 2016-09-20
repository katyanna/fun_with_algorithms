#include <iostream>
#include <iomanip>

using namespace std;

void selection_sort(int list[], int size){
  int i, j, min, aux;
  for (i = 0; i < (size - 1); i++) {
    min = i;
    for (j = (i + 1); j < size; j++){
      if(list[j] < list[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = list[i];
      list[i] = list[min];
      list[min] = aux;
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
  selection_sort(list, size);
  for (int i = 0; i < size; i++){
    cout << list[i] << ", ";
  }

  return EXIT_SUCCESS;
}
