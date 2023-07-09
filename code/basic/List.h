#include "iostream"
using namespace std;

/* 线性表：n个数据元素的有限序列。（同类型、有限、逻辑有序）
除第一个元素，每个元素仅有一个直接前驱。除最后一个元素，每个元素仅有一个直接后继。
线性表是逻辑结构，物理结构包括：顺序表和链表 */

#define MaxSize 20
// 顺序表
typedef struct
{
    int data[MaxSize];
    int length=0;
} SequentialList;

typedef struct LNode{
    int data;
    struct LNode *next;
} LNode, *LinkHead;


class SqList
{
public:
    static void insert(SequentialList *&L, int i, int e);  // 地址的引用，i插入的位置下标，e插入的元素 
    static void printList(SequentialList *&L);
    static void deleteNode(SequentialList *&L, int i); 
    static int searchByIndex(SequentialList *&L, int i);
    static int searchByData(SequentialList *&L, int e);
};

class LinkList{
    public:
        static void insert();
};