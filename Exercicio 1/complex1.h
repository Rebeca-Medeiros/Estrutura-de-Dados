#ifndef _complex1_h_
#define _complex1_h_


typedef struct {
		double pReal;
		double pImaginaria;
	} tComplexo;


extern tComplexo CriaComplexo(double x, double y);
extern tComplexo SomaComplexos(tComplexo c1, tComplexo c2);
extern tComplexo SubtraiComplexos(tComplexo c1, tComplexo c2);
extern tComplexo MultiplicaComplexos(tComplexo c1, tComplexo c2);
extern tComplexo DivisaoComplexos(tComplexo c1, tComplexo c2);

extern void ExibeComplexo(tComplexo c);

#endif
