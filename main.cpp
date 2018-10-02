#include <iostream>
#include "hfiles/tools.h"
#include "cppfiles/TreeTools.cpp"


using namespace std;
int main() {
    int a[] = {1, 2, 2, 5, 3, 3};
    int *p = a;
    CountingSort nn;

    nn.countingSort(p, 6);
    for (int i = 0; i < 6; i++)
        cout << a[i] << endl;

    return 0;
}