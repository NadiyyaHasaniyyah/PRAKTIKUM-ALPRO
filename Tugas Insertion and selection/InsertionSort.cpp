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

void insertionsort(int arr[], int n){
	//kamus lokal
	int i, j, key;
	//Algoritma
	for (i=1; i<n; i++){
		key=arr[i];
		j=i-1;
		while (j>=0 && arr[j]> key){
		arr[j+1]= arr[j];
		j--;
		}
		arr[j+1]=key;
	}

}

int main(){
	//kamus
	int arr[]={8,9,6,2,1,4,3,5,7};
	int n;
	//Algoritma
	n=sizeof(arr)/ sizeof(arr[0]);
	printArr(arr,n);
	insertionsort(arr,n);
	printArr(arr,n);
}

