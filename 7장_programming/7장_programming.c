/*
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int days[SIZE];
	
	days[0] = 31;
	days[1] = 28;
	days[2] = 31;
	days[3] = 30;
	days[4] = 31;

	for (i = 0; i < SIZE; i++)
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);

	return 0;
}

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
	int j, k;

	printf("입력할 정수의 개수: ");
	scanf_s("%d", &k);
	int a[100];



	for (j = 0; j < k; j++)
	{
		printf("%d번째 요소를 입력하세요: ", j);
		scanf_s("%d", &a[j]);
	}
			

	printf("%d %d %d", a[2], a[1], a[0]);

	return 0;
}


#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int a[SIZE];
	int b;

	for (b = 0; b < SIZE; b++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &a[b]);
	}

	int max, min;
	max = min = a[0];

	for (b = 0; b < 5; b++)
	{
		if (a[b] > max)
			max = a[b];
		if (a[b] < min)
			min = a[b];
	}

	printf("최대값 = %d, 최솟값 = %d", max, min);

	return 0;
}


#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int score[3][3] = { {30,10,11},
		{40,90,32},
		{70,65,56} };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;

		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		printf("평균 점수: %f\n", sum / 3.0);
	}

	return 0;
}
*/

#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int data[100] = { 0 };
	int i, k;

	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		data[rand() % 10]++;
	}

	int max = data[0];
	int index = 0;

	for (i = 1; i < 100; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
			index = i;
		}
	}

	printf("가장 많이 생성된 수 = %d\n", index);
	
	return 0;
}