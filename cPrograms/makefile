#Macros
CC = gcc
CFLAGS = -O -Wno-division-by-zero -std=c89


#Dependencies
all : IntZeroDivision bohAssignment signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes wordSize fpClassification errors wordAddressing byteAddressing epsilon
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
wordSize : wordSize.c
fpClassification : fpClassification.c
errors : errors.c
wordAddressing : wordAddressing.c
byteAddressing : byteAddressing.c
epsilon : epsilon.c


#misc targets
run : IntZeroDivision bohAssignment signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes wordSize fpClassification errors wordAddressing byteAddressing epsilon
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
		./wordSize > outputFiles/wordSize.txt
		./fpClassification > outputFiles/fpClassification.txt
		./errors > outputFiles/errors.txt
		./wordAddressing > outputFiles/wordAddressing.txt
		./byteAddressing > outputFiles/byteAddressing.txt
		./epsilon > outputFiles/epsilon.txt

clean:
		rm -f *.o core bohAssignment IntZeroDivision signedZeroDivision printValues maxesAndMins fpRoundoff signedFlow unsignedFlow fpFlow printSizes wordSize fpClassification errors wordAddressing byteAddressing epsilon
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
		rm -f outputFiles/wordSize.txt
		rm -f outputFiles/fpClassification.txt
		rm -f outputFiles/errors.txt
		rm -f outputFiles/wordAddressing.txt
		rm -f outputFiles/byteAddressing.txt
		rm -f outputFiles/epsilon.txt
		rm -f ../cCodeTutorial.html
