#include "List.h"

void SqList::insert(SequentialList *&L, int i, int e){
    if(L->length == 20) return;
    if (i<0 || i>L->length)
    {
        cout<<"����λ�ò��Ϸ�"<<endl;
    }else{
        if(i == L->length){
            L->data[i] = e;
        }else{
            for(int j=L->length-1; j>=i; j--){
                L->data[j+1] = L->data[j];
            }
            L->data[i] = e;
        }
        
        L->length++;
        cout<<"����ɹ�"<<endl;
    }
}

void SqList::printList(SequentialList *&L){
    if(L->length == 0){
        cout<<"���Ա�Ϊ��"<<endl;
    }else{
        for(int i=0; i<L->length; i++){
            cout<<L->data[i]<<"\t";
        }
        cout<<endl;
    }
}

void SqList::deleteNode(SequentialList *&L, int i){
    if(L->length == 0) return;
    if(i<0 || i>L->length){
        cout<<"ɾ��λ����Ч"<<endl;
        return;
    }
    if(i == L->length-1){
        L->data[i] = 0;
    }else{
        for(int j=i; j<L->length; j++){
            L->data[j] = L->data[j+1];
        }
    }
    L->length--;
    cout<<"ɾ���ɹ�"<<endl;
}

int SqList::searchByIndex(SequentialList *&L, int i){
    if(i<0 || i>L->length){
        cout<<"�±�Խ��"<<endl;
        return -1;
    }
    int e = L->data[i];
    return e;
}

int SqList::searchByData(SequentialList *&L, int e){
    // ˳�����
    int i=0;
    for(i; i<L->length; i++){
        if(L->data[i] == e){
            cout<<"���ҳɹ�"<<"index: "<<i<<endl;
            break;
        }
    }
    if(i<L->length){
        return i;
    }else{
        cout<<"����ʧ��"<<endl;
        return -1;
    }
}