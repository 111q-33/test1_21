#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int b = -1;
//	float sum = 0;
//	float n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n = 1.0 / i;
//		b = -1 * b;
//		sum += n*b;
//
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//		else
//			continue;
//	}
//	max = arr[0];
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			/*int n = 0;
//			n = i*j;*/
//			printf("%d*%d=%-2d ", i, j, /*n*/i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("#####################\n");
	printf("####猜数字小游戏#####\n");
	printf("####play:1 exit;0####\n");
	printf("#####################\n");
}
void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;//接受猜的数字
	// 拿时间戳来设置随机数的生成起点
	//time_t time(time_t *timer)
	//time_t
	ret = rand() % 100 + 1;//生成1到100的随机数
	//2.猜数字
	while (1)
	{
		printf("请输入数字\n");
		scanf_s("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("666，猜对了\n");
			break;
		}
	}
}
int main()

	{
	int n = 0;
	srand((unsigned)time(NULL));
	do
	{
		
		menu();
			printf("请选择\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("输入错误\n");
			break;
		}
	


	} while (n);

		return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//		printf("你的电脑将在一分钟内关机,不关机请输入：我是猪\n请输入:");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	
//	
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "first blood";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//
//}
//#include<stdio.h>
//void swap(int* x, int*y)
//{
//	int tmp = 0;
//	tmp =*x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int n = 0;
//	for (n = 2; n <x; n++)
//	{
//		if (x%n == 0)
//			return 0;
//	}
//		return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (1==is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int binary_search(int arr[], int x, int y)
//{
//	int left = 0;
//	int right = y - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7; 
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, n);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了：%d\n", ret);
//	return 0;
//
//}
//#include<stdio.h>
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int n = my_strlen(arr);
//	printf("%d\n", n);
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//}
//int Fbn(int n)
//{
//	int ret = 1;
//	int a = 1;
//	int b = 1;
//	while (n > 2)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fbn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };//一维数组连续存放
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//}
