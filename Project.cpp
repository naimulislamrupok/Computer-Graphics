#include<graphics.h>
#include<iostream>

using namespace std;

//Functions declaration
void menu();
void nameId();
void star();
void man();
void car();
void house();
void nationalFlag();
void emoji();


//main function
int main()
{
    while(1)
    {
        menu();
    }
}


//menu
void menu()
{

    char R;
    cout << "   ***Menu***" << endl;
    cout << "-------------------" << endl;
    cout << "-------------------" << endl;
    cout << "1. Star" << endl;
    cout << "2. Man" << endl;
    cout << "3. Car" << endl;
    cout << "4. House" << endl;
    cout << "5. National Flag" << endl;
    cout << "6. Emoji" << endl;
    cout << "-------------------"  << endl;
    cout << "Your option please: ";
    cin >> R;


    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1000,800,"Rupok");

    switch(R)
    {
    case '0':
        cout << ".........."<< endl;;
        break;
    case '1':
        star();
        break;
    case '2':
        man();
        break;
    case '3':
        car();
        break;
    case '4':
        house();
        break;
    case '5':
        nationalFlag();
        break;
    case '6':
        emoji();
        break;

    default:
        system(" ");
        closegraph();
        main();
        break;
    }

    getch();
    closegraph();
    system("");
}


//name
void nameId()
{
    //name
    //--------------------------------
    setcolor(YELLOW);
    //circle();
    //R
    line(50,49,50,71);
    arc(52,56,270,90,7);
    line(50,62,58,70);
    //U
    ellipse(72,50,180,0,7,22);
    //P
    line(85,50,85,70);
    arc(87,56,270,90,6);
    //0
    ellipse(102,60,0,360,6,11);
    //k
    line(113,50,113,70);
    line(113,60,120,50);
    line(113,60,120,70);




    //id
    //--------------------------------
    arc(52,101,75,279,12);//c
    //s
    arc(65,96,40,260,7);
    arc(63,107,220,95,7);
    //E
    line(77,90,77,110);
    line(77,90,87,90);
    line(77,110,87,110);
    line(77,100,84,100);
    //2
    arc(94,97,270,90,7);
    line(94,104,98,112);
    //0
    ellipse(112,102,0,360,7,11);
    ellipse(129,102,0,360,7,11);
    //1
    line(142,92,142,112);
    ellipse(154,102,0,360,7,11);//0
    line(165,92,165,112);//1
    circle(175,96,5);
    arc(172,102,270,90,11);//9
    ellipse(193,102,0,360,7,11);//0
    ellipse(210,102,0,360,7,11);//0
    line(220,92,230,92);//1
    line(232,92,220,112);

}

//star
void star()
{
    nameId();

    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1, YELLOW);
    floodfill(520,380,BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);

    setcolor(BLUE);
    line(520,150,380,400);
    line(520,150,660,400);
    line(380,400,660,400);

    setfillstyle(1,YELLOW);
    floodfill(520, 380, BLUE);

    line(380,230,660,230);
    line(380,230,520,480);
    line(660,230,520,480);

    floodfill(390,231,BLUE);
    floodfill(655,231,BLUE);
    floodfill(520,475,BLUE);
}


//man
void man()
{
    nameId();


    setcolor(WHITE);
    line(0,450,1000,450);
    circle(500,200,50);
    line(500,250,480,350);
    line(500,250,520,350);
    line(480,350,520,350);

    line(500,250,430,340);
    line(500,250,570,340);

    line(500,350,480,450);
    line(500,350,520,450);


    // line(490,350,490,450);
    // line(510,350,510,450);

    setfillstyle(1,WHITE);
    //floodfill(,RED);


}

//car
void car()
{
    nameId();

    setcolor(WHITE);
    line(200,300,200,400);
    line(200,400,250,400);
    line(250,400,260,380);
    line(260,380,340,380);
    line(340,380,350,400);
    line(350,400,450,400);
    line(450,400,460,380);
    line(460,380,540,380);
    line(540,380,550,400);
    line(550,400,650,400);
    line(650,400,630,300);
    line(630,300,570,300);
    line(570,300,540,220);
    line(540,220,260,220);
    line(260,220,220,300);
    line(220,300,200,300);
    setfillstyle(1,BLUE);
    floodfill(262,304,WHITE);
    setcolor(RED);
    circle(300,420,37);
    circle(500,420,37);
    setfillstyle(1,WHITE);
    floodfill(304,422,RED);
    floodfill(504,422,RED);
    setcolor(WHITE);
    line(400,220,400,300);
    setfillstyle(1,WHITE);
    setcolor(RED);
    rectangle(270,230,370,295);
    rectangle(430,230,530,295);
    setfillstyle(1,GREEN);
    floodfill(272,234,RED);
    floodfill(432,234,RED);

}

//house
void house()
{


    setcolor(BROWN);
    int arr[10]= {200,200,350,200,410,300,260,300,200,200};
    int ar[8]= {135,300,135,380,265,380,265,300};
    int a[6]= {265,380,400,350,400,300};
    drawpoly(5,arr);
    drawpoly(3,a);
    drawpoly(4,ar);
    rectangle(175,380,215,320);
    line(200,200,130,305);
    line(202,202,135,303);
    line(0,340,135,340);
    line(400,340,700,340);
    circle(500,100,40);


    setfillstyle(1,BROWN);
    floodfill(200,201,6);
    setfillstyle(6,BROWN);
    floodfill(300,250,6);
    setfillstyle(1,14);
    floodfill(200,210,6);
    setfillstyle(1,14);
    floodfill(300,310,6);
    setfillstyle(9,12);
    floodfill(200,330,6);
    setfillstyle(1,GREEN);
    floodfill(200,400,6);
    setfillstyle(1,CYAN);
    floodfill(100,100,6);
    setfillstyle(1,14);
    floodfill(500,100,6);


    nameId();
}

//National Flag
void nationalFlag()
{
    nameId();

    setcolor(GREEN);
	rectangle(150,150,320,250);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(151,151,GREEN);

	setcolor(WHITE);
	rectangle(140,140,150,400);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(141,141,WHITE);

	setcolor(RED);
	circle(230,200,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(231,201,RED);

}



void emoji()
{
    nameId();

    setcolor(WHITE);
    circle(300,300,160);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(274,284,WHITE);

    setcolor(WHITE);
    circle(300,300,161);
    circle(300,300,162);
    circle(300,300,163);
    circle(300,300,164);

    setcolor(BLACK);
    circle(240,260,45);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(230,260,BLACK);

    setcolor(WHITE);
    ellipse(240,325,0,360,4,10);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(240,325,WHITE);


    setcolor(BLACK);
    circle(240,260,45);
    circle(240,260,46);
    circle(240,260,47);


    setcolor(BLACK);
    ellipse(240,280,0,360,20,25);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(240,280,BLACK);


    setcolor(BLACK);
    circle(360,260,45);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360,260,BLACK);

    setcolor(WHITE);
    ellipse(360,325,0,360,4,10);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(360,325,WHITE);



    setcolor(BLACK);
    circle(360,260,45);
    circle(360,260,46);
    circle(360,260,47);


    setcolor(BLACK);
    ellipse(360,280,0,360,20,25);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360,280,BLACK);

    setcolor(WHITE);
    ellipse(240,325,0,360,4,10);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(240,325,WHITE);

    setcolor(BLACK);
    ellipse(300,390,0,180,70,40);
    ellipse(300,390,0,180,69,39);
    ellipse(300,390,0,180,68,38);
    ellipse(300,390,0,180,67,37);
    ellipse(300,390,0,180,66,36);
}


