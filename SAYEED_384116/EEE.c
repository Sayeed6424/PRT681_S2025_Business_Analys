#include <stdio.h>
#include <string.h>

//Defining Number of Words and Max Word Length
#define NUMBER_OF_WORDS 3
#define MAX_LENGTH_OF_WORD 45

char dictionary[NUMBER_OF_WORDS][MAX_LENGTH_OF_WORD] = {"House","Happy","Observe"}; //2D String array of
char synonyms[NUMBER_OF_WORDS][MAX_LENGTH_OF_WORD] = {"Home","Joyful","Notice"}; //2D String array of synonyms
char antonyms[NUMBER_OF_WORDS][MAX_LENGTH_OF_WORD] = {"Evict","Sad","Overlook"}; //2D String array of antonyms

//Function to find if the user input word exist on dictionary or not
int doesExistOnDictionary(char input[MAX_LENGTH_OF_WORD])
{
    for(int i =0; i<NUMBER_OF_WORDS; i++)
    {
        if(strcmp(strlwr(input),strlwr(dictionary[i]))==0) //Converting to lowercase the both word so comparison become case insensitive
        {
            return i; //Return index if exist on dictionary
        }
    }
    return -1; //Return -1 if does not exist on dictionary
}

//Function to print synonym of founded word
void printSynonym(int index)
{
    printf(synonyms[index]);
}

//Function to print antonym of founded word
void printAntonym(int index)
{
    printf(antonyms[index]);
}


//Main Function
void main()
{
    char input[MAX_LENGTH_OF_WORD] = "";
    char wordInputMessage[] = "Enter Your Word: ";
    char synonymAntonymMessage[] = "Synonym or Antonym?: ";
    printf("%s",wordInputMessage);
    gets(input);
    int result = doesExistOnDictionary(input); // Get index of word in dictionary if word is not on dictionary -1 will be result
    if(result!= -1)
    {
        printf("%s",synonymAntonymMessage);
        gets(input);
        if(strcmp(input,"Synonym")==0) //If user input is Synonym
        {
            printSynonym(result);
        }
        else if(strcmp(input,"Antonym")==0) //If user input is Antonym
        {
            printAntonym(result);
        }
        else
        {
            printf("Invalid Input!");
        }
    }
    else
    {
        printf("Sorry, Word Not Found.");
    }
}
