#include <graphics.h>
#include <conio.h>
int main() {
 int gd = DETECT, gm;
 // Initialize graphics mode
 initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
 // Draw Rectangle
 rectangle(150, 100, 350, 250);
 // Draw Circle
 circle(250, 350, 80);
 // Display Labels
 outtextxy(200, 80, "Rectangle");
 outtextxy(220, 450, "Circle");
 getch(); // Wait for key press
 closegraph(); // Close graphics window
 return 0;
}