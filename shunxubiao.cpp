#define _CRT_SECURE_NO_WARNINGS 1
#include "shunxubiao.h"
#include <stdio.h>
#include <stdlib.h>

void StuPrint(stu* ap)
{
	for (int i = 0; i < ap->size; i++)
	{
		printf("%d ", ap->a[i]);
	}
	printf("\n");
}
void StuInit(stu* ap)
{
	ap->a = NULL;
	ap->capacity = ap->size = 0;
}

void StuDestory(stu* ap)//释放空间
{
	free(ap->a);
	ap->a = NULL;
	ap->capacity = ap->size = 0;
}

void SLCheCkcapacity(stu* ap)//检查增容
{
	if (ap->size == ap->capacity)
	{
		int newcopacity = ap->capacity == 0 ? 4 : ap->capacity * 2;
		add* tmp = (add*)realloc(ap->a, newcopacity * sizeof(add));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//异常退出返回-1，这个函数会终止程序，不能用return，return不会终止程序
		}
		ap->a = tmp;
		ap->capacity = newcopacity;
	}
}

void StuPushBack(stu* ap, add x)//在尾端插入数据
{
	SLCheCkcapacity(ap);
	ap->a[ap->size] = x;
	ap->size++;

}
void StuPopBack(stu* ap)//尾端删除数据
{
	//if (ap->size > 0)//防止size为负数从而越界程序崩溃(方法1)
	//{
	///*ap->a[ap->size - 1] = 0;*/    //这句没多大意义
	//ap->size--;
	//}

	assert(ap->size > 0);//如果为真就运行，如果为假就终止程序（方法2）
	ap->size--;

}

void StuPushFront(stu* ap, add x)//头插
{
	SLCheCkcapacity(ap);
	//挪动数据
	int end = ap->size - 1;
	while (end>=0)
	{
		ap->a[end + 1] = ap -> a[end];
		end--;
	}
	ap->a[0] = x;
	ap->size++;
}

void StuPopFront(stu* ap)//头删
{
	assert(ap->size > 0);
	int begin = 1;
		while (begin<ap->size)
		{
			ap->a[begin - 1] = ap->a[begin];
			begin++;
		}
		ap->size--;
}