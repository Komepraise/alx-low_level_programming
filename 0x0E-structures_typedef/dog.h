#ifndef DOG_H
#define DOG_H
struct dog/*a structure*/
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_h;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif/*DOG_H*/
