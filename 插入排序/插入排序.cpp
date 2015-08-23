#include <iostream>
using namespace std;

void  insertion_sort(int* a, int length)
{
	for (int i = 1; i < length; i++)
	{
		int temp = a[i];
		int j = i - 1;
		for (;j>=0,a[j]>temp;j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}
}

int main()
{
	//插入排序，如果忘了，就想想扑克牌一张一张插入你左手的情景
	int a[] = {
		1, 2, 6, 5, 2, 5, 1, 2, 6, 56, 56, 5, 65, 6, 5, 612, 12, 1, 2 - 23, 858656, 12132, 0, -78, -46471
	};
	int length = sizeof(a) / sizeof(int);
	cout << "排序前的数组：" << endl;
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	insertion_sort(a, length);
	cout << "排序后的数组：" << endl;
	for (int i = 0; i < length; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");

}