#ifndef _Holberton_H_
#define _Holberton_H_


/**
*struct dog - struct
*@name: name
*@age: age
*@owner: owner
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
