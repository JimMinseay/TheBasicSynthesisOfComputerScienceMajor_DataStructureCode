// Filename:SequentialList 顺序表.h
// FileType:Function
// Function:Set of Functions
// Author:JimMinseay @CopyRight
// Beginning Time:9/16/2023

#ifndef THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_01_SEQUENTIALLIST_顺序表_H
#define THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_01_SEQUENTIALLIST_顺序表_H

#include "00 Definition.h"
///初始化顺序表
bool SequenceList_Initiate(SequentialList* L)
{
    L->SequentialListLength = 0;
    printf("Function:SequenceListInitial Have Be Done!\n");
    return true;
}


///插入元素
//在顺序表的第i个位置插入新元素element（非数组下标为i的位置，第i个位置对应的数组下标为i-1）
bool SequenceList_InsertElement(SequentialList* L, int i, ElementType element)
{
    int j;//定义局部变量j，用于暂存数组的当前长度

    if(L->SequentialListLength >= SequentialListMaxLength) //检查该顺序表是否空间已满，空间已满会导致插入失败
        return false;

    if(i < 1 || i > SequentialListMaxLength) //检查插入位置是否合法，插入序号小于0或者大于等于表的最大长度长都会导致插入失败
        return false;

    for(j = L->SequentialListLength; j >= i; j--) //从顺序表的最后一位开始，逐位将表中元素向后移动一位，直到来到序号为i+1的位置
    {
        L->data[j] = L->data[j-1];
    }

    L->data[i-1] = element; //将要插入的元素e插入到表的 i-1 的位置
    L->SequentialListLength++; //由于插入了一个元素，表长+1

    printf("Function:SequenceListInsert Have Be Done!\n"); //打印输出函数SequenceList_Insert已经执行完毕，用于检测函数是否成功执行
    printf("\n");
    return true;
}


///删除元素
bool SequenceList_DeleteElement(SequentialList* L, int i)
{
    int j;

    if(L->SequentialListLength == 0) //检查该顺序表是否是空表，空表无法进行删除操作
    {
        return false;
    }

    if(i<1 || i>L->SequentialListLength)
    {
        return false;
    }

//    新建局部变量用于存储被删除的元素值
//    ElementType *element = NULL;
//    *element = L->data[i-1];

    for(j = i;j < L->SequentialListLength; j++) //定义变量j，从序号i开始，一直到表L的表长SequentialListLength，执行将使得每个元素前移一位
        L->data[j-1] = L->data[j];

    L->SequentialListLength--; //由于删除了一个元素，表长-1

    printf("Function:SequenceList_Delete Have Be Done!\n");//打印输出函数SequenceList_Delete已经执行完毕，用于检测函数是否成功执行
    return true;
}


///打印顺序表
bool SequenceList_PrintList(SequentialList L)
{
    int i;

    if (L.SequentialListLength == 0)
    {
        printf("Empty List!\n");
        return false;
    }

    else

        for(i = 1;i <= L.SequentialListLength;i++)
        {
            printf("The No.%d Element is: %d\n", i, L.data[i-1]);
        }

    printf("Function:SequenceList_Print Have Be Done!\n");//打印输出函数SequenceList_Print已经执行完毕，用于检测函数是否成功执行
    return true;
}

///求表长
void SequentialList_GetSequentialListLength(SequentialList L)
{
    printf("The Length of This SequentialList is %d\n",L.SequentialListLength);
}

///按值查找（顺序查找）
ElementType SequentialList_SearchingElementByValue(SequentialList L, ElementType element)
{
    int i;

    for(i = 0; i < L.SequentialListLength; i++) //
    {
        if(L.data[i] == element)
            return i+1;
    }

    printf("Function:SequentialList_SearchingByValue Have Be Done!\n");//打印输出函数SequentialList_SearchingByValue已经执行完毕，用于检测函数是否成功执行
    return -1;
}


///按序号查找
ElementType SequentialList_SearchingElementBySubscript(SequentialList L, int i)
{
    printf("The NO.%d Element In The SequentialList is: %d \n",i, L.data[i-1]); //查找第i个元素，寻找数组下标为为i-1的元素
    return L.data[i-1];
}


#endif //THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_01_SEQUENTIALLIST_顺序表_H
