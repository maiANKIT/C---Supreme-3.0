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

        //queue full?

        //insert first element

        //circular nature

        //normal flow
        if((front == 0 && rear == size - 1)){
            cout<<"Q is full you cannot insert"<<endl;
        }
        else if(front == -1){
            front = 0, rear = 0;

            arr[rear] = data;
            // rear++;
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

    void pop(){

        //empty check


        //single element

        //circular nature

        //normal flow

        //TODO: if queue is full

        if(front == -1){
            cout<<"Q is empty, cannot pop"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }

    }

};

int main()
{

    

   return 0;
}