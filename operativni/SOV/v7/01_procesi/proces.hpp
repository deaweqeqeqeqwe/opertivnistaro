#ifndef PROCES_HPP_INCLUDED
#define PROCES_HPP_INCLUDED

#include <vector>

using namespace std;

// Tip instrukcije:
enum INS_TYPE {STANDARD = 0, UI};

struct Proces {
	vector<INS_TYPE> instrukcije;
	int id;
	Proces(vector<INS_TYPE> ins, int i): instrukcije(ins), id(i) {}
};

#endif // PROCES_HPP_INCLUDED
