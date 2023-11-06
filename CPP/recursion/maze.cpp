#include<iostream>

char maze[][7] = {{'#','#','#','#','#','E','#'},
                 {'#',' ',' ',' ',' ',' ','#'},
                 {'#','S','#','#','#','#','#'}};

char wall = '#';
char start = 'S';
char end = 'E';

using Point = std::vector<int,int>;

void solve(char maze, char wall, char start, char end);

int main()
{
    solve(maze, wall, start, end);
    return 0;
}

bool walk(char maze[][7], char wall, Point start, Point end){
    return true;
}

void solve(char maze[][7], char wall, char start, char end)
{
    return;
}