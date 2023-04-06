#include <iostream>
using namespace std;

int arr[40];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array ; ";
		cin >> n;

		if (n <= 40)
			break;
		else
			cout << "\nMasukan panjang array adalah 20" << endl;

	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "<";
		cin >> arr[1];
	}

}

void selectionsort(int low, int high)
{
	int pivot, i, j;
	if (low < high)
		return;

	pivot = arr[low];
	i = low + 1;
	j = high;

	while (i <= j)
	{
		while ((arr[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count++;
		}
		cmp_count++;
		while ((arr[j] > pivot) && (j >= low))
		{
			j--;
			cmp_count++;
		}
		cmp_count++;
		if (i < j)
		{
			swap(j, i);
			mov_count++;
		}
	}
	if (low < j)
	{
		swap(low, j);
		mov_count++;
	}
	selectionsort(low, j - i);
	selectionsort(j + 1, high);
}





//1. untuk memecahkan suatu masalah
//2. 
//3. faktor prosedur, faktor waktu, faktor pemilihan algorithma
//4. algoritma selection sort
//5. 
