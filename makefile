#Macros?
CC = gcc
CFLAGS = -O -Wall -pedantic -std=c11


#Dependencies
all : IntZeroDivision bohAssignment
IntZeroDivision	:	IntZeroDivision.c
bohAssignment	:	bohAssignment.c


#misc targets
run : IntZeroDivision bohAssignment
		./IntZerodivision
		./bohAssignment

clean:
		rm -f *.o core bohAssignment IntZeroDivision
