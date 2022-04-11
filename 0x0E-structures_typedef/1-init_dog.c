#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog_a;

	dog_a = malloc(sizeof(struct dog));
	if (dog_a == NULL)
		return (NULL);
	dog_a->name = name;
	dog_a->age = age;
	dog_a->owner = owner;
}
