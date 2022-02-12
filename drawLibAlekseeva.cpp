#include "drawLibAlekseeva.h"
void drawCat(float r,float g,float b){
    glBegin(GL_TRIANGLES);
    glColor3f(.9,.3,.9);//начало тела2
    glVertex2f(-.2,-.3);
    glColor3f(.3,.3,.9);
    glVertex2f( .2,-0.3);
    glColor3f(1,.1,.4);
    glVertex2f(  0,.2);

    glColor3f(r,g,b);
    glVertex2f(.2,.3);//хвост2
    glVertex2f(.5,.4);
    glVertex2f(.0,-.1);

    glColor3f(1,.1,.4);
    glVertex2f(0,.2);//голова2
    glVertex2f(-0.2,0.5);
    glVertex2f(0.2,0.5);

    glVertex2f(-.2,.5);//ушко 1
    glVertex2f(0,.5);
    glVertex2f(-.1,.7);

    glVertex2f(0.2,0.5);//ушко 2
    glVertex2f(0,0.5);
    glVertex2f(0.1,0.7);
    glEnd();
}

void drawFl(float x,float y, float z){
    glPushMatrix();
    glScalef(x,y,z);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,.7,.1);//стебель,палка цветка
    glVertex2f(.6,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.65,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.7,1);

    glColor3f(.5,.1,.2);//лепесток 2
    glVertex2f(.7,1);
    glColor3f(.5,.1,.2);
    glVertex2f(.3,1.3);
    glColor3f(.5,.1,.2);
    glVertex2f(1.1,1.3);

    glColor3f(.5,.1,.3);//лепесток 1
    glVertex2f(.7,1);
    glColor3f(.5,.1,.3);
    glVertex2f(.1,1.2);
    glColor3f(.5,.1,.3);
    glVertex2f(1.3,1.2);

    glColor3f(0.9,0.3,0.7);//лепестки3
    glVertex2f(0.7,1);
    glVertex2f(0.1,1);
    glVertex2f(0.6,1.1);

    glVertex2f(0.7,1);
    glVertex2f(0.8,1.1);
    glVertex2f(1.3,1);


    glColor3f(.1,.7,.1);//лист 1
    glVertex2f(.62,.2);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);

    glColor3f(.1,.7,.1);//лист 2
    glVertex2f(.9,.6);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);
    glEnd();
    glPopMatrix();
}

void drawSun(float r,float g,float b){
    glPushMatrix();
    glColor3f(r,g,b);
    glBegin(GL_TRIANGLES);//луч вниз
    glVertex2f(0,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0);

    glVertex2f(0.1,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.05);

    glVertex2f(0.15,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.1);

    glVertex2f(0.15,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0.15);

    glVertex2f(0.1,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0.15);

    glVertex2f(0,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.1);

    glVertex2f(-0.05,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.05);

    glVertex2f(-0.05,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0);
    glEnd();
    glPopMatrix();
}

void drawClaud(float r,float g,float b){
    glPushMatrix();
    glColor3f(r,g,b);
    drawSun(1,1,1);
    glTranslatef(0.15,0.05,0);
    drawSun(1,1,1);
    glTranslatef(0.17,-0.02,0);
    drawSun(1,1,1);
    glTranslatef(-0.14,-0.05,0);
    drawSun(1,1,1);
    glPopMatrix();
}
void mushroom(Figure fig){
    glPushMatrix();
    glTranslatef(fig.x,fig.y,0);
    glColor3f(0.8,0.8,0.9);
    glBegin(GL_QUADS);
    glVertex2f(0.4,-0.75);
    glVertex2f(.36,-0.75);
    glVertex2f(.36,-.7);
    glVertex2f(.4,-.7);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.2,0.2);
    glVertex2f(.345,-.707);
    glVertex2f(.415,-.707);
    glVertex2f(.383,-.68);
    glEnd();
    glPopMatrix();
}

