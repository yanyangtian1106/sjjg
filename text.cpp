#define _CRT_SECURE_NO_WARNINGS 1
#include "shunxubiao.h"
#include <stdio.h>
#include <stdlib.h>
void TestSeqList1()
{
	stu s1;
	StuInit(&s1);
	StuPushBack(&s1, 1);//Î²²å
	StuPushBack(&s1, 2);
	StuPushBack(&s1, 3);
	StuPushBack(&s1, 4);
	StuPushBack(&s1, 5);
	StuPrint(&s1);


	StuPopBack(&s1);
	StuPopBack(&s1);//Î²É¾
	StuPrint(&s1);
	StuDestory(&s1);
}
void TestSeqList2()
{
	stu s1;
	StuInit(&s1);
	StuPushBack(&s1, 1);//Î²²å
	StuPushBack(&s1, 2);
	StuPushBack(&s1, 3);
	StuPushBack(&s1, 4);
	StuPushBack(&s1, 5);
	StuPrint(&s1);

	StuPushFront(&s1, 10);
	StuPushFront(&s1, 20);
	StuPushFront(&s1, 30);
	StuPushFront(&s1, 40);
	StuPrint(&s1);

	StuPopFront(&s1);
	StuPopFront(&s1);
	StuPrint(&s1);

	StuDestory(&s1);

}
int main()
{
	/*TestSeqList1();*/
	TestSeqList2();
	return 0;
}