#ifndef ISPIS_H
#define ISPIS_H

#include <list>

using namespace std;

// Funkcija koja će biti iskorišćena kao funkcija niti - ispisuje redni broj na konzolu
//
// rbr - Redni broj koji funkcija ispisuje na ekran
//
void ispisi(int rbr)
{
    // Moze doci do stetnog preplitanja tokom ispisa
	cout << "Nit broj " << rbr << endl;
}

#endif // ISPIS_H
