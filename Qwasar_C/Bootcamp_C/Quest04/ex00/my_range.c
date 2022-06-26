int* my_range(int param_1, int param_2)
{   
    int* range = malloc(sizeof(int)*(param_2-param_1));
    // 4 bayt // param_2- param_1    bu range ni ichida qancha sonlarni saqlashimiz    //Malloc bu Xotira ni ichida xotira qancha ajratish char bolsa 1 bayt integer bolsa 4 bayt
    
    for(int i = 0; i < param_2 - param_1; i++)
    {   
        range[i] = param_1++; /// range[i] + i;
    }

    return range;
}