void my_putchar(char c) {
  write(1, &c, 1);
}


void my_print_reverse_alphabet()
{
    for(char harf = 'z'; harf >= 'a'; harf--)
    {
        my_putchar(harf);
    }  
    my_putchar('\n');
}