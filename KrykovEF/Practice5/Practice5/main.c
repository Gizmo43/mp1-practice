#include<stdio.h>
#include<locale.h>
#include"dirent.h"


int stat(const char* path, struct stat* buf);
//void* calloc(size_t num, size_t size);

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


void main() {
    char path[100];
    int i = 0;
    DIR *d;
    struct dirent *ent;
    struct stat fileStat;
    struct file_data {
        char* name;
        long int size;
    };
    struct file_data *files = (struct file_data*)malloc(1*sizeof(struct file_data));



    setlocale(LC_ALL, "Rus");
    printf("Путь: ");
    scanf("%s", path);
    d = opendir(path);
    if (d) {
        while ((ent = readdir(d)) != NULL) {
            if (ent->d_type == DT_DIR) {
                continue;
            }

            stat(file_path(path, ent->d_name), &(fileStat));
            
            printf("%s Размер: %ld байт\n", ent->d_name, fileStat.st_size);
            struct file_data new = { ent->d_name , fileStat.st_size };
            calloc(1, sizeof(struct file_data));
            files[i].name = new.name;
            files[i].size = new.size;
            i++;



        }
        closedir(d);
    }
    for (i = 0; i < 4; i++) {
        printf("%s %ld", files[i].name, files[i].size);
    }
    free(files);
}