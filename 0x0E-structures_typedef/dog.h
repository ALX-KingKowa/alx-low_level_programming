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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


/**
 * dog_t - a new Typedef for struct dog
 */
typedef struct dog dog_t;




#endif
