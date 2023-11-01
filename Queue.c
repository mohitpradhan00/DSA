// #include<stdio.h>
// #include<stdlib.h>

// struct Queue{
//     int size;
//     int front;
//     int rear;
//     int *arr;
// };

// void enqueue(struct Queue q,int value){
//     if(q.rear==q.size-1)
//         printf("\nqueue overflow\n");
//     else{
//         q.rear++;
//         q.arr[q.rear]=value;
//            printf("\nenqued element: %d\n",value)
//     }
// }
// // void enqueue(struct queue *q, int val){
// //     if(q->rear==q->size-1){
// //         printf("\nThis Queue is full\n");
// //     }
// //     else{
// //         q->r++;
// //         q->arr[q->r] = val;
// //         printf("\nEnqued element: %d\n", val);
// //     }
// // }


// int dequeue(struct Queue q){
//    int a=-1;   
//     if(q.rear==q.front){
//         printf("\nqueue is empty\n");
//     }
//     else{
//         printf("\n Element dequeue:%d",q.arr[q.front])
//         q.front++;
//         a=q.arr[q.front];
    
//     }
//     return a;
// }
 

    

  

// int main(){
//     struct Queue q;
//     q.size=10;
//     q.front = q.rear = 0;
//     q.arr=(int*)malloc(q.size*sizeof(int));
//     enqueue(&q,50);
//     enqueue(&q,10);
//     enqueue(&q,60);
//     // enqueue(q,40);
//     // enqueue(q,70);
//     // enqueue(q,20);
//     // enqueue(q,30);
//     // enqueue(q,80);
//     // enqueue(q,90);
//     // enqueue(q,100);
//     // enqueue(q,5);
//     dequeue(&q);
// return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
 
// struct queue
// {
//     int size;
//     int f;
//     int r;
//     int* arr;
// };
 
 
// int isEmpty(struct queue *q){
//     if(q->r==q->f){
//         return 1;
//     }
//     return 0;
// }
 
// int isFull(struct queue *q){
//     if(q->r==q->size-1){
//         return 1;
//     }
//     return 0;
// }
 
// void enqueue(struct queue *q, int val){
//     if(isFull(q)){
//         printf("This Queue is full\n");
//     }
//     else{
//         q->r++;
//         q->arr[q->r] = val;
//         printf("Enqued element: %d\n", val);
//     }
// }
 
// int dequeue(struct queue *q){
//     int a = -1;
//     if(isEmpty(q)){
//         printf("This Queue is empty\n");
//     }
//     else{
//         q->f++;
//         a = q->arr[q->f]; 
//     }
//     return a;
// }
 
// int main(){
//     struct queue q;
//     q.size = 4;
//     q.f = q.r = 0;
//     q.arr = (int*) malloc(q.size*sizeof(int));
    
//     // Enqueue few elements
//     enqueue(&q, 12);
//     enqueue(&q, 15);
//     enqueue(&q, 1); 
//     printf("Dequeuing element %d\n", dequeue(&q));
//     printf("Dequeuing element %d\n", dequeue(&q));
//     printf("Dequeuing element %d\n", dequeue(&q)); 
//     enqueue(&q, 45);
//     // enqueue(&q, 45);
//     // enqueue(&q, 45);
 
//     // if(isEmpty(&q)){
//     //     printf("Queue is empty\n");
//     // }
//     // if(isFull(&q)){
//     //     printf("Queue is full\n");
//     // }
 
//     return 0;
// }

#include <stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();
int items[SIZE], front = -1, rear = -1;

void main() {
  //enQueue 5 elements
  enQueue(1);   enQueue(2);   enQueue(3);   enQueue(4);   enQueue(5);
  display();

  //deQueue removes element entered first i.e. 1
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  //Now we have just 4 elements
  display();     
}
  
void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  } }

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  if (front > rear)
      front = rear = -1;
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    
  } }
// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}