#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct for dog
 * @age : age of dog
 * @name : pointer to name
 * @owner : pointer to owner
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
