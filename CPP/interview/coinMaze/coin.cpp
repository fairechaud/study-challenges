#include<iostream>
using namespace std;
/*
    Given a maze of X starting positions and O coins, find the 
    path to the closest coin in the maze.
    The path is a result of the steps taken, e.g.
    -------------------------
    | . | x | . | . | . | . |
    -------------------------
    | . | . | . | o | . | . |
    -------------------------
    | o | . | . | . | . | . |
    -------------------------
    | . | . | . | . | . | . |
    -------------------------
    | . | . | . | . | o | . |
    -------------------------
    | . | . | . | . | . | . |
    -------------------------
    distance ((2,1) => (1,3)) => 3 (1 left + 2 down)
    Use the auxiliary class Point for x,y coordinates 
*/
class Point {
    public:
        int x,y;
};

