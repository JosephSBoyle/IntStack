#include "stack.h"
#include <stdio.h>

/* Pop an int from the stack */
int pop(Stack *stack){
    if (stack->top == 0) {
        return -1;
    } else {
        const int item = stack->items[stack->top];
        stack->top--;
        return item;
    }
}

/** Push an int to the stack
 * @return Whether or not the operation succeeded
 */
bool push(Stack *stack, unsigned int value) {
    if (MAX_STACK_SIZE == stack->top){
        return false;
    }
    stack->items[stack->top + 1] = value;
    stack->top++;
    return true;
}

/** View the top item in the stack 
 * @return the value of the top item in the stack.
 * If there are no items, returns -1 
 */
int peak(const Stack *stack){
    if (stack->top == 0){
        return -1;
    } else {
        return stack->items[stack->top];
    }
}

// void main(){
//     Stack stack = {};
//     for (int i=0; i<100; i++){
//         push(&stack, i);
//     }
//     for (int i=0; i<101; i++){
//         printf("%d\n", pop(&stack));

//     }
//     printf("%lu\n", stack.top);
// };