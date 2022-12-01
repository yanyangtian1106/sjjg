#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int add;
//动态顺序表
typedef struct SeqList
{
	add* a;
	add size;//表示数组中存储了多少个数据
	add capacity;//数组实际能存储数据的空间是多大
}stu;

//接口函数
void StuPrint(stu* ap);//打印
void StuInit(stu* ap);//初始化
void StuDestory(stu* ap);//释放空间

void StuPushBack(stu* ap, add x);//在尾端插入数据
void StuPopBack(stu* ap);//尾端删除数据
void StuPushFront(stu* ap, add x);//头插
void StuPopFront(stu* ap);//头删
void SLCheCkcapacity(stu* ap);

void StuListFind(stu* ap, add x)
{

}






//#define N 10
//typedef int add;
////静态顺序表
//typedef struct SeqList
//{
//	int a[N];
//	int size;//表示数组中存储了多少个数据
//}stu;
////接口函数
//void StuInIt(stu* ap);
//void StuPBack(stu* ap, add x);
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);//在尾端插入数据
//void StuPopFront(stu* ap);
