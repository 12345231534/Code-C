#include<stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int index ;
	int new_number ;
	for (int i=1;i<n;i++){
		int x = 1;
		index = i;
		new_number = a[i];
		printf ("Buoc %d: ", i-1);
		
		for (int j=0;j<i;j++){
			printf ("%d ", a[j]);
		}
		printf ("\n");
		while (index >0 && a[index-1] > new_number){
			a[index] = a[index-1];
			index--;
		}
		a[index] = new_number;
		
	}
	printf("Buoc %d: ", n-1);
	for (int i=0;i<n;i++){
		printf ("%d ", a[i]);
	}
}
