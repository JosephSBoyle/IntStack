#define MAX_STACK_SIZE 1000
#include <stddef.h>
#include <stdbool.h>
/* A stack of positive integers with a fixed max length. */
typedef struct Stack {
    unsigned long top; // each stack starts with 0 items.
    size_t items[MAX_STACK_SIZE]; // the index of the top item.
} Stack;

int pop(Stack* stack);
bool push(Stack* stack, unsigned int value);
int peak(const Stack* stack);