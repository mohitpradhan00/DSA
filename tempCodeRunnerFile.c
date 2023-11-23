#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

void enqueue(struct Queue q,int value){
    if(q.rear==q.size-1)
        printf("\nqueue overflow\n");
    else{
        q.rear++;
        q.arr[q.rear]=value;
           printf("\nenqued element: %d\n",value)
    }
}
// void enqueue(struct queue *q, int val){
//     if(q->rear==q->size-1){
//         printf("\nThis Queue is full\n");
//     }
//     else{
//         q->r++;
//         q->arr[q->r] = val;
//         printf("\nEnqued element: %d\n", val);
//     }
// }


int dequeue(struct Queue q){
   int a=-1;   
    if(q.rear==q.front){
        printf("\nqueue is empty\n");
    }
    else{
        printf("\n Element dequeue:%d",q.arr[q.front])
        q.front++;
        a=q.arr[q.front];
    
    }
    return a;
}
 

    

  

int main(){
    struct Queue q;
    q.size=10;
    q.front = q.rear = 0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,50);
    enqueue(&q,10);
    enqueue(&q,60);
    // enqueue(q,40);
    // enqueue(q,70);
    // enqueue(q,20);
    // enqueue(q,30);
    // enqueue(q,80);
    // enqueue(q,90);
    // enqueue(q,100);
    // enqueue(q,5);
    dequeue(&q);
return 0;
}
