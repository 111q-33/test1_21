#define _CRT_SECURE_NO_WARNINGS
//int is_prime(int i)
//{
//	int n = 0;
//	for (n = 2; n < sqrt(i); n++)
//	{
//		if (i%n == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
#include<stdio.h>
int binary_search(int *arr, int i, int len)
{
	int left = 0;
	int right = len - 1;
	while (right >= left)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > i)
		{
			right = mid-1;
		}
		else if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	//�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	//���ֲ��ҵ�
	//�ҵ��ˣ������±�
	//�Ҳ��������� -1
	int ret = binary_search(arr, k, sizeof(arr)/sizeof(arr[0]));
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}
