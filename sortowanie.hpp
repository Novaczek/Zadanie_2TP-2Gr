#ifndef SORTOWANIE_HPP
#define SORTOWANIE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

void wypelnij_tablice(int t[], int size);
void wydrukuj_tablice(int t[], int size);
void BubbleSort(int n, int *X);
void MergeSort(int t[], int left, int right);
void ShakerSort(int t[], int n);
void QuickSort(int t[], int left, int right);
void InsertionSort(int n, int *tab);

#endif