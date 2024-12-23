#include <stdio.h> 

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,2,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int search;
	printf("Nhap phan tu can tim(1-10): ");
	scanf("%d",&search);
	for (int i=0;i<n;i++){
		if(arr[i] == search){
			printf("Phan tu %d xuat hien o vi tri %d.\n", search, i);
		}
	}
	return 0;
}
        