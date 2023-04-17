#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name:This is the first member
 * @age: This is the second member
 * @owner: This is the third member
 * Description: This is the longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_h - typedef for struct dog
 */
typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_h *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
