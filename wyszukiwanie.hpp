#ifndef WYSZUKIWANIE_HPP
#define WYSZUKIWANIE_HPP

#include <iostream>
#include <cmath> // dla funkcji sqrt

int wyszukiwanie_liniowe(int t[], int size, int k);
int wyszukiwanie_liniowe_z_wart(int t[], int size, int k);
int wyszukiwanie_binarne(int t[], int size, int k);
int wyszukiwanie_skokowe(int t[], int size, int k);
int wyszukiwanie_interpolacyjne(int t[], int size, int k);

#endif 
