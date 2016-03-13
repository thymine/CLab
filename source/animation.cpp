#include <graphics.h>

void mainloop() {
	for (; is_run(); delay_fps(60)) {
		setfillcolor(EGERGB(
			random(255),
			random(255),
			random(255)
		));

		cleardevice();

		fillellipse(200, 200, 50, 30);
	}
}

void anotherLoop() {
	// 动画控制变量，控制横坐标，初始值为0
	int x = 0;
	setcolor(EGERGB(0, 0xFF, 0));
	setfillcolor(EGERGB(0, 0, 0xFF));
	for (; is_run(); delay_fps(60)) {
		// 计算新坐标，右移一个像素，若等于440则移回x=0
		x = (x + 1) % 440;
		cleardevice();
		fillellipse(x + 100, 200, 100, 100);
	}
}

void pulse() {
	int x = 0;
	int direction = 1;
	setcolor(EGERGB(0xFF, 0, 0));
	setfillcolor(EGERGB(0xFF, 0, 0));
	for (; is_run(); delay_fps(60)) {
		if (direction > 0) {
			x++;
			if (x == 200) {
				direction = -1;
			}	
		} else {
			x--; 
			if (x == 0) {
				direction = 1;
			}
		}

		cleardevice();
		fillellipse(320, 240, x, x);
	}
}

int main() {
	setinitmode(INIT_DEFAULT|INIT_NOFORCEEXIT);
	initgraph(640, 480);
	randomize();
	setrendermode(RENDER_MANUAL);
	
	//	mainloop();
	//	anotherLoop();
	pulse();

	closegraph();
	return 0;
}