void Tarelka(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);

    //фары
    glBegin(GL_TRIANGLES);
    glColor3f(.9,.8,.2);
    glVertex2f(1.2,0);
    glVertex2f(1.25,-.05);
    glVertex2f(1.2,-.1);

    glVertex2f(0,0);
    glVertex2f(0,-0.1);
    glVertex2f(-0.05,-0.05);

    glEnd();

    //верх тарелки
    glColor3f(.6,.6,1);
    glPushMatrix();
    glTranslatef(0.6,0,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=-90;i<91;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.3*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);

    //свет
    glColor3f(.9,.8,.2);
    glVertex2f(.8,-0.3);
    glVertex2f(.4,-.3);
    glVertex2f(.3,-0.9);
    glVertex2f(.9,-.9);

    //жилой отсек тарелки
    glColor3f(.6,.6,.7);
    glVertex2f(0,-.1);
    glVertex2f(0,0);
    glVertex2f(1.2,0);
    glVertex2f(1.2,-.1);

    //низ тарелки
    glColor3f(.2,.3,.5);
    glVertex2f(0,-.1);
    glVertex2f(1.2,-.1);
    glVertex2f(.8,-0.3);
    glVertex2f(.4,-.3);

    //окошечко
    glColor3f(0,0,0);
    glVertex2f(.4,.06);
    glVertex2f(.4,0.14);
    glVertex2f(.8,0.14);
    glVertex2f(.8,.06);
    glEnd();
    glPopMatrix();
}

void Car(float x,float y,float z){
    z=0;
    glPushMatrix();
    glScalef(1.5,1.5,0);
    glTranslatef(x,y,z);
    glColor3f(0.7,0.1,0.2);
    //корпус1
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(1,0.2);
    glVertex2f(1,0);
    glEnd();

    //корпус2
    glBegin(GL_QUADS);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.2);
    glEnd();

   //колёса
    glColor3f(0.1,0.1,0.1);
    glPushMatrix();
    glTranslatef(0.2,0,0);
    glScalef(0.2,0.2,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<360;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.5*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8,0,0);
    glScalef(0.2,0.2,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<360;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.5*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    //окно
    glColor3f(0.1,0.3,0.6);
    glBegin(GL_QUADS);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.35);
    glVertex2f(0.7,0.35);
    glVertex2f(0.7,0.25);
    glEnd();
    glPopMatrix();
}

void drawHome(float x, float y, float z){
    glPushMatrix();
    glColor3f(0.35,0.1,0.35);
    glTranslatef(x,y,z);
    //основание
    glBegin(GL_QUADS);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.6,-0.3);
    glVertex2f(0,-0.3);
    glVertex2f(0,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0,-0.6);
    glVertex2f(0,-0.3);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.1,-0.5);
    glEnd();

    //2 этаж
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-0.3);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.05,-0.1);
    glEnd();

    //крыша
    glColor3f(0.125,0,0.075);
    glBegin(GL_QUADS);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.6,-0.1);
    glVertex2f(0.05,-0.1);
    glVertex2f(0,-0.35);
    glEnd();

    //дверь
    glBegin(GL_QUADS);
    glVertex2f(0.03,-0.56);
    glVertex2f(0.03,-0.4);
    glVertex2f(0.05,-0.375);
    glVertex2f(0.05,-0.53);
    glEnd();

    //okno
    glColor3f(0,0.6,1);
    glBegin(GL_QUADS);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.45,-0.4);
    glVertex2f(-0.15,-0.4);
    glVertex2f(-0.15,-0.5);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.5);
    glEnd();
    glPopMatrix();
}

void drawElka(float x,float y, float z){
    z=0;
    glPushMatrix();
    glTranslatef(x,y,z);
    glColor3f(0.15,0.05,0.05);
    glBegin(GL_QUADS);
    glVertex2f(-0.8,-0.7);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.7,-0.4);
    glVertex2f(-0.7,-0.7);
    glEnd();

    glColor3f(0.05,0.15,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9,-0.55);
    glVertex2f(-0.75,-0.3);
    glVertex2f(-0.6,-0.55);
    glEnd();

    glColor3f(0.05,0.15,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.85,-0.35);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.65,-0.35);
    glEnd();
    glPopMatrix();
}

void zabor(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.3,0.15,0.2);
    glBegin(GL_QUADS);
    glVertex2f(0.9,-0.52);
    glVertex2f(0.9,-0.35);
    glVertex2f(0.95,-0.35);
    glVertex2f(0.95,-0.52);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.9,-0.35);
    glVertex2f(0.925,-0.3);
    glVertex2f(0.95,-0.35);
    glEnd();
    glPopMatrix();
}

