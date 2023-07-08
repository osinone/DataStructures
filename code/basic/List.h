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



class SqList
{
private:
    /* data */
public:
    SqList(/* args */);
    ~SqList();
};

SqList::SqList(/* args */)
{
}

SqList::~SqList()
{
}

