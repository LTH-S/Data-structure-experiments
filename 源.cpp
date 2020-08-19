#include <stdio.h>

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Display(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void insert_sort(int *a, int n)
{
	int i, j;
	int cur;
	for (i = 1; i < n; i++)
	{
		cur = a[i];//����������
		for (j = i - 1; j >= 0 && a[j]>cur; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = cur;
	}
}

int main()
{
	int a[10] = { 7,2,6,4,9,0,8,5,1,3 };
	printf("ԭ����Ϊ��\n");
	Display(a, 10);
	printf("\n");
	printf("���������\n");
	insert_sort(a, 10);
	Display(a, 10);
	return 0;
}