#include<stdio.h>
#include<math.h>

int main(){
	
	int arr[4] = {10, 40, 20, 8};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	// calling the function
	kubuguza(arr, size);
	int i;
	for(i=0;i<size;i++){
		printf("%d, ", arr[i]);
	}
	return 0;
}


void kubuguza(int arr[], int size) {
	int j,i;
	for(i =1;i<=size;i++){
		int key = arr[i];
		j =i-1;
		
		while(j>=0 && arr[j] > key){
			// swapping the numbers
			arr[j+1] = arr[j];
			j=j-1;
			}
			
			arr[j+1] = key;
	}
}
