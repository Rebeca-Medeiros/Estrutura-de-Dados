#include <stdio.h>
#include "complex1.h"

int main(void){
	tComplexo a,
			  b = CriaComplexo(3, 2),
			  c;

	a = CriaComplexo(2, 3);

	c = SomaComplexos(a, b);
	ExibeComplexo(c);
	puts("");

	c = SubtraiComplexos(a, b);
	ExibeComplexo(c);
	puts("");

	c = MultiplicaComplexos(a, b);
	ExibeComplexo(c);
	puts("");

	c = DivisaoComplexos(a, b);
	ExibeComplexo(c);
	puts("");

	return 0;
}
