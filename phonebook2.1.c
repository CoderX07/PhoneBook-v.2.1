// Calls Libraries
#include <stdio.h>
#include <string.h>

// Creates New Data Type Called Person
typedef struct
{
    char *name;
    char *location;
    char *number;
}
person;

// Number Of People (NOP) That File Will Save
const int NOP = 5;

int main(void)
{
    // Opens New File
    FILE *file = fopen("phonebook.csv", "a");
    
    // If There Is No Fill, Program Quits
    if (file == NULL)
    {
        return 1;
    }
    
    // Creates An Array For NOP
    person people[NOP];
    
    // Asks User For Phonebook Data To Store In File
    for (int i = 0; i < NOP; i++)
    {
        printf("What's the name? ");
        scanf("%s", people[i].name);
        printf("Where do they live? ");
        scanf("%s", people[i].location);
        printf("What's their number? ");
        scanf("%s", people[i].number);
        fprintf(file, "%s,%s,%s\n", people[i].name, people[i].location, people[i].number);
    }
    
    // Closes File
    fclose(file);
}