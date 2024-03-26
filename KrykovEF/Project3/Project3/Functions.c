#include "Functions.h"

void alloc(TLib* l, int n) {
	l->n = n;
	l->x = (TPerson*)malloc(sizeof(TPerson) * n);
};

int compare(const void* a, const void* b) {
	TPerson* PersonA = (TPerson*)a;
	TPerson* PersonB = (TPerson*)b;
	return (strcmp(PersonA->LastName, PersonB->LastName)*(-1));
}

void scan(TLib* l1, const char* name) {
	int i = 0;
	FILE* f = fopen(name, "r");
	if (f == NULL) {
		printf("Not found");
		abort();
	}
	fscanf(f, "%d", &(l1->n));

	l1->x = (TPerson*)malloc(l1->n * sizeof(TPerson));

	for (i = 0; i < l1->n; i++) {
		fscanf(f, "%s", &(l1->x[i].FirstName));
		fscanf(f, "%s", &(l1->x[i].LastName));
		fscanf(f, "%s", &(l1->x[i].SecondName));

		fscanf(f, "%d", &(l1->x[i].birth.day));
		fscanf(f, "%d", &(l1->x[i].birth.month));
		fscanf(f, "%d", &(l1->x[i].birth.year));

		fscanf(f, "%s", &(l1->x[i].par.gender));
		fscanf(f, "%s", &(l1->x[i].par.nation));
		fscanf(f, "%d", &(l1->x[i].par.height));
		fscanf(f, "%d", &(l1->x[i].par.weight));

		fscanf(f, "%lli", &(l1->x[i].info.number));
		fscanf(f, "%s", &(l1->x[i].info.country));
		fscanf(f, "%s", &(l1->x[i].info.area));
		fscanf(f, "%s", &(l1->x[i].info.city));
		fscanf(f, "%s", &(l1->x[i].info.district));
		fscanf(f, "%s", &(l1->x[i].info.street));
		fscanf(f, "%d", &(l1->x[i].info.house));
		fscanf(f, "%d", &(l1->x[i].info.flat));

		/*printf("%s", l1->x[i].FirstName);
		printf("%s", l1->x[i].LastName);
		printf("%s", l1->x[i].SecondName);

		printf("%d", l1->x[i].birth.day);
		printf("%d", l1->x[i].birth.month);
		printf("%d", l1->x[i].birth.year);

		printf("%s", l1->x[i].par.gender);
		printf("%s", l1->x[i].par.nation);
		printf("%d", l1->x[i].par.height);
		printf("%d", l1->x[i].par.weight);

		printf("%d", l1->x[i].info.number);
		printf("%s", l1->x[i].info.country);
		printf("%s", l1->x[i].info.area);
		printf("%s", l1->x[i].info.city);
		printf("%s", l1->x[i].info.district);
		printf("%s", l1->x[i].info.street);

		printf("%d", l1->x[i].info.house);
		printf("%d\n", l1->x[i].info.flat);*/

	}	


	fclose(f);
}

void write(TLib* l1,const char* name) {
	int i = 0;
	FILE* f = fopen(name, "w+");
	if (f == NULL) {
		printf("Not found");
		abort();
	}
	for (i = 0; i < l1->n; i++) {
		fprintf(f, "%s ", l1->x[i].FirstName);
		fprintf(f, "%s ", l1->x[i].LastName);
		fprintf(f, "%s ", l1->x[i].SecondName);

		fprintf(f, "%d/", l1->x[i].birth.day);
		fprintf(f, "%d/", l1->x[i].birth.month);
		fprintf(f, "%d\n ", l1->x[i].birth.year);

		fprintf(f, "%s ", l1->x[i].par.gender);
		fprintf(f, "%s ", l1->x[i].par.nation);
		fprintf(f, "%dcm ", l1->x[i].par.height);
		fprintf(f, "%dkg\n", l1->x[i].par.weight);

		fprintf(f, "+%lli\n", l1->x[i].info.number);
		fprintf(f, "%s->", l1->x[i].info.country);
		fprintf(f, "%s->", l1->x[i].info.area);
		fprintf(f, "%s->", l1->x[i].info.city);
		fprintf(f, "%s->", l1->x[i].info.district);
		fprintf(f, "%s ", l1->x[i].info.street);
		fprintf(f, "%d ", l1->x[i].info.house);
		fprintf(f, "%d\n", l1->x[i].info.flat);
		fprintf(f, "\n");


	}


	

	fclose(f);
}