void alien(float x,float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.1,0.7,0.5);
    glBegin(GL_QUADS);
    glVertex2f(0,0.025);//голова
    glVertex2f(-0.1,0.1);
    glVertex2f(0.2,0.1);
    glVertex2f(0.1,0.025);

    glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.2);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,0.1);

    glVertex2f(-0.1,0.2);
    glVertex2f(-0.15,0.3);
    glVertex2f(0.25,0.3);
    glVertex2f(0.2,0.2);

    glVertex2f(-0.15,0.3);
    glVertex2f(-0.15,0.4);
    glVertex2f(0.25,0.4);
    glVertex2f(0.25,0.3);

    glVertex2f(-0.15,0.4);
    glVertex2f(-0.1,0.5);
    glVertex2f(0.2,0.5);
    glVertex2f(0.25,0.4);

    glColor3f(0,0,0);//глаза
    glVertex2f(-0.05,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0.1);
    glVertex2f(-0.05,0.1);

    glVertex2f(0.15,0.15);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,0.1);
    glVertex2f(0.15,0.1);

    glColor3f(0.1,0.7,0.5);
    glVertex2f(0.025,0.025);//шея
    glVertex2f(0.075,0.025);
    glVertex2f(0.075,-0.15);
    glVertex2f(0.025,-0.15);

    glVertex2f(-0.1,-0.15);//груд.клетка
    glVertex2f(0.2,-0.15);
    glVertex2f(0.15,-0.4);
    glVertex2f(-0.05,-0.4);

    glVertex2f(-0.05,-0.4);//животик
    glVertex2f(0.15,-0.4);
    glVertex2f(0.15,-0.6);
    glVertex2f(-0.05,-0.6);

    glVertex2f(0,-0.6);//нога1
    glVertex2f(0.05,-0.6);
    glVertex2f(0.025,-1);
    glVertex2f(-0.025,-1);

    glVertex2f(0.05,-0.6);//нога2
    glVertex2f(0.1,-0.6);
    glVertex2f(0.1255,-1);
    glVertex2f(0.075,-1);

    glVertex2f(-0.05,-0.42);//руки1
    glVertex2f(-0.05,-0.44);
    glVertex2f(-0.4,-0.38);
    glVertex2f(-0.4,-0.34);

    glVertex2f(0.15,-0.42);//
    glVertex2f(0.15,-0.44);
    glVertex2f(0.55,-0.38);
    glVertex2f(0.55,-0.34);

    glVertex2f(-0.05,-0.15);//руки2
    glVertex2f(-0.1,-0.15);
    glVertex2f(-0.12,-0.6);
    glVertex2f(-0.1,-0.6);

    glVertex2f(0.2,-0.15);//
    glVertex2f(0.25,-0.15);
    glVertex2f(0.27,-0.6);
    glVertex2f(0.25,-0.6);
    glEnd();
    glPopMatrix();
}

void drawBunny(float x,float y,float a){
    glPushMatrix();
    glTranslatef(x,y,0);
    glRotatef(0+a,0,0,1);
    glColor3f(0.7,0.7,0.7);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<360;i+=10)
        glVertex2f(0.1*sin(i*M_PI/180),0.08*cos(i*M_PI/180));
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0,0.05);
    glVertex2f(0,0.15);
    glVertex2f(0.14,0.15);
    glVertex2f(0.14,0.05);

    glVertex2f(0.02,0.05);
    glVertex2f(0.02,0.1);
    glVertex2f(0.17,0.1);
    glVertex2f(0.17,0.05);

    glVertex2f(-0.11,0.02);
    glVertex2f(-0.05,0.02);
    glVertex2f(-0.05,0.08);
    glVertex2f(-0.11,0.08);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.05,-0.04);
    glVertex2f(-0.08,-0.1);
    glVertex2f(0,-0.1);

    glVertex2f(0.02,0.12);
    glVertex2f(0,0.22);
    glVertex2f(0.04,0.22);

    glVertex2f(0.12,0.12);
    glVertex2f(0.1,0.22);
    glVertex2f(0.14,0.22);
    glEnd();

    glPushMatrix();
    glTranslatef(0.1,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.05,-0.04);
    glVertex2f(-0.08,-0.1);
    glVertex2f(0,-0.1);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    }
