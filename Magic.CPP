// Program to perform Magic Trick
//THE MAGICIAN
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
main()
{
clrscr();
_setcursortype(_NOCURSOR);
int x, x2=6, lo, di;
int x3=5, x4=3, x5=4;
char cho, col, col2, col3;
randomize();
clrscr();
sleep(2);
textcolor(15);
gotoxy(44,13);cprintf("X");
delay(100);
textcolor(0);
gotoxy(44,13);cprintf(" ");
textcolor(15);
gotoxy(42,13);cprintf("O");
delay(100);
textcolor(0);
gotoxy(42,13);cprintf(" ");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(100);
textcolor(0);
gotoxy(41,13);cprintf(" ");
textcolor(15);
gotoxy(40,13);cprintf("I");
delay(100);
textcolor(0);
gotoxy(40,13);cprintf(" ");
textcolor(15);
gotoxy(39,13);cprintf("R");
delay(100);
textcolor(0);
gotoxy(39,13);cprintf(" ");
textcolor(15);
gotoxy(38,13);cprintf("N");
delay(100);
textcolor(0);
gotoxy(38,13);cprintf(" ");
textcolor(15);
gotoxy(37,13);cprintf("E");
delay(100);
textcolor(0);
gotoxy(37,13);cprintf(" ");
delay(100);
textcolor(15);
gotoxy(37,13);cprintf("E");
delay(100);
textcolor(8);
gotoxy(37,13);cprintf("E");
textcolor(15);
gotoxy(38,13);cprintf("N");
delay(100);
textcolor(8);
gotoxy(38,13);cprintf("N");
textcolor(15);
gotoxy(39,13);cprintf("R");
delay(100);
textcolor(8);
gotoxy(39,13);cprintf("R");
textcolor(15);
gotoxy(40,13);cprintf("I");
delay(100);
textcolor(8);
gotoxy(40,13);cprintf("I");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(100);
textcolor(8);
gotoxy(41,13);cprintf("C");
textcolor(15);
gotoxy(42,13);cprintf("O");
delay(100);
textcolor(8);
gotoxy(42,13);cprintf("O");
textcolor(15);
gotoxy(44,13);cprintf("X");
delay(100);
textcolor(8);
gotoxy(44,13);cprintf("X");
sleep(2);
clrscr();
textcolor(15);
gotoxy(35,13);cprintf("T");
delay(100);
gotoxy(36,13);cprintf("H");
textcolor(8);
gotoxy(35,13);cprintf("T");
delay(100);
gotoxy(36,13);cprintf("H");
textcolor(15);
gotoxy(37,13);cprintf("E");
delay(100);
gotoxy(39,13);cprintf("M");
textcolor(8);
gotoxy(37,13);cprintf("E");
delay(100);
gotoxy(39,13);cprintf("M");
textcolor(15);
gotoxy(40,13);cprintf("%c", x2);
delay(100);
gotoxy(41,13);cprintf("G");
textcolor(8);
gotoxy(40,13);cprintf("%c", x2);
delay(100);
gotoxy(41,13);cprintf("G");
textcolor(15);
gotoxy(42,13);cprintf("I");
delay(100);
gotoxy(43,13);cprintf("C");
textcolor(8);
gotoxy(42,13);cprintf("I");
delay(100);
gotoxy(43,13);cprintf("C");
textcolor(15);
gotoxy(44,13);cprintf("I");
delay(100);
gotoxy(45,13);cprintf("%c", x3);
textcolor(8);
gotoxy(44,13);cprintf("I");
delay(100);
gotoxy(45,13);cprintf("%c", x3);
textcolor(15);
gotoxy(46,13);cprintf("N");
delay(100);
textcolor(8);
gotoxy(46,13);cprintf("N");
delay(100);
gotoxy(35,13);cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
gotoxy(39,13);cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
sleep(2);
clrscr();
for(x=1; x<=50; x++)
  {
  textcolor(8);
  gotoxy(random(80), random(25));cprintf("%c", x2);
  delay(10);
  gotoxy(random(80), random(25));cprintf("%c", x3);
  delay(10);
  textcolor(4);
  gotoxy(random(80), random(25));cprintf("%c", x4);
  delay(10);
  gotoxy(random(80), random(25));cprintf("%c", x5);
  delay(10);
  }
intro:
clrscr();
textcolor(8);
gotoxy(1,1);cprintf(" nter");
gotoxy(73,25);cprintf(" redits");
gotoxy(68,1);cprintf("THE M%cGICI%cN", x2, x3);
gotoxy(1,25);cprintf("Best viewed in maximize window");
textcolor(15);
gotoxy(1,1);cprintf("E");
gotoxy(73,25);cprintf("C");
cho=getch();

if(cho=='e' || cho=='E')
{
clrscr();
for(lo=28; lo<=53; lo++)
  {
  textcolor(8);
  gotoxy(lo,14);cprintf("ÛÛ");
  }

for(lo=0, di=28; lo<=100; lo+=4, di++)
  {
  textcolor(15);
  gotoxy(28,12);cprintf("initializing trick...");
  gotoxy(28,13);cprintf("%d%", lo);
  gotoxy(di,14);cprintf("ÛÛ");
  delay(200);
  }
sleep(2);
refresh:
clrscr();
textcolor(8);
gotoxy(35,1);cprintf("THE M%cGICI%cN", x2, x3);
textcolor(15);
gotoxy(27,2);cprintf("ÚÄÄÄÄÄÄ¿");
gotoxy(27,3);cprintf("³      ³");
gotoxy(27,4);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,5);cprintf("³      ³");
gotoxy(27,6);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,7);cprintf("³      ³");
gotoxy(27,8);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,9);cprintf("³      ³");
gotoxy(27,10);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,11);cprintf("³      ³");
gotoxy(27,12);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,13);cprintf("³      ³");
gotoxy(27,14);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(27,15);cprintf("³      ³");
gotoxy(27,16);cprintf("³      ³");
gotoxy(27,17);cprintf("³      ³");
gotoxy(27,18);cprintf("ÀÄÄÄÄÄÄÙ");

