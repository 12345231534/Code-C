#include <stdio.h>
void selectionsoft(int a[], int n){
	for (int i=0;i<n-1;i++){
		int min_idx=i;
		for (int j=i+1;j<n;j++){
			if (a[j] < a[min_idx]){
				min_idx = j;// tim phan tu nho nhat
			}
		}
		// doi cho phan tu nho nhat va phan tu dau tien
		int tmp = a[i];
		a[i] = a[min_idx];
		a[min_idx] = tmp;
	}
}
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int chan[n], le[n];
	int c=0,l=0;
	for (int i=0;i<n;i++){
		if (a[i] %2 ==0) {
			chan[c++] = a[i];
		}
		else le[l++] = a[i];
	}
	selectionsoft (chan, c);
	selectionsoft (le, l);
	for (int i=0;i<c;i++){
		printf ("%d ", chan[i]);
	}
	for (int i=0;i<l;i++){
		printf ("%d ", le[i]);
	}
}