void drawEyes(){
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(0.1,0.75);
    glVertex2f(0.1,0.8);
    glVertex2f(0.15,0.8);
    glVertex2f(0.15,0.75);

    glVertex2f(0.25,0.75);
    glVertex2f(0.25,0.8);
    glVertex2f(0.33,0.8);
    glVertex2f(0.33,0.75);

    glColor3f(0.9,0.3,0.2);
    glVertex2f(0.1,0.775);
    glVertex2f(0.1,0.8);
    glVertex2f(0.12,0.8);
    glVertex2f(0.12,0.775);

    glVertex2f(0.27,0.775);
    glVertex2f(0.27,0.8);
    glVertex2f(0.31,0.8);
    glVertex2f(0.31,0.775);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.15,0.8);
    glVertex2f(0.15,0.75);
    glVertex2f(0.175,0.775);

    glVertex2f(0.25,0.75);
    glVertex2f(0.25,0.8);
    glVertex2f(0.225,0.775);

    glVertex2f(0.33,0.8);
    glVertex2f(0.33,0.75);
    glVertex2f(0.355,0.775);
    glEnd();
    }
void drawFloor2(){
    glPushMatrix();
    glColor3f(0.15,0.05,0.05);
    glBegin(GL_QUADS);
    glVertex2f(-1,0);
    glVertex2f(-1,0.5);
    glVertex2f(0.4,0.5);
    glVertex2f(0.4,0);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.7,0);
    glVertex2f(0.7,0.5);
    glVertex2f(1,0.5);
    glVertex2f(1,0);
    glEnd();
    glPopMatrix();
}
void drawstena2(){
    glBegin(GL_QUADS);
    glColor3f(0.3,0.15,0.2);
    glVertex2f(-1,0.5);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35,0.35,0.25);
    glVertex2f(-1,-0.5);
    glVertex2f(-1,0);
    glVertex2f(0.4,0);
    glVertex2f(0.4,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.7,-0.5);
    glVertex2f(0.7,0);
    glVertex2f(1,0);
    glVertex2f(1,-0.5);
    glEnd();
    }
void drawPlintus(){
    glColor3f(0.15,0.15,0.15);
    glBegin(GL_QUADS);
    glVertex2f(-1,-0.05);
    glVertex2f(-1,0);
    glVertex2f(0.4,0);
    glVertex2f(0.4,-0.05);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.7,-0.05);
    glVertex2f(0.7,0);
    glVertex2f(1,0);
    glVertex2f(1,-0.05);
    glEnd();
}
void drawFloor1(){
    glPushMatrix();
    glColor3f(0.15,0.05,0.05);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    glVertex2f(1,-1);
    glEnd();
    glPopMatrix();
}
void drawLestnica(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.22,0.22,0.22);
    glBegin(GL_QUADS);
    glVertex2f(0.4,0.45);
    glVertex2f(0.4,0.5);
    glVertex2f(0.7,0.5);
    glVertex2f(0.7,0.45);
    glEnd();
    glPopMatrix();
    glBegin(GL_QUADS);
    glVertex2f(0.4,-0.5);
    glVertex2f(0.4,0.5);
    glVertex2f(0.45,0.5);
    glVertex2f(0.45,-0.5);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.75,-0.5);
    glVertex2f(0.75,0.5);
    glVertex2f(0.7,0.5);
    glVertex2f(0.7,-0.5);
    glEnd();
}
void drawDira(){
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(0.1,0.5);
    glVertex2f(0.1,1);
    glVertex2f(0.39,1);
    glVertex2f(0.39,0.5);
    glEnd();
}
void Ground(){
    glColor3f(0.3,0.4,0.8);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,-1);
    glEnd();
    glColor3f(0.2,0.54,0.2);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    glVertex2f(1,-1);
    glEnd();
 }
float fun(float x){
     float y=0.0;
     if(x>0)
        y=2*x-10;
      else if(x<0)
        y=2* fabs(x)-1;
      else
        y=0;
      return y;

    }

