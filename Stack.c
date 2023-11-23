#include<stdio.h>
#include<stdlib.h>
// struct Stack
// {
//     int top;
//     unsigned capacity;
//     int *array;
// };


// struct Stack* createStack(unsigned capacity)
// {
// 	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
// 	stack->capacity = capacity;
// 	stack->top = -1;
// 	stack->array = (int*)malloc(stack->capacity * sizeof(int));
// 	return stack;
// }

// int isfull(struct Stack*stack ){
// 	return stack->top== stack->capacity-1;
// }

// int isempty(struct Stack*stack){
// 	return stack->top==-1;
// }

// void push(struct Stack*stack, int item){
// 	if(isfull(stack)){
// 		printf("\nthe stack is full\n");
// 	}
// 	else{
// 		stack->array[++stack->top]=item;
// 		printf("\nitem pushed:%d\n",item);
// 	}
// }

// int pop(struct Stack*stack){
// 	if(isempty(stack)){
// 		printf("\nstack is empty\n");
// 	}
// 	else{
//         int val=stack->array[stack->top];	
// 		stack->array[stack->top--];
// 		printf("\nitem poped:%d\n",val);
// 	}
// }



// int peek(struct Stack*stack){
// 	if(isempty(stack)){
// 		printf("stack is empty");

// 	}
// 	else{
// 		printf("%d",stack->array[stack->top]);
// 	}
// }

// int main(){
//    struct Stack*stack= createStack(4);
//    push(stack,20);
//    push(stack,10);
//    push(stack,30);
//    push(stack,50);
//    pop(stack);
//    pop(stack);
//    push(stack,60);
   
//  return 0;
// }



struct stack{
	int top;
	unsigned size;
	int *arr;
};

struct stack *createstack(unsigned size){
	struct stack * stack =(struct stack*)malloc(sizeof(struct stack*));
	stack -> top=-1;
	stack -> size= size;
	stack -> arr = (int*)malloc(stack->size*sizeof(int*));
    return stack;
}

int isfull(struct stack* stack){
	return stack->top== stack->size-1;
}

int isempty(struct stack* stack){
	return stack->top==-1;
}

void push(struct stack* stack,int value){
	if(isfull(stack))
	    printf("\n stack overflow\n");
	else{
	    stack->arr[++stack->top] = value;
		printf("\n%d :  item pushed\n",value);	
}
}




int pop(struct stack* stack){
	if(isempty(stack)){
		printf("\nstack is empty\n");
	}
	else{
        int val=stack->arr[stack->top];	
		stack->arr[stack->top--];
		printf("\nitem poped:%d\n",val);
	}
}



int main(){
	struct stack * stack = createstack(5);
	push(stack,15);
	push(stack,25);
	push(stack,35);
	push(stack,45);
	push(stack,55);
	push(stack,65);
	pop(stack);
	pop(stack);
	
return 0;	
}