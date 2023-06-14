gcc -Og  -E  test1.c -o test1.i
gcc -Og  -S  test1.i -o test1.s
gcc  -Og -c  test1.s -o test1.o
gcc -Og test1.o -o test1 
# apt install gcc-multilib