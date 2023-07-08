#include "List.h"


void insert(SequentialList *&L, int i, int e){
    if (i<0 || i>L->length)
    {
        cout<<"插入位置不合法"<<endl;
    }else{
        L->data[i] = e;
        L->length++;
    }
}

int main(int argc, char const *argv[])
{
    SequentialList *sqList = new SequentialList();
    insert(sqList, 0, 6);
    // cout<<sqList->data[0]<<sqList->length<<endl;
    insert(sqList, 2, 2);
    insert(sqList, 1, 2);
    return 0;
}