gotoxy(37,2);cprintf("ÚÄÄÄÄÄÄ¿");
gotoxy(37,3);cprintf("³      ³");
gotoxy(37,4);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,5);cprintf("³      ³");
gotoxy(37,6);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,7);cprintf("³      ³");
gotoxy(37,8);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,9);cprintf("³      ³");
gotoxy(37,10);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,11);cprintf("³      ³");
gotoxy(37,12);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,13);cprintf("³      ³");
gotoxy(37,14);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(37,15);cprintf("³      ³");
gotoxy(37,16);cprintf("³      ³");
gotoxy(37,17);cprintf("³      ³");
gotoxy(37,18);cprintf("ÀÄÄÄÄÄÄÙ");

gotoxy(47,2);cprintf("ÚÄÄÄÄÄÄ¿");
gotoxy(47,3);cprintf("³      ³");
gotoxy(47,4);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,5);cprintf("³      ³");
gotoxy(47,6);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,7);cprintf("³      ³");
gotoxy(47,8);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,9);cprintf("³      ³");
gotoxy(47,10);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,11);cprintf("³      ³");
gotoxy(47,12);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,13);cprintf("³      ³");
gotoxy(47,14);cprintf("ÃÄÄÄÄÄÄ´");
gotoxy(47,15);cprintf("³      ³");
gotoxy(47,16);cprintf("³      ³");
gotoxy(47,17);cprintf("³      ³");
gotoxy(47,18);cprintf("ÀÄÄÄÄÄÄÙ");
textcolor(8);
gotoxy(1,25);cprintf(" efresh");
textcolor(15);
gotoxy(1,25);cprintf("R");
gotoxy(35,20);cprintf("Pick a card!");
gotoxy(32,21);cprintf("Enter which column!");
textcolor(7);
gotoxy(33,17);cprintf("1");
gotoxy(43,17);cprintf("2");
gotoxy(53,17);cprintf("3");

