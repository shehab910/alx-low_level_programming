#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /* DOG_H */
