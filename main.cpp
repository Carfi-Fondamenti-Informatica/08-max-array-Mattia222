#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  int dim;
    cin >> dim;
    float array[dim];
    for (int i=0;i<dim;i++){
        cin >> array[i];
    }
    cout << funzione (array, dim) << endl;
  return 0;
}
