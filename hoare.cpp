#include <iostream>
using namespace std;

int Partition(int a[], int l, int h)
{
	int pivot = a[l];
	int i = l - 1;
	int j = h + 1;
//this is the hoare aprttion that we are using here okk
//And also we can use the Lumuto parttiion as well to do the Quick Sort okk.
	while (true)
	{
		do
		{
			i++;
		} while (a[i] < pivot);
		do
		{
			j--;
		} while (a[i] > pivot);

		if (i >= j)
			return j;
		swap(a[i], a[j]);
	}
}

int main()
{
	int a[] = {3, 4, 2, 1, 6, 7, 5, 0};
	int n = sizeof(a) / sizeof(a[0]);
	int PI = Partition(a, 0, n - 1);
	cout << PI << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
