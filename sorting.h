#ifndef SORTING_H
#define SORTING_H

void bubble_sort (int* , int);

void heapfy (int* , int , int);
// main function to do heap sort 
void heap_sort (int* ,int);

int partition (int* , int , int );
/* The main function that implements Quick_sort 
arr[] --> Array to be sorted, low  --> Starting index, high  --> Ending index */
void quick_sort(int* , int , int );

void merge(int* ,int ,int ,int );
/* l is for left index and r is right index of the sub-array of arr to be sorted */
void merge_sort(int* ,int ,int );

void insertion_sort(int* ,int );

void selection_sort(int* ,int );

int shell_sort(int* ,int );

void count_sort(int* , int);//problem

/* Print an array */
void print_array (int* , int);

void swap(int *, int* );
#endif