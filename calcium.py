BFfileName = input("Enter input filename :\n")
fbf = open(BFfileName, 'r')
src = fbf.read()
fbf.close

CfileName = input("Enter output filename :\n")
fc  = open(CfileName, 'w')
fc.write('#include <stdio.h>\n')
fc.write('#include <stdlib.h>\n')
fc.write('int main()\n')
fc.write('{\n')
fc.write('unsigned char _stack[0xFFF];\n')
fc.write('int _stack_pointer = 0;\n')
fc.write('int i = 0;\n')
fc.write('for(i=0;i<=0xFFF;i++)\n')
fc.write('\t_stack[_stack_pointer] = 0;\n')
    
toWrite = str('')

for c in src:
    if(c=='>'):
        toWrite = str('_stack_pointer++;\n')
    elif(c=='<'):
        toWrite = str('_stack_pointer--;\n')
    elif(c=='+'):
        toWrite = str('_stack[_stack_pointer]++;\n')
    elif(c=='-'):
        toWrite = str('_stack[_stack_pointer]--;\n')
    elif(c=='.'):
        toWrite = str('putchar(_stack[_stack_pointer]);\n')
    elif(c==','):
        toWrite = str('(_stack[_stack_pointer]) = getchar();\n')
    elif(c=='['):
        toWrite = str('while(_stack[_stack_pointer] != 0) {\n')
    elif(c==']'):
        toWrite = str('}\n')
    else:
        toWrite = str('')
    fc.write(toWrite)
    
fc.write('free(_stack);\n')
fc.write('return 0;\n')
fc.write('}\n')

fc.close