textcolor(4);
x=3;
gotoxy(28,3);cprintf("K%c", x);
gotoxy(28,7);cprintf("3%c", x);
gotoxy(28,9);cprintf("Q%c", x);
gotoxy(28,11);cprintf("6%c", x);
gotoxy(28,13);cprintf("J%c", x);
gotoxy(28,15);cprintf("9%c", x);
textcolor(8);
x=5;
gotoxy(48,7);cprintf("A%c", x2);
gotoxy(28,5);cprintf("4%c", x2);
gotoxy(38,3);cprintf("2%c", x);
gotoxy(38,5);cprintf("J%c", x);
gotoxy(38,7);cprintf("K%c", x);
gotoxy(38,9);cprintf("8%c", x);
gotoxy(38,13);cprintf("3%c", x);
gotoxy(38,15);cprintf("5%c", x);

textcolor(4);
x=4;
gotoxy(38,11);cprintf("7%c", x);
gotoxy(48,3);cprintf("2%c", x);
gotoxy(48,5);cprintf("9%c", x);
gotoxy(48,9);cprintf("J%c", x);
gotoxy(48,11);cprintf("Q%c", x);
gotoxy(48,13);cprintf("5%c", x);
gotoxy(48,15);cprintf("6%c", x);
back:
col=getch();
if(col=='1')
  {
  textcolor(8);
  gotoxy(33,23);cprintf("shuffling cards...");
  sleep(2);
  textcolor(15);
  gotoxy(35,20);cprintf("Where is it?");
  gotoxy(33,23);cprintf("                  ");
  textcolor(4);
  x=4;
  gotoxy(28,15);cprintf("7%c", x);
  gotoxy(28,3);cprintf("2%c", x);
  gotoxy(38,3);cprintf("9%c", x);
  gotoxy(28,5);cprintf("J%c", x);
  gotoxy(38,5);cprintf("Q%c", x);
  gotoxy(48,5);cprintf("5%c", x);
  gotoxy(28,7);cprintf("6%c", x);

  textcolor(4);
  x=3;
  gotoxy(38,7);cprintf("K%c", x);
  gotoxy(28,9);cprintf("3%c", x);
  gotoxy(38,9);cprintf("Q%c", x);
  gotoxy(48,9);cprintf("6%c", x);
  gotoxy(28,11);cprintf("J%c", x);
  gotoxy(38,11);cprintf("9%c", x);

  textcolor(8);
  x=5;
  gotoxy(48,3);cprintf("A%c", x2);
  gotoxy(48,7);cprintf("4%c", x2);
  gotoxy(48,11);cprintf("2%c", x);
  gotoxy(28,13);cprintf("J%c", x);
  gotoxy(38,13);cprintf("K%c", x);
  gotoxy(48,13);cprintf("8%c", x);
  gotoxy(38,15);cprintf("3%c", x);
  gotoxy(48,15);cprintf("5%c", x);
  back2:
  col2=getch();

  if(col2=='1')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(38,11);cprintf("7%c", x);
    gotoxy(38,7);cprintf("2%c", x);
    gotoxy(48,11);cprintf("9%c", x);
    gotoxy(48,7);cprintf("J%c", x);
    gotoxy(28,13);cprintf("Q%c", x);
    gotoxy(38,3);cprintf("5%c", x);
    gotoxy(28,9);cprintf("6%c", x);

    textcolor(4);
    x=3;
    gotoxy(38,13);cprintf("K%c", x);
    gotoxy(38,9);cprintf("3%c", x);
    gotoxy(48,13);cprintf("Q%c", x);
    gotoxy(28,5);cprintf("6%c", x);
    gotoxy(48,9);cprintf("J%c", x);
    gotoxy(28,15);cprintf("9%c", x);

    textcolor(8);
    x=5;
    gotoxy(28,3);cprintf("A%c", x2);
    gotoxy(48,3);cprintf("4%c", x2);
    gotoxy(38,5);cprintf("2%c", x);
    gotoxy(28,11);cprintf("J%c", x);
    gotoxy(38,15);cprintf("K%c", x);
    gotoxy(48,5);cprintf("8%c", x);
    gotoxy(48,15);cprintf("3%c", x);
    gotoxy(28,7);cprintf("5%c", x);
    back3:
    col3=getch();

    if(col3=='2')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("3%c", x);
      }
    else if(col3=='3')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("J%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else
      goto back3;
    }
  else if(col2=='2')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(48,15);cprintf("7%c", x);
    gotoxy(48,11);cprintf("2%c", x);
    gotoxy(38,7);cprintf("9%c", x);
    gotoxy(28,13);cprintf("J%c", x);
    gotoxy(48,7);cprintf("Q%c", x);
    gotoxy(38,3);cprintf("5%c", x);
    gotoxy(38,13);cprintf("6%c", x);

    textcolor(4);
    x=3;
    gotoxy(28,9);cprintf("K%c", x);
    gotoxy(48,13);cprintf("3%c", x);
    gotoxy(38,9);cprintf("Q%c", x);
    gotoxy(28,5);cprintf("6%c", x);
    gotoxy(28,15);cprintf("J%c", x);
    gotoxy(48,9);cprintf("9%c", x);

    textcolor(8);
    x=5;
    gotoxy(28,3);cprintf("A%c", x2);
    gotoxy(48,3);cprintf("4%c", x2);
    gotoxy(38,5);cprintf("2%c", x);
    gotoxy(38,15);cprintf("J%c", x);
    gotoxy(28,11);cprintf("K%c", x);
    gotoxy(48,5);cprintf("8%c", x);
    gotoxy(38,11);cprintf("3%c", x);
    gotoxy(28,7);cprintf("5%c", x);
    back4:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("K%c", x);
      }
    else if(col3=='2')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("Q%c", x);
      }
    else if(col3=='3')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("9%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else
      goto back4;
    }
  else if(col2=='3')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(48,15);cprintf("7%c", x);
    gotoxy(48,11);cprintf("2%c", x);
    gotoxy(28,3);cprintf("9%c", x);
    gotoxy(28,13);cprintf("J%c", x);
    gotoxy(38,3);cprintf("Q%c", x);
    gotoxy(48,7);cprintf("5%c", x);
    gotoxy(38,13);cprintf("6%c", x);

    textcolor(4);
    x=3;
    gotoxy(48,3);cprintf("K%c", x);
    gotoxy(48,13);cprintf("3%c", x);
    gotoxy(28,5);cprintf("Q%c", x);
    gotoxy(38,9);cprintf("6%c", x);
    gotoxy(28,15);cprintf("J%c", x);
    gotoxy(38,5);cprintf("9%c", x);

    textcolor(8);
    x=5;
    gotoxy(38,7);cprintf("A%c", x2);
    gotoxy(28,9);cprintf("4%c", x2);
    gotoxy(48,9);cprintf("2%c", x);
    gotoxy(38,15);cprintf("J%c", x);
    gotoxy(48,5);cprintf("K%c", x);
    gotoxy(28,11);cprintf("8%c", x);
    gotoxy(28,7);cprintf("3%c", x);
    gotoxy(38,11);cprintf("5%c", x);
    back5:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("4%c", x2);
      }
    else if(col3=='2')
      {
      clrscr();
      x=3;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("6%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else
      goto back5;
    }
  else if(col2=='r' || col2=='R')
    goto refresh;
  else
    goto back2;
  }
