#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int add;
//��̬˳���
typedef struct SeqList
{
	add* a;
	add size;//��ʾ�����д洢�˶��ٸ�����
	add capacity;//����ʵ���ܴ洢���ݵĿռ��Ƕ��
}stu;

//�ӿں���
void StuPrint(stu* ap);//��ӡ
void StuInit(stu* ap);//��ʼ��
void StuDestory(stu* ap);//�ͷſռ�

void StuPushBack(stu* ap, add x);//��β�˲�������
void StuPopBack(stu* ap);//β��ɾ������
void StuPushFront(stu* ap, add x);//ͷ��
void StuPopFront(stu* ap);//ͷɾ
void SLCheCkcapacity(stu* ap);

void StuListFind(stu* ap, add x)
{

}






//#define N 10
//typedef int add;
////��̬˳���
//typedef struct SeqList
//{
//	int a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}stu;
////�ӿں���
//void StuInIt(stu* ap);
//void StuPBack(stu* ap, add x);
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);//��β�˲�������
//void StuPopFront(stu* ap);
