#include<iostream>
#include<Queue>
using namespace std ;

// Implementation of Queue
class Queue{
    int *arr;
    int size ;
    int front ;
    int rear ;
    

    public:
    Queue(int s){
        size = 100;
        arr = new int[size];
        front = 0 ;
        rear = 0 ;

    }
    void Push(int data){
      if(rear == size ){
        cout<<"Queue is full "<<endl;

      }
      else{
        arr[rear] = data;
        rear ++;
      }

    }
    void Pop(){
        // Check wether the queue is empty is not 
        if(front == rear ){
            cout<<"Queue is empty "<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear ){
                front = 0 ;
                rear = 0 ;
            }
        }

    }
    bool isEmpty(){
        if(front == rear ){
            return 1 ;

        }
        else{
            return 0 ;
        }

    }
    int frontElement(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    void Display(){
        if(front == rear){
            cout<<"queue is empty "<<endl;
        }
        else{
            for(int i = front; i< rear ; i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    int getRear(){
        if(front == rear ){
              return - 1; 
         }
        else{
           return arr[rear];
        }

    }

};
int main(){

    Queue q(10);
    q.Push(2);
    q.Push(22);
    q.Push(4);
    q.Push(5);
    q.Push(9);
    q.Push(34);
    // Now i want to print the elements present in queue 
    // cout<<q.frontElement();
    q.Display();
    
}