#include<stdio.h>

typedef struct Vn {
	unsigned int ID;
	char Nch;
	unsigned int ifgetnull;
}Vn_type;
Vn_type Vn[100];
int Vn_ID_next;

typedef struct Vt {
	unsigned int ID;
	char Tch;
	unsigned int ifgetnull;
}Vt_type;
Vt_type Vn[100];
int Vt_ID_next;

typedef struct IDNode {
	unsigned int ID;
	struct IDNode *next;
}IDNode;

IDNode *p[100];
IDNode *First[100];
IDNode *Follow[100];
IDNode *Select[100];

void getNULLVn(int ID_num) {
	int i;
	IDNode *ptemp1,*ptemp2;

	for (i = 0; i < ID_num; i++) {
		if (p[i]->next->ID == 000) {
			Vn[p[i]->ID].ifgetnull = 1;
		}
	}

	for (i = 0; i < ID_num; i++) {
		ptemp1 = p[i];
		while (ptemp1->next != NULL) {
			if (ptemp1->ID >= 300) break;
			if (Vn[ptemp1->ID].ifgetnull == 1 && ptemp1->next==NULL) {
				Vn[p[i]->ID].ifgetnull = 1;
			}
			if (Vn[ptemp1->ID].ifgetnull == 0 && ptemp1->next == NULL) {
				Vn[p[i]->ID].ifgetnull = 0;
			}
			ptemp1 = ptemp1->next;
		}
	}



}


