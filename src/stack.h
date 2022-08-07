#include <stddef.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 1000

/* A stack of positive integers with a fixed max length. */
typedef struct Stack {
    size_t top; // each stack starts with 0 items.
    unsigned int items[MAX_STACK_SIZE]; // the index of the top item.
} Stack;

int pop(Stack* stack);
bool push(Stack* stack, unsigned int value);
int peak(const Stack* stack);