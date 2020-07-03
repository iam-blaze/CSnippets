#include<stdio.h>
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4
#define valid(x) ((x)>(-1)&&(x)<(8))
int maze[8][8]={{1,0,1,1,1,0,0,1},
                {1,0,0,0,1,1,1,1},
                {1,0,0,0,0,0,0,0},
                {1,0,1,0,9,0,1,1},
                {1,1,1,0,1,0,0,1},
                {1,0,1,0,1,1,0,1},
                {1,0,0,0,0,1,0,1},
                {1,1,1,1,1,1,1,1},
                };
int visited[8][8]={0};

int moozhak(int row, int col , int dir)
{
    int ro,co;
 static int foodFound=0;
 if(maze[row][col] == 9)
 {
     foodFound=1;
     return foodFound;
}
   visited[row][col]=1;
    ro = row-1;
    co = col;
    if(foodFound!=1&&dir!=DOWN && valid(ro)&&valid(co)&&visited[ro][co]==0&&(maze[ro][co]==1 || maze[ro][co]==9))
        moozhak(ro,co,UP);
    ro = row;
    co = col+1;
    if(foodFound!=1&&dir!=LEFT && valid(ro)&&valid(co)&&visited[ro][co]==0&&(maze[ro][co]==1 || maze[ro][co]==9))
        moozhak(ro,co,RIGHT);
    ro = row+1;
    co = col;
    if(foodFound!=1&&dir!=UP && valid(ro)&&valid(co)&&visited[ro][co]==0&&(maze[ro][co]==1 || maze[ro][co]==9))
        moozhak(ro,co,DOWN);
    ro = row;
    co = col-1;
    if(foodFound!=1&&dir!=RIGHT && valid(ro)&&valid(co)&&visited[ro][co]==0&&(maze[ro][co]==1 || maze[ro][co]==9))
        moozhak(ro,co,LEFT);
   visited[row][col]=0;
   return foodFound;
    }
int main()
{
  if(moozhak(0,0,0)==1)
    printf("Food Found");
else
    printf(" Sorry!!! No Food");
}
