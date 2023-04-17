#include <stdlib.h>
#include "dog.h"
/**
 * _strlen -This  returns the length of a string
 * @j: This is the  string to evaluate
 * Return: This isthe length of the string
 */
int _strlen(char *j)
{
	int i;

	i = 0;

	while (j[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * *_strcpy - This copies the string pointed to by src
 * @dest: This is the pointer to the buffer in which we copy the tring
 * @src: This is the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - This creates a new dog
 * @name: This is the name of the dog
 * @age: This is the age of the dog
 * @owner: This is the owner of the dog
 * Return: This is the pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
