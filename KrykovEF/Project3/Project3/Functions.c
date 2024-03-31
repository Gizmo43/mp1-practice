#include "Functions.h"

void alloc(TLib* l, int n) {
	int i = 0;
	l->n = n; 
	//l->x = malloc(sizeof(TPerson*) * n);

	for (i = 0; i < n; i++) {
		l->x[i].FirstName = (char*)malloc(STRING_LEN * sizeof(char));
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

void sortLib(TLib* lib){
	int min;
	TPerson tmp_s;
	for (int i = 0; i < lib->n; i++)
	{
		min = i;
		for (int j = i + 1; j < lib->n; j++)
			//lib->x[min].size > lib->x[j].size
			if ((strcmp(&(lib->x[min].SecondName), &(lib->x[j].SecondName)))>0)
				min = j;

		tmp_s = lib->x[min];
		lib->x[min] = lib->x[i];
		lib->x[i] = tmp_s;
	}


}

void scan(TLib* l1, const char* name) {
	//char buf[STRING_LEN];
	int i = 0;
	FILE* f = fopen(name, "r");
	if (f == NULL) {
		printf("Not found");
		abort();
	}
	fscanf(f, "%d", &(l1->n));
	l1->x = (TPerson*)malloc(sizeof(TPerson) * l1->n);

	//l1->x = (TPerson*)malloc(l1->n * sizeof(TPerson));

	alloc(l1, l1->n);

	for (i = 0; i < l1->n; i++) {
		fscanf(f, "%s", &l1->x[i].FirstName);
		//strcpy(&l1->x[i].FirstName, &buf);
		fscanf(f, "%s", &l1->x[i].LastName);
		//strcpy(&l1->x[i].LastName, &buf);
		fscanf(f, "%s", &l1->x[i].SecondName);
		//strcpy(&l1->x[i].SecondName, &buf);

		fscanf(f, "%d", &(l1->x[i].birth.day));
		fscanf(f, "%d", &(l1->x[i].birth.month));
		fscanf(f, "%d", &(l1->x[i].birth.year));

		fscanf(f, "%s", &l1->x[i].par.gender);
		//strcpy(&l1->x[i].par.gender, &buf);
		fscanf(f, "%s", &l1->x[i].par.nation);
		//strcpy(&l1->x[i].par.nation, &buf);
		fscanf(f, "%d", &(l1->x[i].par.height));
		fscanf(f, "%d", &(l1->x[i].par.weight));

		fscanf(f, "%lli", &(l1->x[i].info.phone_number));
		fscanf(f, "%s", &l1->x[i].info.address.country);
		//strcpy(&l1->x[i].info.address.country, &buf);
		fscanf(f, "%s", &l1->x[i].info.address.area);
		//strcpy(&l1->x[i].info.address.area, &buf);
		fscanf(f, "%s", &l1->x[i].info.address.city);
		//strcpy(&l1->x[i].info.address.city, &buf);
		fscanf(f, "%s", &l1->x[i].info.address.district);
		//strcpy(&l1->x[i].info.address.district, &buf);
		fscanf(f, "%s", &l1->x[i].info.address.street);
		//strcpy(&l1->x[i].info.address.street, &buf);
		fscanf(f, "%d", &(l1->x[i].info.address.house));
		fscanf(f, "%d", &(l1->x[i].info.address.flat));


		/*printf("%s", &(l1->x[i].FirstName));
		printf("%s", &(l1->x[i].LastName));
		printf("%s", &(l1->x[i].SecondName));
		printf("%d", l1->x[i].birth.day);
		printf("%d", l1->x[i].birth.month);
		printf("%d", l1->x[i].birth.year);
		printf("%s", &(l1->x[i].par.gender));
		printf("%s", &(l1->x[i].par.nation));
		printf("%d", l1->x[i].par.height);
		printf("%d", l1->x[i].par.weight);
		printf("%d", l1->x[i].info.phone_number);
		printf("%s", &(l1->x[i].info.address.country));
		printf("%s", &(l1->x[i].info.address.area));
		printf("%s", &(l1->x[i].info.address.city));
		printf("%s", &(l1->x[i].info.address.district));
		printf("%s", &(l1->x[i].info.address.street));
		printf("%d", l1->x[i].info.address.house);
		printf("%d\n", l1->x[i].info.address.flat);*/
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
		fprintf(f, "%s ", &(l1->x[i].FirstName));
		fprintf(f, "%s ", &(l1->x[i].LastName));
		fprintf(f, "%s ", &(l1->x[i].SecondName));

		fprintf(f, "%d/", l1->x[i].birth.day);
		fprintf(f, "%d/", l1->x[i].birth.month);
		fprintf(f, "%d\n ", l1->x[i].birth.year);

		fprintf(f, "%s ", &(l1->x[i].par.gender));
		fprintf(f, "%s ", &(l1->x[i].par.nation));
		fprintf(f, "%dcm ", l1->x[i].par.height);
		fprintf(f, "%dkg\n", l1->x[i].par.weight);

		fprintf(f, "+%lli\n", l1->x[i].info.phone_number);
		fprintf(f, "%s->", &(l1->x[i].info.address.country));
		fprintf(f, "%s->", &(l1->x[i].info.address.area));
		fprintf(f, "%s->", &(l1->x[i].info.address.city));
		fprintf(f, "%s->", &(l1->x[i].info.address.district));
		fprintf(f, "%s ", &(l1->x[i].info.address.street));
		fprintf(f, "%d ", l1->x[i].info.address.house);
		fprintf(f, "%d\n", l1->x[i].info.address.flat);
		fprintf(f, "\n");
	}
	fclose(f);
}

void clean(TLib* l1) {

	for (int i = 0; i < l1->n; i++) {
		free(l1->x[i].FirstName);
		free(l1->x[i].LastName);
		free(l1->x[i].SecondName);
		free(l1->x[i].par.gender);
		free(l1->x[i].par.nation);
		free(l1->x[i].info.address.country);
		free(l1->x[i].info.address.area);
		free(l1->x[i].info.address.city);
		free(l1->x[i].info.address.district);
		free(l1->x[i].info.address.street);
	
	}




	free(l1->x);
}