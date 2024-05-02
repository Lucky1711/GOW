#include <stdio.h> 


int function(int a[], int a_size);


int main() 
{ 
    int a[] = { 5, 4, 5, 3, 4, 2, 2, 6, 6 }; 
    
	int n = sizeof(a) / sizeof(a[0]); 
    printf("%d",function(a, n)); 
    
	return 0; 
} 


int function(int a[], int a_size) 
{ 
    int i;
    
	int r = a[0]; 
    for (i = 1; i < a_size; i++){
        r = r ^ a[i]; 
    }
    
	return r; 
} 

