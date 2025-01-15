#!/bin/bash
norminette ../c02/*/ft*.c
echo

for i in ex{00..11}
do
	echo "$i Compiling..."
	cc -Wall -Werror -Wextra $i/*.c ../c02/$i/*.c -o compile_$i
	echo "$i Compiled! Executing..."
	./compile_$i
	echo "$i Finished!"
	echo
done
