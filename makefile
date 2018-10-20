all: linked_list.o tester.o
	gcc tester.o linked_list.o

run:
	./a.out

tester.o: tester.c
	gcc -c -g tester.c

linked_list.o: linked_list.c linked_list.h
	gcc -c -g linked_list.c
