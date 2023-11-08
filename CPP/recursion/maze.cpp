#include<iostream>

char maze[][7] = {{'#','#','#','#','#','E','#'},
                 {'#',' ',' ',' ',' ',' ','#'},
                 {'#','S','#','#','#','#','#'}};

char wall = '#';
char start = 'S';
char end = 'E';

struct Point{
  int x;
  int y;  
};

void solve(char maze, char wall, char start, char end);

int main()
{
    

    return 0;
}

bool walk(char maze[][7], char wall, Point start, Point end){
    return true;
}

void solve(char maze[][7], char wall, char start, char end)
{
    Point startPos;
    startPos.x = 2;
    startPos.y = 3;

    walk()
    return;
}