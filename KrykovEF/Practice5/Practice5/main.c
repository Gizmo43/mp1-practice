#include<stdio.h>
#include<locale.h>
#include"dirent.h"


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


void main() {
    char path[100];
    setlocale(LC_ALL, "Rus");
    printf("Путь: ");
    scanf("%s", path);
    DIR *d;
    struct dirent *ent;
    struct stat fileStat;

    d = opendir(path);
    if (d) {
        while ((ent = readdir(d)) != NULL) {
            if (ent->d_type == DT_DIR) {
                continue;
            }

            stat(file_path(path, ent->d_name), &(fileStat));
            
            printf("%s Размер: %ld байт\n", ent->d_name, fileStat.st_size);
            //printf("Имя: %s\t Позиция в директории: %ld\n",ent->d_name, telldir(d));
        }
        closedir(d);
    }
    

}