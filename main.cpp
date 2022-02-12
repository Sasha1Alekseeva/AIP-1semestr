#include <GL/glut.h>
#include<cmath>
#include<drawLibAlekseeva.h>

float pos_x=-0.85, pos_y=0.25;
bool isRight =true;
float angle=0.0;
float quadX=0, quadY=0;
int countQuad=0;
bool isEye=false;
bool isCarrot[8]={false,false,false,false,false,false,false,false};
int count=0;
bool isVictory=false;
bool isHouse=true;
bool isOver=false;

void processKeys(unsigned char key, int x, int y){

        if(key==97){
        pos_x=pos_x - 0.1;
        }
        if(key==100){
            pos_x=pos_x + 0.1;
        }
        if(key==119){
            pos_y=pos_y + 0.1;
        }
        if(key==115){
            pos_y=pos_y - 0.1;
        }

        if(key==113){
            angle= angle + 1;
        }

        if(key==101){
            angle=angle - 1;
        }

        if(key == 13){
            exit(0); // close app
        }
    if((pos_x>=0.1)&(pos_x<=0.2)&&(pos_y>=0.2)&&(pos_y<=0.3)){
        isEye=true;
    }
    if((pos_x<=1)&(pos_x>=0.95)&(pos_y<=1)&(pos_y>=-1)
      ||(pos_x>=-1)&(pos_x<=-0.95)&(pos_y<=1)&(pos_y>=-1)
      ||(pos_x>=-1.05)&(pos_x<=0.4)&(pos_y>=-0.05)&(pos_y<=0.05)
      ||(pos_x>=0.7)&(pos_x<=1)&(pos_y>=-0.05)&(pos_y<=0.05)
      ||(pos_x>=-1)&(pos_x<=1)&(pos_y>=0.95)&(pos_y<=1.05)){
        isOver=true;
        pos_x=-0.85;
        pos_y=0.25;
    }
    if((pos_x>=0.1)&&(pos_x<=0.4)&&(pos_y<=-0.65)&&(pos_y>=-1)){
        isOver=true;
        pos_x=-0.85;
        pos_y=0.25;
    }
    if((pos_x>=-0.92)&(pos_x<=-0.78)&(pos_y>=-0.65)&(pos_y<=-0.5)){
        isCarrot[0]=true;
    }
    if((pos_x>=-0.25)&(pos_x<=-0.15)&(pos_y>=-0.45)&(pos_y<=-0.4)){
        isCarrot[1]=true;
    }
    if((pos_x>=-0.45)&(pos_x<=-0.35)&(pos_y>=0.7)&(pos_y<=0.8)){
        isCarrot[2]=true;
    }
    if((pos_x>=0.1)&(pos_x<=0.2)&(pos_y>=0.25)&(pos_y<=0.35)){
        isCarrot[3]=true;
    }
    if((pos_x>=0.75)&(pos_x<=0.85)&(pos_y>=0.35)&(pos_y<=0.45)){
        isCarrot[4]=true;
    }
    if((pos_x>=-0.15)&(pos_x<=0.05)&(pos_y>=-0.95)&(pos_y<=-0.85)){
        isCarrot[5]=true;
    }
    if((pos_x>=0.8)&(pos_x<=0.86)&(pos_y>=-0.65)&(pos_y<=-0.55)){
        isCarrot[6]=true;
    }
    if((isCarrot[0])&&(isCarrot[1])&&(isCarrot[2])&&(isCarrot[3])&&(isCarrot[4])&&(isCarrot[5])&&(isCarrot[6])){
        count=7;
    }
    if((count>=7)){
        isVictory=true;
        if((pos_x<=1)&&(pos_x>=0.8)&&(pos_y>=-0.45)&&(pos_y<=-0.1)){
            isHouse=false;
        }
    }
    glutPostRedisplay(); // отрисовка
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить
    if(isHouse){
    drawFloor2();
    drawstena2();
    drawPlintus();
    drawFloor1();
    drawKover();

    for(int i=0;i<10;i++){
        drawLestnica(0,-0.1*i);
    }

    drawDira();

    if(isEye){
        drawEyes();
    }

    Komod();
    Vent();
    drawEl();

    if(!isCarrot[0]){
    drawCarrot(-0.93,-0.6);
    }

    drawGift(0.9,0.2,0.2,-0.9,-0.6);
    glPushMatrix();
    glScalef(0.7,0.7,0);
    drawGift(0.2,0.2,0.9,-1,-0.9);
    glPopMatrix();
    Exit();
    drawBunny(pos_x,pos_y,0);
    drawLent();
    drawKomodik();
    glPushMatrix();
    for(int i=0;i<=12;i++){
        glTranslatef(-0.2,0,0);
        drawLamp(0.08*i,0.2*i,0.08*i);
    }
    glPopMatrix();

    if(!isCarrot[1]){
    drawCarrot(-0.2,-0.5);
    }
    if(!isCarrot[2]){
    drawCarrot(-0.4,0.75);
    }
    if(!isCarrot[3]){
    drawCarrot(0.15,0.3);
    }
    if(!isCarrot[4]){
    drawCarrot(0.8,0.4);
    }
    if(!isCarrot[5]){
    drawCarrot(-0.1,-0.9);
    }
    if(!isCarrot[6]){
    drawCarrot(0.85,-0.6);
    }
    }
    if(isVictory){
    Victory();
    }
    if(isOver){
        GameOver();
    }
    if(!isHouse){
        Ground();

        for(int j=0;j<20;j++){
                zabor(-0.1*j,0);
            }
        glPushMatrix();
        glTranslatef(0,0.7,0);
        drawSun(1,1.2,0);
        glPopMatrix();
        glPushMatrix();
        for (int i =0;i<2;i++){
            glTranslatef(-0.2*i,0.3,0);
            drawClaud(1,1,1);
            }
         glPopMatrix();
         drawHome(0,0,0);
         drawBunny(pos_x,pos_y,0);
         Victory();
    }

 // эта функция должна здесь жить
    glutSwapBuffers();

}


int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);

    glutKeyboardFunc(processKeys);

    glutMainLoop();
    return 0;
}

