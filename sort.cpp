#include <iostream>

using namespace std;
void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void buble_sort(int a[], int n){
	
	for (int i=0;i<n-1;i++){
		for (int j=n-1;j>i;j--){
			if (a[j] < a[j-1]){
				int tmp =a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}
}

void insertion_sort(int a[], int n){
	int pos;
	int x;
	for (int i=1;i<n;i++){
		x = a[i];
		pos = i;
		while (pos>0 && x < a[pos-1]){
			a[pos] = a[pos-1];
			pos--;	
		}
		a[pos] = x;
	}
}
void selection_sort(int a[], int n){
	int min;
	for (int i=0;i<n-1;i++){
		min =i;
		for (int j=i+1;j<n;j++){
			if (a[min] > a[j]){
				min = j;
			}
		}
		if (min != i){
			swap(a[min], a[i]);
		}
	}
}
int main(){
	int a[5] = {2,4,3,5,1};
	selection_sort(a,5);
	for (int i=0;i<5;i++){
		cout << a[i]<<" ";
	}
}
