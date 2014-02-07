all: clean vulnerable exploit

vulnerable: vulnerable.c
	gcc -fno-stack-protector -z execstack vulnerable.c -o vulnerable

exploit:
	gcc exploit.c -o exploit
clean:
	@rm vulnerable
	@rm exploit
