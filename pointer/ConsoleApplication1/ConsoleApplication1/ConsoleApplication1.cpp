// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

/*int global = 300;*/
void swap(int*, int*);
int main()
{
	/*static int a = 20;
	int b = 30;
	int * p = (int *)malloc(sizeof(int));
	*p = 150;
	printf("전역 변수 global=%3d &global=%d\n", global, &global);
	printf("정적 변수 a=%3d &a=%d\n", a, &a);
	printf("지역 변수 b=%3d &b=%d\n", b, &b);
	printf("포인터 *p=%3d p=%d\n", *p, p);
	printf("포인터 *p=%3d &p=%d\n", *p, &p);
	*/
	/*int a = 10;
	char b = 'A';
	double c = 1234.56f;
	int *ptr1 = &a;
	char *ptr2 = &b;
	double *ptr3 = &c;
	
	printf("int 형 a의 값 %d, 주소 %d , 크기 %d\n", a, &a, sizeof(a));
	printf("char 형 b의 값 %c, 주소 %d , 크기 %d\n", b, &b, sizeof(b));
	printf("double 형 c의 값 %f, 주소 %d , 크기 %d\n", c, &c, sizeof(c));
	printf("int 형 포인터 ptr1의 값 %d, 주소 %d , 크기 %d\n", ptr1, &ptr1, sizeof(ptr1));
	printf("char 형 포인터 ptr2의 값 %d, 주소 %d , 크기 %d\n", ptr2, &ptr2, sizeof(ptr2));
	printf("double 형 포인터 ptr3의 값 %d, 주소 %d , 크기 %d\n", ptr3, &ptr3, sizeof(ptr3));
	*/
	/*int nData = 10;
	int *pnData = &nData;
	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);
	*pnData += 20;
	printf("%d\n", nData);
	*/
	int a = 3;
	int b = 10;
	swap(&a, &b);
	printf("3. 함수 호출 후-> a : %d, b : %d\n", a, b);
    return 0;
}
void swap(int *a, int* b)
{
	int temp = 0;
	printf("1. 변경 전-> a : %d, b : %d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("2. 변경 후-> a : %d, b : %d\n", *a, *b);
}
