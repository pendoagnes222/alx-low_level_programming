#ifndef DOG
#define DOG
/**
 * struct dog -new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog object having 3 props
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef struct -define new object
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: define new data type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void str_cpy(char *src, char *dest);
#endif
