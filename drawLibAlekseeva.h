#ifndef DRAWLIBALEKSEEVA_H
#define DRAWLIBALEKSEEVA_H
#include <GL/glut.h>
#include<cmath>
struct Figure{
    float x,y;
    float color[3];
};
void drawCat(float r,float g, float b);
void drawFl(float x,float y, float z);
void drawSun(float r=1.2,float g=1,float b=0);
void drawClaud(float r,float g,float b);
void mushroom(Figure fig);
void Tarelka(float x, float y);
void Car(float x,float y,float z=0);
void drawHome(float x, float y, float z);
void drawElka(float x,float y, float z=0);
void zabor(float x, float y);
void alien(float x, float y);
void drawBunny(float x, float y, float a);
void drawEyes();
void drawFloor2();
void drawstena2();
void drawPlintus();
void drawFloor1();
void drawLestnica(float x, float y);
void drawDira();
void Ground();
void drawCarrot(float x, float y);
void Komod();
void drawLent();
void drawLamp(float r,float g, float b);
void drawKover();
void drawKomodik();
void Vent();
void drawEl();
void drawGift(float r,float g,float b,float x,float y);
void Exit();
void Victory();
void GameOver();
#endif // DRAWLIBALEKSEEVA_H
