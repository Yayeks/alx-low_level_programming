#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_a - Typedef for struct dog
 */
typedef struct dog dog_a;
/**
 * struct dog -structures that stores information about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct called "dog" that stores its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