else if(col=='2')
  {
  textcolor(8);
  gotoxy(33,23);cprintf("shuffling cards...");
  sleep(2);
  textcolor(15);
  gotoxy(35,20);cprintf("Where is it?");
  gotoxy(33,23);cprintf("                  ");
  textcolor(4);
  x=4;
  gotoxy(48,9);cprintf("7%c", x);
  gotoxy(28,3);cprintf("2%c", x);
  gotoxy(38,3);cprintf("9%c", x);
  gotoxy(28,5);cprintf("J%c", x);
  gotoxy(38,5);cprintf("Q%c", x);
  gotoxy(48,5);cprintf("5%c", x);
  gotoxy(28,7);cprintf("6%c", x);

  textcolor(8);
  x=5;
  gotoxy(48,3);cprintf("A%c", x2);
  gotoxy(28,13);cprintf("4%c", x2);
  gotoxy(38,7);cprintf("2%c", x);
  gotoxy(48,7);cprintf("J%c", x);
  gotoxy(28,9);cprintf("K%c", x);
  gotoxy(38,9);cprintf("8%c", x);
  gotoxy(28,11);cprintf("3%c", x);
  gotoxy(38,11);cprintf("5%c", x);

  textcolor(4);
  x=3;
  gotoxy(48,11);cprintf("K%c", x);
  gotoxy(38,13);cprintf("3%c", x);
  gotoxy(48,13);cprintf("Q%c", x);
  gotoxy(28,15);cprintf("6%c", x);
  gotoxy(38,15);cprintf("J%c", x);
  gotoxy(48,15);cprintf("9%c", x);
  back6:
  col2=getch();

  if(col2=='1')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(28,5);cprintf("7%c", x);
    gotoxy(38,7);cprintf("2%c", x);
    gotoxy(48,11);cprintf("9%c", x);
    gotoxy(48,7);cprintf("J%c", x);
    gotoxy(28,13);cprintf("Q%c", x);
    gotoxy(38,3);cprintf("5%c", x);
    gotoxy(28,9);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(28,3);cprintf("A%c", x2);
    gotoxy(28,11);cprintf("4%c", x2);
    gotoxy(38,13);cprintf("2%c", x);
    gotoxy(48,3);cprintf("J%c", x);
    gotoxy(38,9);cprintf("K%c", x);
    gotoxy(48,13);cprintf("8%c", x);
    gotoxy(48,9);cprintf("3%c", x);
    gotoxy(28,15);cprintf("5%c", x);

    textcolor(4);
    x=3;
    gotoxy(38,5);cprintf("K%c", x);
    gotoxy(38,15);cprintf("3%c", x);
    gotoxy(48,5);cprintf("Q%c", x);
    gotoxy(38,11);cprintf("6%c", x);
    gotoxy(48,15);cprintf("J%c", x);
    gotoxy(28,7);cprintf("9%c", x);
    back7:
    col3=getch();

    if(col3=='2')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("K%c", x);
      }
    else if(col3=='3')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("3%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else goto back7;
    }
  else if(col2=='2')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(28,5);cprintf("7%c", x);
    gotoxy(48,11);cprintf("2%c", x);
    gotoxy(38,7);cprintf("9%c", x);
    gotoxy(28,13);cprintf("J%c", x);
    gotoxy(48,7);cprintf("Q%c", x);
    gotoxy(38,3);cprintf("5%c", x);
    gotoxy(38,13);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(28,3);cprintf("A%c", x2);
    gotoxy(38,15);cprintf("4%c", x2);
    gotoxy(28,9);cprintf("2%c", x);
    gotoxy(48,3);cprintf("J%c", x);
    gotoxy(48,13);cprintf("K%c", x);
    gotoxy(38,9);cprintf("8%c", x);
    gotoxy(28,15);cprintf("3%c", x);
    gotoxy(48,9);cprintf("5%c", x);

    textcolor(4);
    x=3;
    gotoxy(38,5);cprintf("K%c", x);
    gotoxy(28,11);cprintf("3%c", x);
    gotoxy(48,5);cprintf("Q%c", x);
    gotoxy(48,15);cprintf("6%c", x);
    gotoxy(38,11);cprintf("J%c", x);
    gotoxy(28,7);cprintf("9%c", x);
    back8:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("2%c", x);
      }
    else if(col3=='2')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is an");
      gotoxy(49,13);cprintf("!");
      textcolor(8);
      gotoxy(47,13);cprintf("8%c", x);
      }
    else if(col3=='3')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("5%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else goto back8;
    }
  else if(col2=='3')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=4;
    gotoxy(38,9);cprintf("7%c", x);
    gotoxy(48,11);cprintf("2%c", x);
    gotoxy(28,3);cprintf("9%c", x);
    gotoxy(28,13);cprintf("J%c", x);
    gotoxy(38,3);cprintf("Q%c", x);
    gotoxy(48,7);cprintf("5%c", x);
    gotoxy(38,13);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(38,7);cprintf("A%c", x2);
    gotoxy(38,15);cprintf("4%c", x2);
    gotoxy(48,3);cprintf("2%c", x);
    gotoxy(28,9);cprintf("J%c", x);
    gotoxy(48,13);cprintf("K%c", x);
    gotoxy(28,5);cprintf("8%c", x);
    gotoxy(28,15);cprintf("3%c", x);
    gotoxy(38,5);cprintf("5%c", x);

    textcolor(4);
    x=3;
    gotoxy(48,9);cprintf("K%c", x);
    gotoxy(48,5);cprintf("3%c", x);
    gotoxy(28,11);cprintf("Q%c", x);
    gotoxy(48,15);cprintf("6%c", x);
    gotoxy(28,7);cprintf("J%c", x);
    gotoxy(38,11);cprintf("9%c", x);
    back9:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(8);
      gotoxy(46,13);cprintf("J%c", x);
      }
    else if(col3=='2')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("7%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else goto back9;
    }
  else if(col2=='r' || col2=='R')
    goto refresh;
  else goto back6;
  }
