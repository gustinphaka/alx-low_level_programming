global  main
extern  printf
main:
mov  edi, format
xor  eax, eax
call  printf
move  eax, 0
ret
format: db 'hello, holberton\n',0
