#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
    int uzun1 = 0;

    for(int i = 0; param_1->size; i++)
    {
        uzun1 += strlen(param_1->array[i]); /// Har bir Array ichidagi string ni sanaymiz
                                // for (int j =0; j < param_1->array[i]; j++)  ///uzunlikni sanaydi. Bu loop String ni uzunligini sanaydi birinchisini
                                // {
                                //     uzun1++;
                                // }
    }
    int uzun2 = param_1->size*strlen(param_2); //Sanab chiqdik va joy boshatik Array uchun MEmory dan va bir biriga Qoshib beradi  "abd", "efg" , "fff"
                                // for (int i = 0; i < param_1->size*strlen(param_2); i++)
                                // {
                                //     uzun2 += strlen(param_2);
                                // }

    char* str = malloc(sizeof(char)*(uzun1 + uzun2 + 1));

    for(int i = 0; i < param_1->size-1; i++)
    {
        strcat(str, param_1->array[i]);
        strcat(str, param_2);
    }
    strcat(str, param_1->array[param_1->size-1]);
    return str;
}

    



    // Input: ["abc", "def", "gh", "!"] && "-"  RETURN  "abc-def-gh-!"
    // Input: ["abc", "def", "gh", "!"] && "blah"   RETURN  "abcblahdefblahghblah!"
    // Input: ["abc", "def", "gh", "!"] && ""  RETURN  "abcdefgh!"
    // Else No input   RETURN Nill;