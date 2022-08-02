#ifndef dog_h
#define dog_h

/**
 * struct dog - struct that stores some information of a dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
