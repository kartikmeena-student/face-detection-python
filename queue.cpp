#include <iostream>

using namespace std;
// I am implementing the queue by using arrays and after that by linked list 
class queue{
    int *arr ;
    
    int front;
    int size ;

    int rear ;
    public:

    queue(int size ){
         arr = new int[size]; // Dynamic allocation / heap memory
         this ->size = size ;
         
        
         
         front = 0;
         rear = 0;

    }
    void pushElement(int data ){
        if(rear == size ){
            cout<<"Queue is overflow"<<endl;
        }
        else{
            arr[rear] = data ;
            rear++;
        }
        

    }
    void popFront(){
        if(front == rear){
            cout<<"queue is empty "<<endl;
        }
        else{
            arr[front] = -1;
            front ++;
            if(front == rear){
                front = rear = 0 ;


            }
        }

    }
    bool isEmpty(){
        if(front == rear ){
            return 1;
        }
        else{
            return 0;
        }
    }
    int getFrontElement(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }

    }
    int getRearElement(){
        if(front == rear ){
            return -1;
        }
        else{
            return arr[rear-1];
        }

    }
    void display(){
        if(front == rear){
            cout<<"Queue is empty "<<endl;
        }
        else{
            for(int i = front ; i < rear ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    queue q1(100);
    q1.pushElement(23);
    q1.pushElement(3);
    q1.pushElement(24);
    q1.pushElement(89);
    q1.popFront();
    q1.display();
   cout<< q1.getFrontElement();
   


             

return 0;
}