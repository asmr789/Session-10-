#include<stdio.h>
#define MAX_SIZE 100

int main(){
	int arr[MAX_SIZE];
	int n;
	printf("Nhap kich thuoc array: ");
	scanf("%d",&n);
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++){
		for(int j= 0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}