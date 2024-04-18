#ifndef __admin__
#define __admin__

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../../utils/hash.c"

#define STRING_MAX_LENGTH 100
#define TIMESTAMP_MAX_LENGTH 15

typedef struct
{
    int id;
    char name[STRING_MAX_LENGTH];
    char email[STRING_MAX_LENGTH];
    char password[STRING_MAX_LENGTH];
    char created_at[TIMESTAMP_MAX_LENGTH];
    char updated_at[TIMESTAMP_MAX_LENGTH];
} admin;

admin initialize_admin(char *name, char *email, char *password)
{
    admin temp;
    temp.id = rand();
    strcpy(temp.name, name);
    strcpy(temp.email, email);
    strcpy(temp.password, hash(password));
    time_t current_time;
    time(current_time);
    strcpy(temp.created_at, current_time);
    strcpy(temp.updated_at, current_time);
    return temp;
}

#endif