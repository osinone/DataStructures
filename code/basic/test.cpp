#include "List.h"

int main(int argc, char const *argv[])
{
    SequentialList *sqList = new SequentialList();
    SqList().insert(sqList, 0, 1);
    SqList().insert(sqList, 1, 2);
    SqList().insert(sqList, 2, 3);
    SqList().insert(sqList, 3, 4);
    SqList().printList(sqList);
    SqList().deleteNode(sqList, 1);
    SqList().printList(sqList);
    SqList().insert(sqList, 1, 2);
    SqList().printList(sqList);
    SqList().searchByData(sqList, 5);
    return 0;
}
