#include<stdio.h>

int main(){
	int arr[]={1,3,5,4,8,7,6,9,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for (int i=0;i<n-1;i++){
		int min_index=i;
		for(int j= i+1;j<n;j++){
			if (arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		int temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
	printf("Sorted array:\n");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}