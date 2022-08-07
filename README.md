# IntStack

_IntStack_ is a simple implementation of the [stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) data structure implemented in C for the unsigned integer data type. A simple command line interface is provided for convenience.

The program uses fixed a pre-allocated fixed length array to store the items in the stack. As such, there is a maximum number of items that can be held in the stack at once: `src/stack.h::MAX_STACK_SIZE`.

## Quickstart

Run this project in 3 steps!


1. Clone this repo.
2. Build the executable using the `make` command.
3. Start the CLI by executing `main`

```
#############################################################

IntStack:

A simple unsigned integer stack holding up to 3 values.

Popping or peaking when the stack is empty will print -1.

Commands:
   push :  a positive integer
   pop  : -1
   peak : -2
   exit : -3

#############################################################
```

## Example usage:
```
./main
...
> 100
pushed value 100
> -1
popped value: 100
> 99999
pushed value 99999
> -2 
peaked value 99999
> -3 // exit
```

## Notes
The 'peak' function is sometimes considered redundant since it's identical to popping and then pushing the return value (thus leaving the stack unchanged). A better peak implementation is provided that reads the stack without modifying it.