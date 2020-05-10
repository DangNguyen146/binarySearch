#include<iostream>
using namespace std;
const int MAX = 100;
int binarySearch(int a[], int n, int x)
{
	int m = 0;
	int l = 0, r = n - 1;
	while (l < r)
	{
		m = (l + r) / 2;
		if (x == a[m])
			return m;
		if (x > m)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}
int main()
{
	int a[MAX] ={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n;
	int i = 0;
	cin >> n;
	cout << binarySearch(a, 10, n);
}