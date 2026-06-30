#include <bits/stdc++.h>

using namespace std;

class CirQueue{

    public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size){

        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;

    }

    void push(int data){

        //queue full

        //single element case -> first element

        //circular nature

        //normal flow

        if((front == 0 && rear == size - 1)){
            cout<<"Q is full cannot insert"<<endl;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }

    }

};

int main()
{

    

   return 0;
}