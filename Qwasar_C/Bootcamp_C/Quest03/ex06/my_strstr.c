char* my_strstr(char* param_1, char* param_2)
{
    if(param_2[0] == 0)
    {
        return param_1;
    }
    int i = 0;

    while (param_1[i] != '\0')
    {
        int y = 0;
        while(param_2[y] != '\0')
        {
            if(param_1[i+y] != param_2[y])
                {
                break;
                }
            if(y == strlen(param_2)-1)
                {
                return &param_1[i];
                }
            y++;
        }
        i++;
    }
    return 0;
}