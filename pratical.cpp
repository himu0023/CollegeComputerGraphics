#include <graphics.h>
#include <conio.h>
int main() {
 int gd = DETECT, gm;
 // Initialize graphics mode
 initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
 // Draw a line
 line(100, 100, 300, 100);
 // Draw a rectangle
 rectangle(100, 150, 300, 250);
 // Draw a circle
 circle(200, 350, 50);
 // Display text
 outtextxy(150, 50, "Basic Graphics Functions");
 getch(); // Wait for key press
 closegraph(); // Close graphics mode
 return 0;
}
