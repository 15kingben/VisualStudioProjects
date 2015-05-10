// opengltests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <Gl/glut.h>
#include <gl/glu.h>
void drawLine(double d,double f,double s,double vb);
void draw(double x, double y, double length, double angle);


double angle;
double decrement;
double initial;

void render(void) 
{



	
  glClearColor(1.0,1.0,1.0,1.0); 
  glColor3f(0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	drawLine(0,-0.7,initial,0);
	draw( 0 + initial * sin(0), -.7 + initial * cos(0),initial, angle);
	draw( 0 + initial * sin(0), -.7 + initial * cos(0),initial,-angle);
	glFlush();
  
}

void draw(double x, double y, double length, double angle){
	if(length < .01){

	}else{
	
	length -= decrement;
	drawLine(x,y,length,angle);
	std::cout << "x "<<x << "y " <<y<< " "<< "length " << length << std::endl; 
    draw( x + length * sin(angle), y + length * cos(angle),length,angle + ::angle);
    draw( x + length * sin(angle), y + length * cos(angle),length,angle + -(::angle));
	}
}


void drawLine(double x, double y, double length, double angle){
	 glBegin(GL_LINES);
    glVertex3f(x,y,0.0);
    glVertex3f( x + length * sin(angle), y + length * cos(angle),0.0);
    
  glEnd();
  glFlush();


}


void main(int argc, char **argv) 
{
	std::cout << "Enter initial stem length :" ;
	std::cin >> initial;
	std::cout << "Enter decrement :" ;
	std::cin >> decrement;
	std::cout << "Enter angle :" ;
	std::cin >> angle;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  glutInitWindowPosition(100,100);
  glutInitWindowSize(500,500);
  glutCreateWindow("My First openGL Program");
  glutDisplayFunc(render);
  glutMainLoop();
}