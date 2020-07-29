#include <iostream>
#include "mash/Sketch.h"

using namespace std;

void printParameters(const Sketch::Parameters& pp) {
    cout << "\nSketch::Parameters output";
    cout << "\n Using 64              : " << pp.use64;
    cout << "\n Min hashes per window : " << pp.minHashesPerWindow;
    cout << "\n Reads                 : " << pp.reads;
    cout << "\n Min Cov               : " << pp.minCov;
    cout << "\n Memory Bound          : " << pp.memoryBound;
    cout << "\n KmerSize              : " << pp.kmerSize;
    cout << "\n non canonical         : " << pp.noncanonical;
    cout << "\n";
}

void printReference(Sketch::Reference& rr) {
    cout << "\nSketch::Reference output";
    cout << "\n Name          : " << rr.name;
    cout << "\n Comment       : " << rr.comment;
    cout << "\n Length        : " << rr.length;
    //HashList hashesSorted;
    //cout << "\n Hashes sorted : " << rr.hashesSorted;
    int i = 0;
    for (std::vector<uint32_t>::iterator it = rr.counts.begin(); it < rr.counts.end(); ++it)
        cout << "\n\t [" << i++ << "] " << *it << "\n";
    cout << "\n";
}


void printKSeq(kseq_t* kseq) {
    //cout << " name: " << kseq->name.s << "\n";
    //cout << " comment: " << kseq->comment.s << "\n";
}

/*
typedef struct {                            \
        kstring_t name, comment, seq, qual;        \
        int last_char;                            \
        kstream_t *f;                            \
    } kseq_t;
*/
