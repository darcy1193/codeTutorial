#Macros?
CC = gcc
CFLAGS = -O -Wall -pedantic -std=c11


#Dependencies
all : IntZeroDivision bohAssignment signedZeroDivision
IntZeroDivision	:	IntZeroDivision.c
bohAssignment	:	bohAssignment.c
signedZeroDivision : signedZeroDivision.c


#misc targets
run : IntZeroDivision bohAssignment signedZeroDivision
		./IntZerodivision
		./bohAssignment
		./signedZeroDivision

clean:
		rm -f *.o core bohAssignment IntZeroDivision signedZeroDivision
