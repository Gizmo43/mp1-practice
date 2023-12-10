#include<locale.h>
#include"dirent.h"

DIR* d;
struct dirent* ent;

typedef struct file_data {
    char* name;
    long int size;
}file_data;


int stat(const char* path, struct stat* buf);

char* file_path(const char* str1, const char* str2) {

    size_t str1_len = strlen(str1), str2_len = strlen(str2),new_str_len = str1_len + 1 + str2_len + 1;
    char* new_str = malloc(new_str_len * sizeof(char));
    if (new_str == NULL) {
        printf("Memory error\n");
        return NULL;
    }

    strcpy(new_str, str1);
    strcat(new_str, "/");
    strcat(new_str, str2);

    return new_str;
}

char* convert(const char* str1) {
    size_t str1_len = strlen(str1), new_str_len = str1_len + 1;
    char* new_str = malloc(new_str_len * sizeof(char));
    strcpy(new_str, str1);

    return new_str;
}

int file_num(char path[100]) {
    int n = 0;
    d = opendir(path);
    if (d) {
        while ((ent = readdir(d)) != NULL) {
            if (ent->d_type != DT_REG) {
                continue;
            }
            n++;
        }
        closedir(d);
    }
    return n;
}

int cmp_size(const void* a, const void* b){
    file_data* c = (file_data*)a;
    file_data* d = (file_data*)b;
    return (c->size - d->size);
}

void select_sort(file_data *files, int N) {
    int min,tmp;
    char* tmp_n;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            if (files[min].size > files[j].size)
                min = j;

        tmp = files[min].size;
        files[min].size = files[i].size;
        files[i].size = tmp;

        tmp_n = files[min].name;
        files[min].name = files[i].name;
        files[i].name = tmp_n;
    }
}

void insert_sort(file_data* files, int N)
{
    int new_size,loc;
    char* new_name;
    for (int i = 1; i < N; i++)
    {
        new_size = files[i].size;
        new_name = files[i].name;
        loc = i - 1;
        while (loc >= 0 && files[loc].size > new_size)
        {
            files[loc + 1].size = files[loc].size;
            files[loc + 1].name = files[loc].name;
            loc = loc - 1;
        }
        files[loc + 1].size = new_size;
        files[loc + 1].name = new_name;
    }
}

void print_files(file_data* files, int N) {
    for (int i = 0; i < N; i++) {
        printf("Имя: %s Размер: %ld байт\n", files[i].name, files[i].size);
    }

}




void main() {
    char path[100];
    int i = 0, num, input = 0;
    struct stat fileStat;

    setlocale(LC_ALL, "Rus");
    printf("Путь: ");
    scanf("%s", path);
    num = file_num(path);
    struct file_data* files_origin = (struct file_data*)malloc(num * sizeof(struct file_data));
    struct file_data* files = (struct file_data*)malloc(num * sizeof(struct file_data));
    //printf("%d\n", num);
    d = opendir(path);
    if (d) {
        while ((ent = readdir(d)) != NULL) {
            if (ent->d_type != DT_REG) {
                continue;
            }
            stat(file_path(path, ent->d_name), &(fileStat));

            struct file_data new = { convert(ent->d_name) , fileStat.st_size };

            files_origin[i].name = new.name;
            files_origin[i].size = new.size;
            i++;
        }
        closedir(d);
    }
    
    do {
        memcpy(files, files_origin, num * sizeof(struct file_data));
        printf("Выберите команду: 0 - вывести оригинал\n");
        printf("Сортировки: 1 - выбором, 2 - вставками, 3 - быстрая \n");
        printf("4 - завершить программу\n");

        scanf("%d", &(input));

        switch (input) {
        case 0:
            print_files(&files_origin[0], num);
            break;
        case 1:
            select_sort(&files[0], num);
            print_files(&files[0], num);
            break;
        case 2:
            insert_sort(&files[0], num);
            print_files(&files[0], num);
            break;
        case 3:
            qsort(files, num, sizeof(struct file_data), cmp_size);
            print_files(&files[0], num);
            break;
        case 4:
            break;
        default:
            printf("Input error\n");
        }
    } while (input != 4);

    



    
    free(files);
}

//Test path: C:\Users\User\mp1-practice\KrykovEF\Practice5\Practice5
