print_main: print_main.o libprints.a
	gcc print_main.o -L. -lprints -o print_main

libprints.a: print1.o print2.o print3.o
	ar -rcs libprints.a print1.o print2.o print3.o

print1.o: print1.c
	gcc -c print1.c -o print1.o

print2.o: print2.c
	gcc -c print2.c -o print2.o

print3.o: print3.c
	gcc -c print3.c -o print3.o