#include <iostream>
#include "sorting.h"

using namespace std;

int main(int argc, char* argv[]){
	
	int A[] = {6, 4, 1, 4, 2, 3, 7, 4, 10, 0};
	int size = sizeof(A)/sizeof(A[0]);
	
	print_array(A, size);
	count_sort(A, size);	
	print_array(A, size);
	
	//char arr[] = "geeksforgeeks";//"applepp"; 
  
    //count_sort(arr); 
  
    //printf("Sorted character array is %sn", arr); 

	return 0;
}