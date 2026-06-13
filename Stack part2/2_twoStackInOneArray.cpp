#include <iostream>

using namespace std;

class Stack{

    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){

        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;

    }

    //function
    void push1(int data){
        if(top2 - top1 == 1){
            //space not available
            cout<<"overflow"<<endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data){
        if(top2 - top1 == 1) cout<<"overflow"<<endl;
        else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop1(){
        if(top1 == -1) cout<<"under flow"<<endl;
        else{
            top1--;
        }
    }
    
    void pop2(){
        if(top2 == size) cout<<"under flow"<<endl;
        else{
            top2--;
        }
    }

};

int main()
{

    

   return 0;
}