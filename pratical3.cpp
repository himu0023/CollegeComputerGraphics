#include <graphics.h>
#include <conio.h>
#include <math.h>

int main(){
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, "C:\\Turbo3\\BGI");

    int x1 = 100, y1= 100;
    int x2 = 400, y2= 300;

    float m,c;

    // Calculate slope
    m = (float)(y2-y1)/(x2-x1);

    // Calculate intercept
    c = y1 - m * x1;

    // Plot points
    for (int x = x1; x<x2;x++){
        int y = m*x +c;
        putpixel(x, round(y), BLUE);
    }

    outtextxy(150,50, "Line using Slope-intercept method");

    getch();
    closegraph();
    return 0;
}