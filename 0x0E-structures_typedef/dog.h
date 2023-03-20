#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct for dog
 * @age : age of dog
 * @name : pointer to name
 * @owner : pointer to owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
