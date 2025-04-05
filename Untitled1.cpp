#include<stdio.h>
#include<stdlib.h>
int tong( int a[], int n){
	int s=0;
	for(int i=0; i<n; i++){
		s+= a[i];
	}
	return s;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[100];
	printf("Nhap mang:\n");
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}	
	printf("Tong day la: %d",tong(a,n));
	return 0;
}