void drawGraf(){
    glColor3f(0.2,0.5,0.8);
    glBegin(GL_LINES);
    glVertex2f(-6,0);
    glVertex2f(6,0);

    glColor3f(0.2,0.8,0.5);
    glVertex2f(0,6);
    glVertex2f(0,-6);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINE_STRIP);
    for(float i=-2.0;i<5.0;i+=0.1){
        glVertex2f(i*0.5,-0.23*(i*i)+i);//1 график
        glVertex2f(i,-0.1*i*i+2*i+1); //2график
        glVertex2f(i,-2*i*i+3*i-1);   //3 график
        glVertex2f(i,(-3+i)*(-3*i)+2*i+5); //4 график
    glVertex2f(i,fun(i));
    glEnd();
    }
}
void drawCarrot(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.8,0.45,0.35);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,0);
    glVertex2f(0.05,0.075);
    glVertex2f(0.1,0.05);

    glColor3f(0.2,0.7,0.2);
    glVertex2f(0.05,0.075);
    glVertex2f(0.056,0.12);
    glVertex2f(0.06,0.074);

    glVertex2f(0.06,0.074);
    glVertex2f(0.07,0.15);
    glVertex2f(0.076,0.066);

    glVertex2f(0.076,0.068);
    glVertex2f(0.08,0.12);
    glVertex2f(0.1,0.05);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0,0);
    glVertex2f(0.05,0.075);
    glVertex2f(0.05,0.075);
    glVertex2f(0.1,0.05);
    glVertex2f(0.1,0.05);
    glVertex2f(0,0);
    glEnd();
    glPopMatrix();
}
void Komod(){
    glPushMatrix();
    glColor3f(0.22,0.19,0.19);
    glBegin(GL_QUADS);
    glVertex2f(-0.5,0.45);
    glVertex2f(-0.5,0.75);
    glVertex2f(-0.2,0.75);
    glVertex2f(-0.2,0.45);
    glEnd();
    glPopMatrix();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.5,0.75);
    glVertex2f(-0.2,0.75);

    glVertex2f(-0.5,0.45);
    glVertex2f(-0.2,0.45);

    glVertex2f(-0.5,0.75);
    glVertex2f(-0.5,0.45);

    glVertex2f(-0.2,0.75);
    glVertex2f(-0.2,0.45);

    glVertex2f(-0.5,0.65);
    glVertex2f(-0.2,0.65);

    glVertex2f(-0.5,0.55);
    glVertex2f(-0.2,0.55);

    glVertex2f(-0.4,0.7);
    glVertex2f(-0.3,0.7);

    glVertex2f(-0.4,0.5);
    glVertex2f(-0.3,0.5);

    glVertex2f(-0.4,0.6);
    glVertex2f(-0.3,0.6);
    glEnd();
}
void drawLent(){
    glBegin(GL_LINES);
    glVertex2f(-1,0.9);
    glVertex2f(1,0.9);
    glEnd();
}
void drawLamp(float r,float g, float b){
    glColor3f(r,g,b);
    glBegin(GL_QUADS);
    glVertex2f(1,0.897);
    glVertex2f(1,0.86);
    glVertex2f(0.97,0.86);
    glVertex2f(0.97,0.897);
    glEnd();

}
void drawKover(){
    glColor3f(0.6,0.2,0.2);
    glBegin(GL_QUADS);
    glVertex2f(-0.95,0.2);
    glVertex2f(-0.95,0.4);
    glVertex2f(0.38,0.4);
    glVertex2f(0.38,0.2);
    glEnd();
}
void drawKomodik(){
    glColor3f(0.22,0.19,0.19);
    glBegin(GL_QUADS);
    glVertex2f(0.05,-1);
    glVertex2f(0.05,-0.7);
    glVertex2f(0.35,-0.7);
    glVertex2f(0.35,-1);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.05,-0.7);
    glVertex2f(0.35,-0.7);

    glVertex2f(0.05,-0.8);
    glVertex2f(0.35,-0.8);

    glVertex2f(0.05,-0.9);
    glVertex2f(0.35,-0.9);

    glVertex2f(0.05,-0.7);
    glVertex2f(0.05,-1);

    glVertex2f(0.35,-0.7);
    glVertex2f(0.35,-1);

    glVertex2f(0.15,-0.75);
    glVertex2f(0.25,-0.75);

    glVertex2f(0.15,-0.85);
    glVertex2f(0.25,-0.85);

    glVertex2f(0.15,-0.95);
    glVertex2f(0.25,-0.95);

    glEnd();
}
void Vent(){
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.5);
    glVertex2f(-0.25,-0.39);
    glVertex2f(-0.25,-0.37);
    glVertex2f(0,-0.37);
    glVertex2f(0,-0.39);

    glVertex2f(-0.27,-0.37);
    glVertex2f(-0.25,-0.37);
    glVertex2f(-0.25,-0.5);
    glVertex2f(-0.27,-0.5);

    glVertex2f(0.02,-0.37);
    glVertex2f(0,-0.37);
    glVertex2f(0,-0.5);
    glVertex2f(0.02,-0.5);

    glColor3f(0,0,0);
    glVertex2f(-0.25,-0.39);
    glVertex2f(0,-0.39);
    glVertex2f(0,-0.5);
    glVertex2f(-0.25,-0.5);
    glEnd();
}
void drawEl(){
    glColor3f(0.05,0.15,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.95,-0.6);
    glVertex2f(-0.75,-0.2);
    glVertex2f(-0.55,-0.6);

    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.75,-0.1);
    glVertex2f(-0.6,-0.4);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.77,-0.19,0);
    glColor3f(1.2,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,0.07);
    glVertex2f(0.07,0.13);
    glVertex2f(0.07,0.07);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.07,0.09);
    glVertex2f(0.1,0.05);
    glVertex2f(0.05,0.05);

    glVertex2f(0,0.05);
    glVertex2f(-0.03,0.09);
    glVertex2f(0.02,0.09);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3f(0.9,0.3,0.3);
    glVertex2f(-0.83,-0.25);
    glVertex2f(-0.67,-0.27);
    glColor3f(0.8,0.8,0.8);
    glVertex2f(-0.87,-0.35);
    glVertex2f(-0.63,-0.35);
    glColor3f(0.9,0.3,0.3);
    glVertex2f(-0.88,-0.45);
    glVertex2f(-0.61,-0.49);
    glColor3f(0.8,0.8,0.8);
    glVertex2f(-0.61,-0.49);
    glVertex2f(-0.91,-0.53);
    glEnd();
   }
