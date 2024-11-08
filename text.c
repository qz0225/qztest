
#include<iostream>
using namespace std;
void quickSort(int a[], int low, int height)
{
	if (low < height)
	{
		int i = low, j = height;
		int base = a[low];
		while (i < j)
		{
			while (i < j && a[j] >= base)
			{
				j--;
			}
				a[i] = a[j];

			while (i < j && a[i] <= base)
			{
				i++;
			}
				a[j] = a[i];
		}
		a[i] = base;
		quickSort(a, low, i - 1);
		quickSort(a, i + 1, height);
	}
}

int main()
{
	int a[9] = { 5,3,1,2,4,6,11,88,5 };
	quickSort(a, 0, 8);
	for (int i = 0; i < 9; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}