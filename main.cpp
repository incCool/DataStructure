#include <iostream>
#include "hfiles/tools.h"
#include "hfiles/countingSortInc.h"
#include "hfiles/test.h"
#include "hfiles/qsort.h"
#include "hfiles/singleton.h"

using namespace std;
int main() {
    int a[] = {1, 2, 2, 5, 3, 3};
    int *p = a;
    QuickSort qt;
    qt.quickSort(p, 6);

    for (int i = 0; i < 6; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
    swap(p[2], p[4]);
    for (int i = 0; i < 6; i++) {
        cout << p[i] << ' ';
    }

    main01_1();
    return 0;
}