void drawGift(float r,float g,float b,float x,float y){
    glPushMatrix();//gift1
    glTranslatef(x,y,0);
    glBegin(GL_QUADS);
    glColor3f(r,g,b);
    glVertex2f(0,0);
    glVertex2f(0,0.1);
    glVertex2f(0.12,0.1);
    glVertex2f(0.12,0);
    glColor3f(0.7,0.2,0.2);
    glVertex2f(-0.015,0.1);
    glVertex2f(-0.015,0.13);
    glVertex2f(0.135,0.13);
    glVertex2f(0.135,0.1);
    glColor3f(1,1,1);
    glVertex2f(0.08,0.13);
    glVertex2f(0.04,0.13);
    glVertex2f(0.04,0);
    glVertex2f(0.08,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.06,0.13);
    glVertex2f(0.02,0.16);
    glVertex2f(0.05,0.18);

    glVertex2f(0.06,0.13);
    glVertex2f(0.1,0.16);
    glVertex2f(0.07,0.18);
    glEnd();
    glPopMatrix();
}
void Exit(){
    glColor3f(0.32,0.2,0.1);
    glBegin(GL_QUADS);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.8,-0.08);
    glVertex2f(1,-0.08);
    glVertex2f(1,-0.5);
    glColor3f(0.8,0.8,0);
    glVertex2f(0.8,-0.3);
    glVertex2f(0.8,-0.35);
    glVertex2f(0.85,-0.35);
    glVertex2f(0.85,-0.3);
    glEnd();


}
void Victory(){
    glColor3f(0.2,0.8,0.8);
    glBegin(GL_QUADS);
    glVertex2f(-0.7,0.1);
    glVertex2f(-0.6,0.1);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.6,-0.2);

    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.52,-0.18);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.4,-0.12);

    glVertex2f(-0.4,-0.12);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.28,-0.18);
    glVertex2f(-0.3,-0.2);

    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.2,0.1);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.2,-0.2);

    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.1,-0.08);
    glVertex2f(0,-0.08);
    glVertex2f(0,-0.2);

    glVertex2f(-0.1,-0.05);
    glVertex2f(-0.1,0);
    glVertex2f(0,0);
    glVertex2f(0,-0.05);

    glVertex2f(0.08,-0.2);
    glVertex2f(0.08,0);
    glVertex2f(0.12,0);
    glVertex2f(0.12,-0.2);

    glVertex2f(0.12,-0.06);
    glVertex2f(0.12,-0.08);
    glVertex2f(0.24,-0.08);
    glVertex2f(0.24,-0.06);

    glVertex2f(0.2,-0.08);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.24,-0.2);
    glVertex2f(0.24,-0.08);
    glEnd();
}
void GameOver(){
    glColor3f(0.9,0.2,0.2);
    glBegin(GL_LINES);
    glVertex2f(-1,1);
    glVertex2f(1,-1);
    glVertex2f(1,1);
    glVertex2f(-1,-1);
    glEnd();
}
