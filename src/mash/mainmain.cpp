#include <iostream>
#include <vector>
#include "MinHashHeap.h"

using namespace std;

void printMinHashHeap(MinHashHeap& m) {
    vector<uint32_t> counts;
    m.toCounts(counts);
    cout << "Elementi\n";
    cout << "--------------\n";
    for (vector<uint32_t>::iterator it = counts.begin(); it != counts.end(); ++it) {
        cout << "elem " << *it << "\n";
    }
    cout << "--------------\n";
}

int mainmain(int argc, const char ** argv) {
    bool use64 = true;
    uint64_t cardinalityMaximum = 5;
    uint64_t multiplicityMinimum = 1;       // default 1
    uint64_t memoryBoundBytes = 0;          // default 0 (if 0 doesn't use bloom filter)
    MinHashHeap m{use64, cardinalityMaximum, multiplicityMinimum, memoryBoundBytes};

    //printMinHashHeap(m);
    m.printStatus();
    m.tryInsert({5});
    m.printStatus();
    //printMinHashHeap(m);

    return 0;
}


