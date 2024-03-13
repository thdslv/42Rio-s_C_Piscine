#include <stdio.h>
#include <stdlib.h>

struct s_person
{
	char *name;
	int age;
};

struct s_pet
{
	char *species;
	char *name;
	struct s_person owner;
};

int main ()
{
	struct s_person *person;
	struct s_pet pet;

	person = malloc(sizeof(struct s_person));
	person->name = "Thalles";
	person->age = 22;
	pet.species = "gato";
	pet.name = "Yukio";
	pet.owner = *person;	

	printf("%s tem %d anos\n", person->name, person->age);
	printf("-------------------------------------------\n");
	printf("%s é pet de %s e é um %s", pet.name, pet.owner.name, pet.species);

}