else if(col=='3')
  {
  textcolor(8);
  gotoxy(33,23);cprintf("shuffling cards...");
  sleep(2);
  textcolor(15);
  gotoxy(35,20);cprintf("Where is it?");
  gotoxy(33,23);cprintf("                  ");
  textcolor(4);
  x=3;
  gotoxy(28,3);cprintf("K%c", x);
  gotoxy(48,3);cprintf("3%c", x);
  gotoxy(28,5);cprintf("Q%c", x);
  gotoxy(38,5);cprintf("6%c", x);
  gotoxy(48,5);cprintf("J%c", x);
  gotoxy(28,7);cprintf("9%c", x);

  textcolor(4);
  x=4;
  gotoxy(28,15);cprintf("7%c", x);
  gotoxy(38,7);cprintf("2%c", x);
  gotoxy(48,7);cprintf("9%c", x);
  gotoxy(38,9);cprintf("J%c", x);
  gotoxy(48,9);cprintf("Q%c", x);
  gotoxy(28,11);cprintf("5%c", x);
  gotoxy(38,11);cprintf("6%c", x);

  textcolor(8);
  x=5;
  gotoxy(28,9);cprintf("A%c", x2);
  gotoxy(38,3);cprintf("4%c", x2);
  gotoxy(48,11);cprintf("2%c", x);
  gotoxy(28,13);cprintf("J%c", x);
  gotoxy(38,13);cprintf("K%c", x);
  gotoxy(48,13);cprintf("8%c", x);
  gotoxy(38,15);cprintf("3%c", x);
  gotoxy(48,15);cprintf("5%c", x);
  back10:
  col2=getch();

  if(col2=='1')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=3;
    gotoxy(38,7);cprintf("K%c", x);
    gotoxy(28,3);cprintf("3%c", x);
    gotoxy(48,7);cprintf("Q%c", x);
    gotoxy(28,13);cprintf("6%c", x);
    gotoxy(38,3);cprintf("J%c", x);
    gotoxy(28,9);cprintf("9%c", x);

    textcolor(4);
    x=4;
    gotoxy(38,11);cprintf("7%c", x);
    gotoxy(38,13);cprintf("2%c", x);
    gotoxy(48,3);cprintf("9%c", x);
    gotoxy(48,13);cprintf("J%c", x);
    gotoxy(28,5);cprintf("Q%c", x);
    gotoxy(48,9);cprintf("5%c", x);
    gotoxy(28,15);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(38,9);cprintf("A%c", x2);
    gotoxy(48,11);cprintf("4%c", x2);
    gotoxy(38,5);cprintf("2%c", x);
    gotoxy(28,11);cprintf("J%c", x);
    gotoxy(38,15);cprintf("K%c", x);
    gotoxy(48,5);cprintf("8%c", x);
    gotoxy(48,15);cprintf("3%c", x);
    gotoxy(28,7);cprintf("5%c", x);
    back11:
    col3=getch();

    if(col3=='2')
      {
      clrscr();
      x=5;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is an");
      gotoxy(49,13);cprintf("!");
      textcolor(8);
      gotoxy(47,13);cprintf("A%c", x2);
      }
    else if(col3=='3')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("5%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else goto back11;
    }
  else if(col2=='2')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=3;
    gotoxy(48,11);cprintf("K%c", x);
    gotoxy(28,3);cprintf("3%c", x);
    gotoxy(28,13);cprintf("Q%c", x);
    gotoxy(48,7);cprintf("6%c", x);
    gotoxy(38,3);cprintf("J%c", x);
    gotoxy(38,13);cprintf("9%c", x);

    textcolor(4);
    x=4;
    gotoxy(48,15);cprintf("7%c", x);
    gotoxy(28,9);cprintf("2%c", x);
    gotoxy(48,3);cprintf("9%c", x);
    gotoxy(38,9);cprintf("J%c", x);
    gotoxy(28,5);cprintf("Q%c", x);
    gotoxy(28,15);cprintf("5%c", x);
    gotoxy(48,9);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(48,13);cprintf("A%c", x2);
    gotoxy(38,7);cprintf("4%c", x2);
    gotoxy(38,5);cprintf("2%c", x);
    gotoxy(38,15);cprintf("J%c", x);
    gotoxy(28,11);cprintf("K%c", x);
    gotoxy(48,5);cprintf("8%c", x);
    gotoxy(38,11);cprintf("3%c", x);
    gotoxy(28,7);cprintf("5%c", x);
    back12:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("2%c", x);
      }
    else if(col3=='2')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("J%c", x);
      }
    else if(col3=='3')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("6%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else
      goto back12;
    }
  else if(col2=='3')
    {
    textcolor(8);
    gotoxy(33,23);cprintf("shuffling cards...");
    sleep(2);
    textcolor(15);
    gotoxy(35,20);cprintf("Where is it?");
    gotoxy(33,23);cprintf("                  ");
    textcolor(4);
    x=3;
    gotoxy(48,11);cprintf("K%c", x);
    gotoxy(38,7);cprintf("3%c", x);
    gotoxy(28,13);cprintf("Q%c", x);
    gotoxy(38,3);cprintf("6%c", x);
    gotoxy(48,7);cprintf("J%c", x);
    gotoxy(38,13);cprintf("9%c", x);

    textcolor(4);
    x=4;
    gotoxy(48,15);cprintf("7%c", x);
    gotoxy(48,3);cprintf("2%c", x);
    gotoxy(28,9);cprintf("9%c", x);
    gotoxy(28,5);cprintf("J%c", x);
    gotoxy(38,9);cprintf("Q%c", x);
    gotoxy(28,15);cprintf("5%c", x);
    gotoxy(38,5);cprintf("6%c", x);

    textcolor(8);
    x=5;
    gotoxy(48,13);cprintf("A%c", x2);
    gotoxy(28,3);cprintf("4%c", x2);
    gotoxy(48,9);cprintf("2%c", x);
    gotoxy(38,15);cprintf("J%c", x);
    gotoxy(48,5);cprintf("K%c", x);
    gotoxy(28,11);cprintf("8%c", x);
    gotoxy(28,7);cprintf("3%c", x);
    gotoxy(38,11);cprintf("5%c", x);
    back13:
    col3=getch();

    if(col3=='1')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("9%c", x);
      }
    else if(col3=='2')
      {
      clrscr();
      x=4;
      textcolor(15);
      gotoxy(31,13);cprintf("Your card is a");
      gotoxy(48,13);cprintf("!");
      textcolor(4);
      gotoxy(46,13);cprintf("Q%c", x);
      }
    else if(col3=='r' || col3=='R')
      goto refresh;
    else
      goto back13;
    }
  else if(col2=='r' || col2=='R')
    goto refresh;
  else
    goto back10;
  }
else if(col=='r' || col=='R')
  goto refresh;
else
  goto back;
sleep(2);
clrscr();
textcolor(4);
gotoxy(37,13);cprintf("THE END!");
}
else if(cho=='c' || cho=='C')
  {
  clrscr();
  textcolor(8);
  gotoxy(1,5);cprintf(" nspired by:  afael  artin's magic");
  gotoxy(1,25);cprintf(" ress any key to exit");
  textcolor(15);
  gotoxy(1,1);cprintf("P");
  gotoxy(13,1);cprintf("E");
  gotoxy(20,1);cprintf("L");
  gotoxy(1,3);cprintf("S");
  gotoxy(20,3);cprintf("J");
  gotoxy(25,3);cprintf("J");
  gotoxy(1,5);cprintf("I");
  gotoxy(14,5);cprintf("R");
  gotoxy(21,5);cprintf("M");
  gotoxy(1,25);cprintf("P");
  gotoxy(22,25);cprintf("...");
  getch();
  goto intro;
  }
else
  goto intro;
return 0;
}

