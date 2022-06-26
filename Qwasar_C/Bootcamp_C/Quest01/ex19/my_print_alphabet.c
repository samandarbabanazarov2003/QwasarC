void my_putchar(char c) {
  write(1, &c, 1);
}


void my_print_alphabet()
{
    for(char harf = 'a'; harf <= 'z'; harf++)
    {
        my_putchar(harf);
    }  
    my_putchar('\n');
}   