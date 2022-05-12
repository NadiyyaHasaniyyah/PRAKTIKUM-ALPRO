#include <stdio.h>
void printArr(int arr[], int n){
	// kamus lokal
	int i;
	//Algoritma
	for (i=0; i<n; i++){
        printf("%d", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	//kamus lokal
	int temp;
	//Algoritma
	temp= *a;
	*a= *b;
	*b= temp;
}

void selectionsort(int arr[], int n){
	//kamus lokal
	int i, j, min;
	//Algoritma
	for (i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			min=i;
			if (arr[j] < arr[min]){
				min=j;
			}
			swap(&arr[i], &arr[min]);
		}
	}
		
}

int main(){
	//kamus 
	int arr[]={2,4,3,1,5,8,6,9,7};
	int n;
	//Algoritma
	n=sizeof(arr)/ sizeof(arr[0]);
	printArr(arr,n); 
	selectionsort(arr,n);
	printArr(arr,n);
}

