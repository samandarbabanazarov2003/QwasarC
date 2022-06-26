
char* my_spaceship( char* raketa){
    int x = 0;
    int y = 0;
    char* dir = "up";

for (int i=0; i < strlen(raketa); i++){
    if (raketa[i] == "A")
    {
        if (dir == "up")
        {
            y--;
        }
        else if(dir == "right")
        {
            x++;
        }
        else if(dir == "down")
        {
            y++;
        }
        else if(dir == "left")
        {
            x--;
        }
    }
    else if (raketa[i] == "R")
    {
        if(dir == "up")
        {
            dir = "right";
        }
        else if(dir == "right")
        {
            dir = "down";
        }
        else if(dir == "down")
        {
            dir = "left";
        }
        else if(dir == "left")
        {
            dir = "up";
        }
    }
    else if (raketa[i] == "L")
    {
        if(dir == "up")
        { 
            dir = "left";
        }
        else if(dir == "left")
        {
            dir = "down";
        }
        else if(dir == "down")
        {
            dir = "right";
        }
        else if(dir == "right")
        {
            dir = "up";
        }
    }
}

    
    // int resume = "{x: "+x+", y: "+ y + ", direction: '"+dir+"'}"
    // return resume;
    
}
// printf(my_spaceship(("RAALAG"));
// console.log(my_spaceship("AAAA"));
// console.log(my_spaceship("RAARA"));