char* my_upcase(char* harif) {
    for(int i = 0; harif[i]; i++)                                       // for(i = 0; i < harif[i] |= '\0'; i++)
    {
        if(harif[i] >= 'a' && harif[i] <= 'z')
        {
            harif[i] -= 32;
        }
    }
    return harif;
}