/*CS4900 
2/15/2017
Greg Ostroy

Declaration for the input functions of a quadratic solver

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

/*converts three strings to their float versions. Prints a message if strings are not valid floats. Valid 
floats are numbers >=0
 params-3 strings and 3 float addresses
 returns 0=valid float, 1 or greater=negative number
*/
int parseCoefficients(const char*, const char*, const char*,float*,float*,float*);

