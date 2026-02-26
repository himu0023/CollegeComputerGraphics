// Catculate the initial value : the input points are (3,2) and (17,5). 


#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1 = 30, y1 = 20;
    int x2 = 170,y2 = 50;

    int dy = y2-y1;
    int dx = x2-x1;

    int p = 2*dy-dx;
    int x = x1;
    int y = y1;

    putpixel(x, y, WHITE);

    while(x<x2){
        x++;

        if(p<0){
            p = p +2 *dy;
        }else{
            y++;
            p = p +2 *dy-2*dx;
        }

        putpixel(x,y,RED);
    }

    outtextxy(150,50,"Line using Bresenham Algorithm");

    getch();
    closegraph();
    return 0;
}