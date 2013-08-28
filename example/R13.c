#include <stdio.h>
#include <stdlib.h>
int main()
{
unsigned char _stack[0xFFF];
int _stack_pointer = 0;
int i = 0;
for(i=0;i<=0xFFF;i++)
	_stack[_stack_pointer] = 0;
_stack[_stack_pointer]--;
(_stack[_stack_pointer]) = getchar();
_stack[_stack_pointer]++;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack_pointer++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack_pointer--;
_stack[_stack_pointer]--;
}
_stack_pointer--;
_stack[_stack_pointer]++;
_stack_pointer--;
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack_pointer++;
_stack_pointer++;
}
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer--;
_stack[_stack_pointer]--;
}
_stack_pointer++;
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer++;
}
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack[_stack_pointer]--;
}
}
_stack_pointer++;
_stack_pointer++;
_stack_pointer++;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
}
_stack[_stack_pointer]++;
_stack_pointer++;
_stack[_stack_pointer]--;
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer--;
_stack[_stack_pointer]--;
_stack_pointer++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
}
}
}
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack[_stack_pointer]++;
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack_pointer++;
}
_stack_pointer++;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]++;
while(_stack[_stack_pointer] != 0) {
_stack_pointer--;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack[_stack_pointer]--;
}
_stack_pointer++;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack_pointer++;
}
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack_pointer--;
_stack[_stack_pointer]--;
}
_stack_pointer++;
_stack_pointer++;
while(_stack[_stack_pointer] != 0) {
_stack_pointer--;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack[_stack_pointer]--;
}
_stack_pointer++;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
_stack_pointer--;
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
}
_stack_pointer++;
_stack_pointer++;
}
_stack_pointer--;
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer--;
_stack_pointer--;
_stack[_stack_pointer]--;
_stack_pointer++;
_stack_pointer++;
_stack[_stack_pointer]--;
}
_stack_pointer++;
_stack_pointer++;
}
_stack_pointer--;
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack_pointer--;
_stack_pointer--;
_stack[_stack_pointer]++;
_stack_pointer++;
_stack_pointer++;
_stack[_stack_pointer]--;
}
}
_stack_pointer--;
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
}
_stack_pointer--;
putchar(_stack[_stack_pointer]);
while(_stack[_stack_pointer] != 0) {
_stack[_stack_pointer]--;
}
_stack_pointer--;
_stack[_stack_pointer]--;
(_stack[_stack_pointer]) = getchar();
_stack[_stack_pointer]++;
}
free(_stack);
return 0;
}
