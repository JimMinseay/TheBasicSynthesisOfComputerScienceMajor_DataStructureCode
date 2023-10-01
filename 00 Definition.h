// Filename:Definition.h
// FileType:Definition
// Function:Set of Definitions
// Author:JimMinseay @CopyRight
// Beginning Time:9/15/2023

#ifndef THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_00_DEFINITION_H
#define THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_00_DEFINITION_H

///include 导入
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///define 宏定义
#define ElementType int //将所有抽象元素类型替换为int
#define SequentialListMaxLength 100 //顺序表的最大长度
#define SequentialStackMaxLength 100 //顺序栈的最大长度
#define MaxLength 255 //串的最大长度

//表的结构体定义
///顺序表
typedef struct SequentialList
{
    ElementType data[SequentialListMaxLength];//用于存储顺序表元素的数组
    int SequentialListLength; //顺序表当前长度
}SequentialList;

///单链表（结点）
typedef struct SinglelinkedListNode
{
    ElementType data;//单链表结点的数据域
    struct SinglelinkedListNode* next;//单链表结点的指针域
}SinglelinkedListNode, SinglelinkedList;

///双链表（结点）
typedef struct DoubleLinkedListNode
{
    ElementType data;//双链表结点的数据域
    struct DoubleLinkedListNode *prior, *next;//双链表结点的前指针域和后指针域
}DoubleLinkedListNode, DoubleLinkedList;

///静态链表（结点）
typedef struct StaticLinkListNode
{
    ElementType data;//静态链表的数据域
    int next;//指向下一个静态链表结点的标号
}StaticLinkListNode[SequentialListMaxLength];


//栈的结构体定义
///栈的顺序存储结构
typedef struct SequentialStack
{
    ElementType data[SequentialStackMaxLength];//用于存储顺序栈元素的数组
    int top;//栈顶指针的标号
}SequentialStack;


///栈的链式存储结构（结点）
typedef struct LinkStackNode
{
    ElementType data;
    struct LinkStackNode* next;
}LinkStackNode, LinkStack;

//队列的结构体定义
///队列的链式存储结构
typedef struct LinkQueueNode //组成链式队列的结点
{
    ElementType data;
    struct LinkQueueNode* next;
}LinkQueueNode;
typedef struct //链式队列
{
    LinkQueueNode* front;
    LinkQueueNode* rear;
}LinkQueue;

//数组的结构体定义



//串的结构体定义
///串的定长顺序存储表示
typedef struct
{
    char character[MaxLength]; //每个分量存储串的一个字符
    int length; //串的实际长度
}SequentialString;


///串的堆分配存储表示
typedef struct
{
    char* character; //按照串长分配存储区，指针character指向串的基地址
    int length; //串的实际长度
}HeapString;


///串的块链存储表示

///二叉树的顺序存储结构


//树的结构体定义
///二叉树的链式存储结构
typedef struct BinaryTreeNode
{
    ElementType data;
    struct BinaryTreeNode *LeftChild, *RightChild;
}BinaryTreeNode, BinaryTree;


//图的结构体定义




#endif //THEBASICSYNTHESISOFCOMPUTERSCIENCEMAJOR_DATASTRUCTURECODE_00_DEFINITION_H
