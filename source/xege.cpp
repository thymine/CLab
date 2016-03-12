#include "graphics.h" // 就是需要引用这个图形库  

int main()  
{  
    initgraph(640, 480); // 初始化，显示一个窗口，这里和 TC 略有区别  
    circle(200, 200, 100); // 画圆，圆心(200, 200)，半径 100  

	char s[101];
	inputbox_getline("Input Box", "Input a string", s, 100);
	outtextxy(10, 10, s);

	int x = getInteger();
	xyprintf(10, 30, "This is an integer: %d", x);

	double y = getDouble();
	xyprintf(10, 50, "This is a double: %f", y);

	getString(s, 100);
	outtextrect(10, 80, 100, 60, s);

	char c = getChar("Input a character");
	outtext(c);

	int coords[4];
	int* pc = getCoords(coords, 2);
	line(pc[0], pc[1], pc[2], pc[3]);
	
    getch(); // 暂停一下等待用户按键  
    closegraph(); // 关闭图形界面
    return 0;
}
