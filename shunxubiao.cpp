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

void StuDestory(stu* ap)//�ͷſռ�
{
	free(ap->a);
	ap->a = NULL;
	ap->capacity = ap->size = 0;
}

void SLCheCkcapacity(stu* ap)//�������
{
	if (ap->size == ap->capacity)
	{
		int newcopacity = ap->capacity == 0 ? 4 : ap->capacity * 2;
		add* tmp = (add*)realloc(ap->a, newcopacity * sizeof(add));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//�쳣�˳�����-1�������������ֹ���򣬲�����return��return������ֹ����
		}
		ap->a = tmp;
		ap->capacity = newcopacity;
	}
}

void StuPushBack(stu* ap, add x)//��β�˲�������
{
	SLCheCkcapacity(ap);
	ap->a[ap->size] = x;
	ap->size++;

}
void StuPopBack(stu* ap)//β��ɾ������
{
	//if (ap->size > 0)//��ֹsizeΪ�����Ӷ�Խ��������(����1)
	//{
	///*ap->a[ap->size - 1] = 0;*/    //���û�������
	//ap->size--;
	//}

	assert(ap->size > 0);//���Ϊ������У����Ϊ�پ���ֹ���򣨷���2��
	ap->size--;

}

void StuPushFront(stu* ap, add x)//ͷ��
{
	SLCheCkcapacity(ap);
	//Ų������
	int end = ap->size - 1;
	while (end>=0)
	{
		ap->a[end + 1] = ap -> a[end];
		end--;
	}
	ap->a[0] = x;
	ap->size++;
}

void StuPopFront(stu* ap)//ͷɾ
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