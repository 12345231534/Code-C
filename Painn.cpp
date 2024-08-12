#include <iostream>
#include <cstdlib>
#include <GL/glut.h>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

struct Point{
	float x;
	float y;
};

int clickCount = 0;
Point point1, point2;

int windowWidth = 800;
int windowHeight = 800;

vector<Point> points;

void initGL(){
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); //R=0,G=0,B=0, anpha=1
	
	// This could affect cordinate of drawing
	glOrtho(0.0f, windowWidth, 0.0f, windowHeight, -1.0f, 1.0f);
	//glOrtho(-windowWidth/2,windowWidth/2,-windowHeight/2,windowHeight/2,-1,1);	
}

void putpixel(int x, int y){
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
}

void mouseClickHandler(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
    	clickCount++;                              
    	float mouseX = x;
    	float mouseY = windowHeight - y;
    	if(clickCount == 1) {
    		point1.x = mouseX;
    		point1.y = mouseY;
    	}
    	else{
    		point2.x = mouseX;
    		point2.y = mouseY;
            cout << "Point 1: " << point1.x << " " << point1.y << endl
			     << "Point 2: " << point2.x << " " << point2.y << endl;
            clickCount = 0;
            points.push_back(point1);
            points.push_back(point2);
            glutPostRedisplay();
    	}
    }
}

void LineBres(int x1, int y1, int x2, int y2) {

	if(x1 > x2){
		swap(x1, x2);
		swap(y1, y2);
	}
	
  	int Dx = x2-x1; 
	int Dy = y2-y1;
	
	float k = ((float) Dy/ Dx);
	
	int x = x1;	
	int y = y1;
	putpixel(x,y);
	
	//		Truong hop dac biet (Khong can tinh p de tang hieu nang)
	//	Ngang
	if(k == 0){
		while(x < x2){
			x++;
			putpixel(x, y);
		}
		return;
	//	Cheo
	}else if(k == 1){
		while(x < x2){
			x++;
			y++;
			putpixel(x, y);
		}
		return;
	}
	//	Doc
	else if(Dx == 0){  // Tuc la k = infinity
		if(y > y2) swap(y, y2);
		while(y < y2){
			y++;
			putpixel(x, y);
		}
		return;
	}
	
	//	Truong hop binh thuong
   	int p;
	if(k > 0 && k < 1){
		p = 2*Dy-Dx;
		while (x < x2)  
		{
			if (p <0)	 
	            p+= 2*Dy;
			else
	            {
	            	p+=2*(Dy-Dx);
				    y++;
				}
			x++;
	        putpixel(x,y);
		}
	}else if(k > 1){
		p = Dy-2*Dx;
		while (x < x2){
			if(p <= 0){
				p += 2*Dy - 2*Dx;
				x++;
			}else{
				p += -2*Dx;
			}
			y++;
			putpixel(x,y);
		}
	}else if(k > -1 && k < 0){
		p = 2*Dy + Dx;
		while (x < x2){
			if(p <= 0){
				p += 2*Dy + 2*Dx;
				y--;
			}else{
				p += 2*Dy;
			}
			x++;
			putpixel(x,y);
		}
	}else if(k < -1){
		p = -Dy - 2*Dx;
		while (x < x2){
			if(p <= 0){
				p += - 2*Dy - 2*Dx;
				x++;
			}else{
				p += -2*Dx;
			}
			y--;
			putpixel(x,y);
		}
	}
}

void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
	
	int random_num = rand();
    
    // Chuy?n d?i thành s? nguyên t? 0 d?n RAND_MAX
    float random_float1 = static_cast<float>(random_num) / RAND_MAX;
    float random_float2 = static_cast<float>(random_num) / RAND_MAX;
    float random_float3 = static_cast<float>(random_num) / RAND_MAX;
    glColor3f(random_float1, random_float2, 1);
	if(points.size() >= 2){
		for(int i = 0; i < points.size() - 1; i+=2){
		LineBres(points[i].x, points[i].y, points[i+1].x, points[i+1].y);
		}	
	}

	LineBres(point1.x, point1.y, point2.x, point2.y);
	
	glFlush();

}

int main(int argc, char** argv){
	int mode=GLUT_SINGLE | GLUT_RGB;
	glutInitDisplayMode(mode);
	    glutInitWindowSize(windowWidth, windowHeight);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("DEMO THUAT TOAN VE DOAN THANG - BRESENHAM");
	 
	initGL();  
	glutMouseFunc(mouseClickHandler);
	glutDisplayFunc(mydisplay);    
	glutMainLoop();
}

