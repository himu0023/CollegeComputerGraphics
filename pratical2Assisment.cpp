#include <graphics.h>
#include <conio.h>
int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
 // -------- Triangle --------
 line(100, 150, 150, 50);
 line(150, 50, 200, 150);
 line(100, 150, 200, 150);
 outtextxy(120, 160, "Triangle");
 // -------- Hexagon --------
 int hexagon[] = {300,100, 350,70, 400,100, 400,160, 350,190, 300,160, 300,100};
 drawpoly(7, hexagon);
 outtextxy(330, 200, "Hexagon");
 // -------- Polygon (Pentagon) --------
 int polygon[] = {100,300, 150,250, 200,300, 180,350, 120,350, 100,300};
 drawpoly(6, polygon);
 outtextxy(120, 360, "Polygon");
 // -------- Pencil --------
 rectangle(300, 300, 450, 330); // Body
 line(450, 300, 480, 315); // Tip
 line(450, 330, 480, 315);
 outtextxy(340, 340, "Pencil");
 // -------- Teddy Bear --------
 circle(550, 120, 40); // Head
 circle(520, 90, 20); // Left ear
 circle(580, 90, 20); // Right ear
 circle(550, 220, 60); // Body
 circle(520, 200, 15); // Left eye
 circle(580, 200, 15); // Right eye
 outtextxy(510, 300, "Teddy");
 getch();
 closegraph();
 return 0;
}