#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1 = 10, y1 = 490;
    int x2 = 10, y2 = 60;
    
    float dx, dy, steps;
    float x_inc, y_inc;
    
    float x = x1;
    float y = y1;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    // Calculate number of steps
    if (abs(dx) > abs(dy))
      steps = abs(dx);
    else
      steps = abs(dy);
    
    // Calculate increment values
    x_inc = dx / steps;
    y_inc = dy / steps;
    
    // Plot pixels
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), RED);
        x = x + x_inc;
        y = y + y_inc;
    }
    outtextxy(150, 50, "Line using DDA Algorithm");
    getch();
    closegraph();
    return 0;
}