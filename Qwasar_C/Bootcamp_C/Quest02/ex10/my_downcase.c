char* my_downcase(char* harif) {
    for(int i = 0; harif[i]; i++)                                       // for(i = 0; i < harif[i] |= '\0'; i++)
    {
        if(harif[i] >= 'A' && harif[i] <= 'Z')
        {
            harif[i] += 32;
        }
    }
    return harif;
}