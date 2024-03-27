#include "Functions.h"

void alloc(TLib* l, int n) {
	int i = 0;
	l->n = n;
	l->x = (TPerson*)malloc(sizeof(TPerson) * n);
	for (; i < n; i++)
	{
		&(l->x[i].FirstName) = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].LastName = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].SecondName = (char*)malloc(STRING_LEN * sizeof(char));

		l->x[i].par.gender = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].par.nation = (char*)malloc(STRING_LEN * sizeof(char));

		l->x[i].info.address.country = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].info.address.area = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].info.address.city = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].info.address.district = (char*)malloc(STRING_LEN * sizeof(char));
		l->x[i].info.address.street = (char*)malloc(STRING_LEN * sizeof(char));



	}
};

int compare(const void* a, const void* b) {
	TPerson* PersonA = (TPerson*)a;
	TPerson* PersonB = (TPerson*)b;
	return (strcmp(PersonA->SecondName, PersonB->SecondName));
}

void sortLib(TLib* lib){}

void scan(TLib* l1, const char* name) {
	int i = 0;
	FILE* f = fopen(name, "r");
	if (f == NULL) {
		printf("Not found");
		abort();
	}
	fscanf(f, "%d", &(l1->n));

	alloc(l1, l1->n);

	for (i = 0; i < l1->n; i++) {
		fscanf(f, "%s", l1->x[i].FirstName);
		fscanf(f, "%s", l1->x[i].LastName);
		fscanf(f, "%s", l1->x[i].SecondName);

		fscanf(f, "%d", &(l1->x[i].birth.day));
		fscanf(f, "%d", &(l1->x[i].birth.month));
		fscanf(f, "%d", &(l1->x[i].birth.year));

		fscanf(f, "%s", &(l1->x[i].par.gender));
		fscanf(f, "%s", &(l1->x[i].par.nation));
		fscanf(f, "%d", &(l1->x[i].par.height));
		fscanf(f, "%d", &(l1->x[i].par.weight));

		fscanf(f, "%lli", &(l1->x[i].info.phone_number));
		fscanf(f, "%s", &(l1->x[i].info.address.country));
		fscanf(f, "%s", &(l1->x[i].info.address.area));
		fscanf(f, "%s", &(l1->x[i].info.address.city));
		fscanf(f, "%s", &(l1->x[i].info.address.district));
		fscanf(f, "%s", &(l1->x[i].info.address.street));
		fscanf(f, "%d", &(l1->x[i].info.address.house));
		fscanf(f, "%d", &(l1->x[i].info.address.flat));
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

		fprintf(f, "+%lli\n", l1->x[i].info.phone_number);
		fprintf(f, "%s->", l1->x[i].info.address.country);
		fprintf(f, "%s->", l1->x[i].info.address.area);
		fprintf(f, "%s->", l1->x[i].info.address.city);
		fprintf(f, "%s->", l1->x[i].info.address.district);
		fprintf(f, "%s ", l1->x[i].info.address.street);
		fprintf(f, "%d ", l1->x[i].info.address.house);
		fprintf(f, "%d\n", l1->x[i].info.address.flat);
		fprintf(f, "\n");
	}
	fclose(f);
}