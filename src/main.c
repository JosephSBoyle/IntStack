#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

/* An integer stack that can be pushed to, popped from and peaked. */
int main(){
    printf(
        "#############################################################\n\n"
        "IntStack:\n\n"
        "A simple unsigned integer stack holding up to %d values.\n\n"
        "Popping or peaking when the stack is empty will print -1.\n\n"
        "Commands:\n"
        "   push :  a positive integer\n"
        "   pop  : -1\n"
        "   peak : -2\n"
        "   exit : -3\n\n"
        "#############################################################\n",
    MAX_STACK_SIZE
    );

    Stack stack = {};
    int value;

    while (true){
        printf("> ");
        scanf("%d", &value);
        if (value == -3) {
            // exit
            exit(0);
        }
        if (value == -1) {
            // pop
            printf("popped value: %d\n", pop(&stack));
        } else if (value == -2) {
            // peak
            printf("peaked value: %d\n", peak(&stack)); 
        } else {
            // push
            if (push(&stack, (unsigned int)value)){
                printf("pushed value %d\n", value);
            } else {
                printf("pushing %d failed - stack size limit reached.\n", value);
            }
        }
    }
}