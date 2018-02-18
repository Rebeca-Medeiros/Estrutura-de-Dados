#include <stdio.h>
#include "complex1.h"

tComplexo CriaComplexo(double x, double y) {
	tComplexo c;
	c.pReal = x;
	c.pImaginaria = y;
	return c;
}

tComplexo SomaComplexos(tComplexo c1, tComplexo c2) {
	tComplexo c;
	c.pReal = c1.pReal + c2.pReal;
	c.pImaginaria = c1.pImaginaria + c2.pImaginaria;
	return c;
}

tComplexo SubtraiComplexos(tComplexo c1, tComplexo c2) {
	tComplexo c;
	c.pReal = c1.pReal - c2.pReal;
	c.pImaginaria = c1.pImaginaria - c2.pImaginaria;
	return c;
}

tComplexo MultiplicaComplexos(tComplexo c1, tComplexo c2) {
	tComplexo c;
	c.pReal = c1.pReal * c2.pReal;
	c.pImaginaria = c1.pImaginaria * c2.pImaginaria;
	return c;
}

tComplexo DivisaoComplexos(tComplexo c1, tComplexo c2) {
	tComplexo c;
	c.pReal = c1.pReal / c2.pReal;
	c.pImaginaria = c1.pImaginaria / c2.pImaginaria;
	return c;
}

void ExibeComplexo(tComplexo c){
	printf("%2.1lf + %2.1lfi", c.pReal, c.pImaginaria);
}
