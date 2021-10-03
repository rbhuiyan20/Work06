#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// step 1. 
	int array[10];
	
	// step 2.
	array[0] = 0;
	
	//step 3. Populate the rest of the array with random values.
	int i;
	srand(time(NULL));
	// loop goes from index 1-9 and puts random values.
	for(i=1;i<10;i++){
		array[i] = rand();
	}
	
	//step 4. 
	printf("Part 4: Printing out array...\n");
	// loop goes through array and prints the values of the array
	int j;
	for (j=0;j<10;j++){
		printf("position %d: %d\n",j, array[j]);
	}
	printf("\n");
	
	//step 5 Create a separate array large enough to store 10 ints.
	int array2[10];
	
	//step 6 create pointer variables that will point to each array
	int* arrayp = array;
	int* array2p = array2; 
	
	//step 7 USING ONLY POINTER VARIABLES (that is, do not use the array variables) do the following:
	printf("Part 7! \n");
	//Populate the second array with the values in the first but in reverse order
	int x;
	for (x=0;x<10;x++){
		*(array2p+x) = *(arrayp+9-x);
	}
	//Print out the values in the second array
	int y;
	printf("values in the second array \n");
	for (y=0; y<10 ; y++){
		printf("position %d : %d\n",y,array2[y]);
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
