
compValidator: 
	gcc validator.c validatorTest.c  "../Cunit/cunit.c" -o ValidatorTest -g -Wall -pedantic -std=c99

runValidator: compValidator
	./ValidatorTest

clean:
	-rm -f core *.log *.o *.exe
