#include "lib.h"

float funzione (float a[], int dim){
    float max=a[0];
    for (int i=0;i<dim;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    return max;
}
