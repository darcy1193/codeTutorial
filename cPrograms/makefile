#Macros?
CC = gcc
CFLAGS = -O -Wno-division-by-zero -std=c89


#Dependencies
all : IntZeroDivision bohAssignment signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes
IntZeroDivision	:	IntZeroDivision.c
bohAssignment	:	bohAssignment.c
signedZeroDivision : signedZeroDivision.c
printValues : printValues.c
maxesAndMins : maxesAndMins.c
fpRoundoff : fpRoundoff.c
signedFlow : signedFlow.c
unsignedFlow : unsignedFlow.c
fpFlow : fpFlow.c
printSizes : printSizes.c


#misc targets
run : IntZeroDivision bohAssignment signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes
		./IntZeroDivision > outputFiles/IntZeroDivision.txt
		./bohAssignment > outputFiles/bohAssignment.txt
		./signedZeroDivision > outputFiles/signedZeroDivision.txt
		./printValues > outputFiles/printValues.txt
		./maxesAndMins > outputFiles/maxesAndMins.txt
		./fpRoundoff > outputFiles/fpRoundoff.txt
		./signedFlow > outputFiles/signedFlow.txt
		./unsignedFlow > outputFiles/unsignedFlow.txt
		./fpFlow > outputFiles/fpFlow.txt
		./printSizes > outputFiles/printSizes.txt

clean:
		rm -f *.o core bohAssignment IntZeroDivision signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes
		rm -f outputFiles/bohAssignment.txt
		rm -f outputFiles/fpFlow.txt
		rm -f outputFiles/fpRoundoff.txt
		rm -f outputFiles/IntZeroDivision.txt
		rm -f outputFiles/maxesAndMins.txt
		rm -f outputFiles/printValues.txt
		rm -f outputFiles/signedFlow.txt
		rm -f outputFiles/signedZeroDivision.txt
		rm -f outputFiles/unsignedFlow.txt
		rm -f outputFiles/printSizes.txt
		rm -f ../cCodeTutorial.html
