#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<bios.h>
#include<graphics.h>
int selectoption1();
int selectoption2();
int selectoption4();
int selectoption3();
int selectoption5();
int selectoption6();
int selectoption8();
void cursor1();
void cursor2();
void cursor3();
void cursor4();
void cursor5();
void cursor6();
void detail();
void front();
void front1();
void draw_bar(void);
void draw_bar3d(void);
void draw_line(void);
void draw_pieslice(void);
void notlisted();
void requestgraph();
void congratulation();
int billing(long long int);
long long int x=0;
void main()
{
    front1();
    clrscr();
  front();
 clrscr();
   //detail();
   cursor1();
   getch();

}
//*****************************************************************
//                 SHOP DETAILS STARTED(CURSOR !1)
//*****************************************************************

void cursor1()
  {
   int op;
   textcolor(WHITE);
   clrscr();
   op=selectoption1();
   clrscr();
   switch(op)
   {
     case 1:{
	       cursor2();
	       break;
	    }
    case 2:{
	      cursor5();
	      break;
	   }
   case 3:{
	     cursor6();
	     break;
	  }
   case 4:{
	   exit;

	   break;
	   }

   }
   getch();   //
  }


int selectoption1()
{
      int op=1,key;
     // textcolor(CYAN);
      printf("\t\t\t\t\n\n\t\t\tWELCOME TO THE SUPERMARKET\n");
      delay(200);
      printf("\nHere is the details of shops...");
      delay(200);
      printf("\n\nPlease select a shop from below... ");
      delay(200);

      if(op==1)
	 {
	 gotoxy(10,9);
	 textcolor(GREEN);
	 cprintf("Electronics");
	 textcolor(LIGHTRED);
	 gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,13);
	 cprintf("Sports Equipment");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,11);
	 textcolor(GREEN);
	 cprintf("Groceries");
	 textcolor(LIGHTRED);
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,13);
	 cprintf("Sports Equipment");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==3)
	 {
	 gotoxy(10,13);
	 textcolor(GREEN);
	 cprintf("Sports Equipment");
	 textcolor(LIGHTRED);
	 gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==4)
	 {
	  gotoxy(10,15);
	  textcolor(GREEN);
	  cprintf("EXIT");
	  textcolor(LIGHTRED);
	  gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,13);
	 cprintf("Sports Equipments");
	  }
	 while((key=bioskey(0))!=7181)
      {

	 switch(key)
	 {
	     case 18432:
		       {
			 if(op!=1)
				 op--;
			break;
		       }
	    case 20480:{
			 if(op!=4)
			 op++;
			}
	 }
	if(op==1)
	 {
	 gotoxy(10,9);
	 textcolor(GREEN);
	 cprintf("Electronics");
	 textcolor(LIGHTRED);
	 gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,13);
	 cprintf("Sports Equipments");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,11);
	 textcolor(GREEN);
	 cprintf("Groceries");
	 textcolor(LIGHTRED);
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,13);
	 cprintf("Sports Equipments");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==3)
	 {
	 gotoxy(10,13);
	 textcolor(GREEN);
	 cprintf("Sports Equipments");
	 textcolor(LIGHTRED);
	 gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,15);
	 cprintf("EXIT");
	 }
	 else if(op==4)
	 {
	  gotoxy(10,15);
	  textcolor(GREEN);
	  cprintf("EXIT");
	  textcolor(LIGHTRED);
	  gotoxy(10,11);
	 cprintf("Groceries");
	 gotoxy(10,9);
	 cprintf("Electronics");
	 gotoxy(10,13);
	 cprintf("Sports Equipments");
	  }
      }
      return op;
}
//                           shop details ending
//******************************************************************
 //                            USER DATA ENTRY STARTED (DETAILS)
 //*****************************************************************



void detail()
 {
   char name[100],mob[15],add[150];

   FILE *fp;
   fp=fopen("customer.txt","w+");
   gotoxy(30,10);
   printf("ENTER YOUR DETAILS : ");
   gets(name);
   fprintf(fp,"NAME : %s\n",name);
   gotoxy(30,12);
   printf("NAME : ");
   gets(name);
   fprintf(fp,"NAME : %s\n",name);
   gotoxy(30,14);
   printf("MOBILE NUMBER : ");
   gets(mob);
   fprintf(fp,"MOBILE NUMBER : %s\nS",mob);
   gotoxy(30,16);
   printf("ADDRESS: ");
   gets(add);
   fprintf(fp,"ADDRESS: %s\n",add);
   gotoxy(50,24);
   textcolor(CYAN+BLINK);
   cprintf("ENTER TO CONTINUE...");
   getch();
  }
//******************************************************************
//             FRONT pAGE
//**************************************************************
void front()
{
int gd=DETECT,gm,i;
highvideo();
initgraph(&gd,&gm,"..\\BGI");

setcolor(GREEN);
setbkcolor(RED);
rectangle(0,0,638,150);
setfillstyle(HATCH_FILL,YELLOW);
floodfill(5,5,GREEN);
setcolor(WHITE);
rectangle(0,300,638,152);
settextstyle(3,0,6);
setcolor(12);
outtextxy(120,150,"SUPERMARKET   ");
delay(100);
outtextxy(130,200,"    MANAGEMENT "  );

delay(30);
setcolor(1);
rectangle(0,477,638,305);
setfillstyle(SLASH_FILL,LIGHTBLUE);
floodfill(5,301,WHITE);

getch();
closegraph();
}
//*******************************************************
//                                FRONT PAGE END//
//********************************************************

void cursor2()
{
int op;
textcolor(WHITE);
clrscr();
op=selectoption2();
clrscr();
switch(op)
{
case 1:{
	printf("You are in Electronics");
	cursor3();
	break;
      }
case 2:{
	cursor4();
	break;
      }
case 3:{
	cursor1();
	break;
      }
}
getch();
}
int selectoption2()
{
int op=1,key;
textcolor(CYAN+BLINK);
gotoxy(15,2);
cprintf("                 ELECTRONICS STORE     ");
textcolor(CYAN);
gotoxy(10,4);
cprintf("\nPlease select a shop from below... ");
delay(200);
if(op==1)
{
gotoxy(10,9);
textcolor(BLUE);
cprintf("Mobile Phones");
textcolor(GREEN);
gotoxy(10,11);
cprintf("Laptops");
gotoxy(10,13);
cprintf("BACK <-");
}
else if(op==2)
{
gotoxy(10,11);
textcolor(BLUE);
cprintf("Laptops");
textcolor(GREEN);
gotoxy(10,9);
cprintf("Mobile Phones");
gotoxy(10,13);
cprintf("BACK<-");
}
else if(op==3)
{
gotoxy(10,13);
textcolor(BLUE);
cprintf("BACK <-");
textcolor(GREEN);
gotoxy(10,11);
cprintf("Laptops");
gotoxy(10,9);
cprintf("Mobile Phones");
}
while((key=bioskey(0))!=7181)
{

 switch(key)
{
  case 18432:
	    {
	      if(op!=1)
		    op--;
	      break;
	    }
  case 20480:{
	     if(op!=3)
	       op++;
	     }
}
if(op==1)
{
gotoxy(10,9);
textcolor(BLUE);
cprintf("Mobile Phones");
textcolor(GREEN);
gotoxy(10,11);
cprintf("Laptops");
gotoxy(10,13);
cprintf("BACK <-");
}
else if(op==2)
{
gotoxy(10,11);
textcolor(BLUE);
cprintf("Laptops");
textcolor(GREEN);
gotoxy(10,9);
cprintf("Mobile Phones");
gotoxy(10,13);
cprintf("BACK <-");
}
else if(op==3)
{
gotoxy(10,13);
textcolor(BLUE);
cprintf("BACK <-");
textcolor(GREEN);
gotoxy(10,11);
cprintf("Laptops");
gotoxy(10,9);
cprintf("Mobile Phones");
}
}
return op;

}

//************************************************************************************************************//
			 // CURSOR5 (GROCERY STORE STARTED)
//***********************************************************************************************************//
void cursor5()
{
    FILE *fp;
   int op,quantity;
   long long int cost;
   textcolor(WHITE);
   clrscr();
   op=selectoption5();
   clrscr();
   switch(op)
   {
     case 1:{
        cost=17;
	    gotoxy(10,5);
	    printf("TATA SALT(1KG)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"TATA SALT(1KG) @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	fclose(fp);
	delay(5000);

	cursor5();
	     break;
	   }
     case 2:{
        cost=115;
	    gotoxy(10,5);
	    printf("TATA SAMPANN PULSES TOOR DAL(1KG)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"TATA SAMPANN PULSES TOOR DAL(1KG) @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
     case 3:{
        cost=180;
	    gotoxy(10,5);
	    printf("PAPER BOAT PEANUT CHIKKI");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"PAPER BOAT PEANUT CHIKKI @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
     case 4:{
	             cost=319;
	    gotoxy(10,5);
	    printf("CADBURY DAIRY MILK SILK");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"CADBURY DAIRY MILK SILK @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
     case 5:{
	             cost=790;
	    gotoxy(10,5);
	    printf("FERRERO ROCHER(300 gm)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"FERRERO ROCHER(300 gm) @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
    case 6:{
	             cost=300;
	    gotoxy(10,5);
	    printf("KELLOGG'S MUESLI FRUIT MAGIC");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"KELLOGG'S MUESLI FRUIT MAGIC @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
    case 7:{
        cost=3000;
	    gotoxy(10,5);
	    printf("GITS GULAB JAMUN MIX(100gm)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         GROCERY STORE   ");
	    fprintf(fp,"GITS GULAB JAMUN MIX(100gm) @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor5();
	     break;
	   }
    case 8:{
	             cost=25;
	    gotoxy(10,5);
	    printf("SUNFEAST PASTA TREAT(70gm)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	 billing(cost);
	 x=x+cost;
	 clrscr();
	fp=fopen("customer.txt","w+");
	textcolor(WHITE);
	gotoxy(25,9);
	printf("You successfully purchased you product ");
	gotoxy(25,12);
	printf("          Total Amount: %d",x);
	fprintf(fp,"         GROCERY STORE   ");
	fprintf(fp,"SUNFEAST PASTA TREAT(70gm) @ %d/-Rs.\n",cost);
	fprintf(fp,"Quantity: %d\n",quantity);
	fprintf(fp,"Total Bill is %d/-Rs.",x);
	delay(5000);
	fclose(fp);
	cursor5();
	     break;
	   }
    case 9:{
	     cursor1();
	     break;
	   }
   case 10:{
	     notlisted();
	     cursor5();
	     break;
	   }
  }
   getch();
}
int selectoption5()
{
  int op=1,key;
  gotoxy(30,2);
  textcolor(BROWN+BLINK);
  cprintf("GROCERY STORE \n");
  gotoxy(10,4);
  printf("       ITEM                            PRICES");
  if(op==1)
    {
      gotoxy(10,7);
      textcolor(MAGENTA);
      cprintf("TATA SALT(1KG)............................17/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
   else if(op==2)
      {gotoxy(10,8);
      textcolor(MAGENTA);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK(160g).............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==3)
      {gotoxy(10,9);
      textcolor(MAGENTA);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==4)
      {gotoxy(10,10);
      textcolor(MAGENTA);
      cprintf("CADBURY DAIRY MILK SILK............................319/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
       gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==5)
      {gotoxy(10,11);
      textcolor(MAGENTA);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==6)
      {gotoxy(10,12);
      textcolor(MAGENTA);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==7)
      {gotoxy(10,13);
      textcolor(MAGENTA);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==8)
      {gotoxy(10,14);
      textcolor(MAGENTA);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==9)
   {gotoxy(10,17);
      textcolor(MAGENTA);
      cprintf("BACK<-");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
       else if(op==10)
   {gotoxy(10,19);
      textcolor(MAGENTA);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE/-RS.");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)...................115/-RS.");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI.............................180/-RS.");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK.............................319/-RS.");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm).............................790/-RS.");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC............................300/-RS.");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm).............................3000/-RS.");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)................................25/-RS.");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)............................17");
     }



  while((key=bioskey(0))!=7181)
  {
    switch(key)
     {
       case 18432:
		 {
		   if(op!=1)
		       op--;
		   break;
		 }

      case 20480:
		 {
		   if(op!=10)
		       op++;
		 }
    }
    if(op==1)
    {
      gotoxy(10,7);
      textcolor(MAGENTA);
      cprintf("TATA SALT(1KG)");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==2)
     {gotoxy(10,8);
      textcolor(MAGENTA);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==3)
     {gotoxy(10,9);
      textcolor(MAGENTA);
      cprintf("PAPER BOAT PEANUT CHIKKI");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==4)
     {gotoxy(10,10);
      textcolor(MAGENTA);
      cprintf("CADBURY DAIRY MILK SILK");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
       gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==5)
     {gotoxy(10,11);
      textcolor(MAGENTA);
      cprintf("FERRERO ROCHER(300 gm)");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==6)
     {gotoxy(10,12);
      textcolor(MAGENTA);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==7)
     {gotoxy(10,13);
      textcolor(MAGENTA);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
     else if(op==8)
     {gotoxy(10,14);
      textcolor(MAGENTA);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
      gotoxy(10,17);
      cprintf("BACK<-");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
      else if(op==9)
     {gotoxy(10,17);
      textcolor(MAGENTA);
      cprintf("BACK<-");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
      gotoxy(10,19);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
     }
      else if(op==10)
      {
     gotoxy(10,19);
      textcolor(MAGENTA);
      cprintf("IF YOUR PRODUCT IS NOT LISTED ABOVE");
      textcolor(LIGHTMAGENTA);
      gotoxy(10,8);
      cprintf("TATA SAMPANN PULSES TOOR DAL(1KG)");
      gotoxy(10,9);
      cprintf("PAPER BOAT PEANUT CHIKKI");
       gotoxy(10,10);
      cprintf("CADBURY DAIRY MILK SILK");
      gotoxy(10,11);
      cprintf("FERRERO ROCHER(300 gm)");
      gotoxy(10,12);
      cprintf("KELLOGG'S MUESLI FRUIT MAGIC");
      gotoxy(10,13);
      cprintf("GITS GULAB JAMUN MIX(100gm)");
       gotoxy(10,14);
      cprintf("SUNFEAST PASTA TREAT(70gm)");
      gotoxy(10,7);
      cprintf("TATA SALT(1KG)");
      gotoxy(10,17);
      cprintf("BACK<-");
     }



  }
  return op;
}

//*************************************************************************************////
				//    MOBILE PHONES..
//**************************************************************************************

void cursor3()
{
   int op,quantity;
   long long int cost;
   FILE *fp;
   textcolor(WHITE);
   clrscr();
   op=selectoption3();
   clrscr();
   switch(op)
   {
     case 1:{
        cost=11999;
	    gotoxy(10,5);
	    printf("SAMSUNG GALAXY M30");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"SAMSUNG GALAXY M30 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
     case 2:{
        cost=14475;
	    gotoxy(10,5);
	    printf("REALME 5 PRO");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"REALME 5 PRO @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
     case 3:{
	     cost=36999;
	    gotoxy(10,5);
	    printf("OPPO RENO 2");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"OPPO RENO 2 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
     case 4:{
	     cost=6999;
	    gotoxy(10,5);
	    printf("XIOMI REDMI 7");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"XIOMI REDMI 7 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
     case 5:{
         cost=16999;
	    gotoxy(10,5);
	    printf("REALME XT");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"REALME XT @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
    case 6:{
	     cost=62990;
	    gotoxy(10,5);
	    printf("APPLE IPHONE 11");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"APPLE IPHONE 11 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
    case 7:{
	     cost=12075;
	    gotoxy(10,5);
	    printf("XIOMI MI A3");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"XIOMI MI A3 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
    case 8:{
	     cost=13999;
	    gotoxy(10,5);
	    printf("VIVO Z1 PRO");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         MOBILE STORE   ");
	    fprintf(fp,"VIVO Z1 PRO @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor3();
	     break;
	   }
    case 9:{
	     cursor2();
	     break;
	   }
   case 10:{
	     notlisted();
	     cursor3();
	     break;
	   }
  }
   getch();
}
int selectoption3()
{
  int op=1,key;

  textcolor(MAGENTA+BLINK);
  gotoxy(15,2);
  cprintf("                  MOBILE STORE\n");
  gotoxy(10,4);
  printf("  VARIANTS                                    PRICES");
  if(op==1)
     {
	 gotoxy(10,7);
      textcolor(BLUE);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS");
      textcolor(YELLOW);
      gotoxy(10,9);
      cprintf("REALME 5 PRO.............................14,475/-RS.");
      gotoxy(10,8);
      cprintf("OPPO RENO 2........................36,990/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7.............................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.............................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11.............................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==2)
     {
	 gotoxy(10,8);
      textcolor(BLUE);
      cprintf("OPPO RENO 2........................36,990/-RS.");
      textcolor(YELLOW);
      gotoxy(10,9);
      cprintf("REALME 5 PRO.............................14,475/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7.............................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.............................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11.............................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==3)
     {
	 gotoxy(10,9);
      textcolor(BLUE);
      cprintf("REALME 5 PRO.............................14,475/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7.............................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.............................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11.............................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
    else if(op==4)
     {
	 gotoxy(10,10);
      textcolor(BLUE);
      cprintf("XIOMI REDMI 7.................................6,999/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,9);
      cprintf("REALME 5 PRO..................................14,475/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.............................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11.............................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==5)
     {
	 gotoxy(10,11);
      textcolor(BLUE);
      cprintf("REALME XT.................................16,999/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,9);
      cprintf("REALME 5 PRO..................................14,475/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11.............................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==6)
     {
	 gotoxy(10,12);
      textcolor(BLUE);
      cprintf("APPLE IPHONE 11.................................62,990/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.....................................16,999/-RS.");
      gotoxy(10,9);
      cprintf("REALME 5 PRO...............................14,475/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.............................12,075/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,15);
      cprintf("APPLE IPHONE X..............................55,990/-RS.");
      gotoxy(10,16);
      cprintf("REALME 5....................................8,875/-RS.");
     }
  else if(op==7)
     {
	 gotoxy(10,13);
      textcolor(BLUE);
      cprintf("XIOMI MI A3....................................12,068/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.....................................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11..................................62,990/-RS.");
      gotoxy(10,9);
      cprintf("REALME 5 PRO................................14,475/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO................................13,999/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==8)
     {
	 gotoxy(10,14);
      textcolor(BLUE);
      cprintf("VIVO Z1 PRO....................................13,990/-RS.");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.....................................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11..................................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.....................................12,068/-RS.");
       gotoxy(10,9);
      cprintf("REALME 5 PRO.....................................14,475/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==9)
     {
	 gotoxy(10,17);
      textcolor(BLUE);
      cprintf("BACK <-");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.....................................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11..................................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.....................................12,068/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO.....................................13,990/-RS.");
      gotoxy(10,9);
      cprintf("REALME 5 PRO..............................14,475/-RS.");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==10)
     {
	 gotoxy(10,19);
      textcolor(BLUE);
      cprintf("If your variant is not listed above ");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2.............................36,990/-RS.");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30.............................11,999/-RS.");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7..................................6,999/-RS.");
      gotoxy(10,11);
      cprintf("REALME XT.....................................16,999/-RS.");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11..................................62,990/-RS.");
      gotoxy(10,13);
      cprintf("XIOMI MI A3.....................................12,068/-RS.");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO.....................................13,990/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,9);
      cprintf("REALME 5 PRO....................................14,475/-RS.");
     }
   while((key=bioskey(0))!=7181)
  {
    switch(key)
     {
       case 18432:
		 {
		   if(op!=1)
		       op--;
		   break;
		 }

      case 20480:
		 {
		   if(op!=10)
		       op++;
		       break;
		 }
    }
    if(op==1)
    {
      gotoxy(10,7);
      textcolor(BLUE);
      cprintf("SAMSUNG GALAXY M30");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==2)
     {
	 gotoxy(10,8);
      textcolor(BLUE);
      cprintf("OPPO RENO 2");
      textcolor(YELLOW);
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==3)
     {
	 gotoxy(10,9);
      textcolor(BLUE);
      cprintf("REALME 5 PRO");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
    else if(op==4)
     {
	 gotoxy(10,10);
      textcolor(BLUE);
      cprintf("XIOMI REDMI 7");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==5)
     {
	 gotoxy(10,11);
      textcolor(BLUE);
      cprintf("REALME XT");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRo");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
   else if(op==6)
     {
	 gotoxy(10,12);
      textcolor(BLUE);
      cprintf("APPLE IPHONE 11");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==7)
     {
	 gotoxy(10,13);
      textcolor(BLUE);
      cprintf("XIOMI MI A3");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==8)
     {
	 gotoxy(10,14);
      textcolor(BLUE);
      cprintf("VIVO Z1 PRO");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==9)
     {
	 gotoxy(10,17);
      textcolor(BLUE);
      cprintf("BACK <-");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
      gotoxy(10,19);
      cprintf("If your variant is not listed above ");
     }
  else if(op==10)
     {
	 gotoxy(10,19);
      textcolor(BLUE);
      cprintf("If your variant is not listed above ");
      textcolor(YELLOW);
      gotoxy(10,8);
      cprintf("OPPO RENO 2");
      gotoxy(10,7);
      cprintf("SAMSUNG GALAXY M30");
       gotoxy(10,10);
      cprintf("XIOMI REDMI 7");
      gotoxy(10,11);
      cprintf("REALME XT");
      gotoxy(10,12);
      cprintf("APPLE IPHONE 11");
      gotoxy(10,13);
      cprintf("XIOMI MI A3");
       gotoxy(10,14);
      cprintf("VIVO Z1 PRO");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,9);
      cprintf("REALME 5 PRO");
     }


  }
  return op;
}
/*****************************************************************
   cursor4 LAPTOP STORE
   **************************************************************/

void cursor4()
{
   int op,quantity;
   long long int cost;
   FILE *fp;
   textcolor(WHITE);
   clrscr();
   op=selectoption4();
   clrscr();
   switch(op)
   {
     case 1:{
        cost=37999;
	    gotoxy(10,5);
	    printf("Lenovo IdeaPad S145 8th Gen");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"Lenovo IdeaPad S145 8th Gen @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	       break;
	    }
    case 2:{
	      cost=48999;
	    gotoxy(10,5);
	    printf("HP 15 Intel Core i5 15.6-inch Full HD Laptop");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"HP 15 Intel Core i5 15.6-inch Full HD Laptop @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	      break;
	   }
   case 3:{
	     cost=34999;
	    gotoxy(10,5);
	    printf("HP 15 (Core i3 (7th Gen)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"HP 15 (Core i3 (7th Gen) @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 4:{
	      cost=60599;
	    gotoxy(10,5);
	    printf("Lenovo Yoga 520 Intel Core I3");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"Lenovo Yoga 520 Intel Core I3 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 5:{
	      cost=33999;
	    gotoxy(10,5);
	    printf("Lenovo Ideapad 130 ");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"Lenovo Ideapad 130  @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 6:{
	      cost=29557;
	    gotoxy(10,5);
	    printf("ASUS VivoBook 15 X509");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"ASUS VivoBook 15 X509 @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 7:{
	      cost=60576;
	    gotoxy(10,5);
	    printf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 8:{
        cost=31899;
	    gotoxy(10,5);
	    printf("Acer Nitro 5 AN515-52 15.6-inch Laptop");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         LAPTOP STORE   ");
	    fprintf(fp,"Acer Nitro 5 AN515-52 15.6-inch Laptop @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor4();
	     break;
	  }
   case 9:{
	     cursor2();
	     break;
	  }
   case 10:{
	     notlisted();
	     cursor4();
	     break;
	  }

   }
   getch();
}
int selectoption4()
{
      int op=1,key;
      gotoxy(30,2);
      textcolor(RED+BLINK);
      cprintf("       LAPTOP STORE      \n");
      gotoxy(10,4);
      printf("      VARIANT                           PRICE  ");
      if(op==1)
	 {
	 gotoxy(10,7);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
     gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,8);
	 textcolor(LIGHTBLUE);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 textcolor(CYAN);
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }


	 else if(op==3)
	 {
	 gotoxy(10,9);
	 textcolor(LIGHTBLUE);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==4)
	 {
	 gotoxy(10,10);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==5)
	 {
	 gotoxy(10,11);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==6)
	 {
	 gotoxy(10,12);
	 textcolor(LIGHTBLUE);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==7)
	 {
	 gotoxy(10,13);
	 textcolor(LIGHTBLUE);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==8)
	 {
	 gotoxy(10,14);
	 textcolor(LIGHTBLUE);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==9)
	 {
	 gotoxy(10,17);
	 textcolor(LIGHTBLUE);
	 cprintf("BACK <-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==10)
	 {
	 gotoxy(10,19);
	 textcolor(LIGHTBLUE);
	 cprintf("If your variant is not listed above ");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 }
      while((key=bioskey(0))!=7181)
      {

	 switch(key)
	 {
	     case 18432:
		       {
			 if(op!=1)
				 op--;
			break;
		       }
	    case 20480:{
			 if(op!=10)
			 op++;
			}
	 }
	 if(op==1)
	 {
	 gotoxy(10,7);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,8);
	 textcolor(LIGHTBLUE);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 textcolor(CYAN);
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }


	 else if(op==3)
	 {
	 gotoxy(10,9);
	 textcolor(LIGHTBLUE);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==4)
	 {
	 gotoxy(10,10);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==5)
	 {
	 gotoxy(10,11);
	 textcolor(LIGHTBLUE);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==6)
	 {
	 gotoxy(10,12);
	 textcolor(LIGHTBLUE);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==7)
	 {
	 gotoxy(10,13);
	 textcolor(LIGHTBLUE);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==8)
	 {
	 gotoxy(10,14);
	 textcolor(LIGHTBLUE);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==9)
	 {
	 gotoxy(10,17);
	 textcolor(LIGHTBLUE);
	 cprintf("BACK <-");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 gotoxy(10,19);
	 cprintf("If your variant is not listed above ");
	 }
	 else if(op==10)
	 {
	 gotoxy(10,19);
	 textcolor(LIGHTBLUE);
	 cprintf("If your variant is not listed above ");
	 textcolor(CYAN);
	 gotoxy(10,8);
	 cprintf("HP 15 Intel Core i5 15.6-inch Full HD Laptop  ......... 48,599/-");
	 gotoxy(10,7);
	 cprintf("Lenovo IdeaPad S145 8th Gen  ............. 37,9999/-");
	 gotoxy(10,10);
	 cprintf("Lenovo Yoga 520 Intel Core I3   ...................... 60,599/-");
	 gotoxy(10,11);
	 cprintf("Lenovo Ideapad 130  ...........................  33,999/-");
	 gotoxy(10,12);
	 cprintf("ASUS VivoBook 15 X509  .......................   29,557/-");
	 gotoxy(10,13);
	 cprintf("Dell Vostro 3580 Intel Core i5 8th Gen 15.6-inch  ...  60,576/-");
	 gotoxy(10,14);
	 cprintf("Acer Nitro 5 AN515-52 15.6-inch Laptop .........  31,899/-");
	 gotoxy(10,17);
	 cprintf("BACK <-");
	 gotoxy(10,9);
	 cprintf("HP 15 (Core i3 (7th Gen) ..................... 34,999/-");
	 }


      }
      return op;
}
/******************************************************************
			  cursor6 sports store
****************************************************************************/


void cursor6()
{
   int op,quantity;
   long long int cost;
   FILE *fp;
   textcolor(WHITE);
   clrscr();
   op=selectoption6();
   clrscr();
   switch(op)
   {
     case 1:{
        cost=7000;
	    gotoxy(10,5);
	    printf("SS TON HERITAGE BAT");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"SS TON HERITAGE BAT @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
     case 2:{
	     cost=5000;
	    gotoxy(10,5);
	    printf("SF YORKER BAT");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"SF YORKER BAT @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
     case 3:{
	     cost=500;
	    gotoxy(10,5);
	    printf("SG TEST LEATHER BALL");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"SG TEST LEATHER BALL @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
     case 4:{
	     cost=540;
	    gotoxy(10,5);
	    printf("HANDBALL (COSCO)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"HANDBALL (COSCO) @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
     case 5:{
	     cost=349;
	    gotoxy(10,5);
	    printf("BADMINTON SHUTTLE COCK");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"BADMINTON SHUTTLE COCK @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
    case 6:{
	     cost=580;
	    gotoxy(10,5);
	    printf("BADMINTON RACKETS(YONEX)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"BADMINTON RACKETS(YONEX) @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
    case 7:{
	     cost=600;
	    gotoxy(10,5);
	    printf("HOCKEY STICK(VAMPIRE)");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"HOCKEY STICK(VAMPIRE) @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
    case 8:{
	     cost=200;
	    gotoxy(10,5);
	    printf("HOCKEY TURF BALL");
	    gotoxy(10,7);
	    printf("Enter the quantity: ");
	    scanf("%d",&quantity);
	    gotoxy(10,9);
	    cost=cost*quantity;
	    printf("Your cart value is: %d ",cost);
	    billing(cost);
	    x=x+cost;
	    clrscr();
	    fp=fopen("customer.txt","w+");
	    textcolor(WHITE);
	    gotoxy(25,9);
	    printf("You successfully purchased you product ");
    	gotoxy(25,12);
    	printf("          Total Amount: %d",x);
	    fprintf(fp,"         SPORTS STORE   ");
	    fprintf(fp,"HOCKEY TURF BALL @ %d/-Rs.\n",cost);
	    fprintf(fp,"Quantity: %d\n",quantity);
	    fprintf(fp,"Total Bill is %d/-Rs.",x);
        delay(5000);
	    fclose(fp);
	    cursor6();
	     break;
	   }
    case 9:{
	     cursor1();
	     break;
	   }
   case 10:{
	     notlisted();
	     cursor6();
	     break;
	   }
  }
   getch();
}
int selectoption6()
{
  int op=1,key;
  gotoxy(30,2);
  textcolor(RED+BLINK);
  cprintf("SPORTS STORE ");
  gotoxy(10,4);
  printf("   SPORTS EQUIPMENT                           PRICES");
  if(op==1)
    {
      gotoxy(10,7);
      textcolor(BROWN);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==2)
     {
	gotoxy(10,8);
      textcolor(BROWN);
      cprintf("SF YORKER BAT.............................5000/-RS-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==3)
     {
	gotoxy(10,9);
      textcolor(BROWN);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==4)
     {
	gotoxy(10,10);
      textcolor(BROWN);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,14);
      cprintf("If your product is not in the list ");
     }
	else if(op==5)
     {
	gotoxy(10,11);
      textcolor(BROWN);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,14);
      cprintf("If your product is not in the list ");
     }
	else if(op==6)
     {
	gotoxy(10,12);
      textcolor(BROWN);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==7)
     {
	gotoxy(10,13);
      textcolor(BROWN);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==8)
     {
	gotoxy(10,14);
      textcolor(BROWN);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==9)
     {
	gotoxy(10,17);
      textcolor(BROWN);
      cprintf("BACK <-");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
	else if(op==10)
     {
	gotoxy(10,19);
      textcolor(BROWN);
      cprintf("If your product is not in the list ");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SF YORKER BAT.............................5000/-RS.");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT......................7000/-RS.");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO).............................540/-RS.");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK.............................349/-RS.");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX).............................580/-RS.");
      gotoxy(10,13);
      cprintf("HOCKEY STICK(VAMPIRE).............................600/-RS.");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL................................200/-RS.");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL.............................500/-RS.");
     }


  while((key=bioskey(0))!=7181)
  {
    switch(key)
     {
       case 18432:
		 {
		   if(op!=1)
		       op--;
		   break;
		 }

      case 20480:
		 {
		   if(op!=10)
		       op++;
		 }
    }
    if(op==1)
    {
      gotoxy(10,7);
      textcolor(BROWN);
      cprintf("SS TON HERITAGE BAT");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
   else if(op==2)
     {
	 gotoxy(10,8);
      textcolor(BROWN);
      cprintf("SS YORKER BAT");
      textcolor(LIGHTGRAY);
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL(COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
   else if(op==3)
     {
	    gotoxy(10,9);
      textcolor(BROWN);
      cprintf("SG TEST LEATHER BALL");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
    else if(op==4)
     {
	   gotoxy(10,10);
      textcolor(BROWN);
      cprintf("HANDBALL (COSCO)");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
   else if(op==5)
     {
	   gotoxy(10,11);
      textcolor(BROWN);
      cprintf("BADMINTON SHUTTLE COCK");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
   else if(op==6)
     {
	   gotoxy(10,12);
      textcolor(BROWN);
      cprintf("BADMINTON RACKETS(YONEX)");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
  else if(op==7)
     {
	  gotoxy(10,13);
      textcolor(BROWN);
      cprintf("HOCKEY STICK(VAMPIRE)");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
  else if(op==8)
     {
	 gotoxy(10,14);
      textcolor(BROWN);
      cprintf("HOCKEY TURF BALL");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
  else if(op==9)
     {
	   gotoxy(10,17);
      textcolor(BROWN);
      cprintf("BACK <-");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
      gotoxy(10,19);
      cprintf("If your product is not in the list ");
     }
  else if(op==10)
     {
	    gotoxy(10,19);
      textcolor(BROWN);
      cprintf("If your product is not in the list ");
      textcolor(LIGHTGRAY);
      gotoxy(10,8);
      cprintf("SS YORKER BAT");
      gotoxy(10,7);
      cprintf("SS TON HERITAGE BAT");
       gotoxy(10,10);
      cprintf("HANDBALL (COSCO)");
      gotoxy(10,11);
      cprintf("BADMINTON SHUTTLE COCK");
      gotoxy(10,12);
      cprintf("BADMINTON RACKETS(YONEX)");
      gotoxy(10,13);
      cprintf("HOCKEY STICKS(VAMPIRE)");
       gotoxy(10,14);
      cprintf("HOCKEY TURF BALL");
      gotoxy(10,17);
      cprintf("BACK <-");
      gotoxy(10,9);
      cprintf("SG TEST LEATHER BALL");
     }


  }
  return op;
}

void notlisted()
 {
    FILE *fp;
    char pro[100],brand[50];
    fp=fopen("requestlist.txt","w+");
    clrscr();
    gotoxy(25,5);
    printf("   __REQUEST A PRODUCT__ ");
    gotoxy(30,12);
    printf("BRAND NAME: ");
    gets(brand);
    fprintf(fp,"Requested Brand: %s\n",brand);
    gotoxy(30,14);
    printf("PRODUCT NAME: ");
    gets(pro);
    fprintf(fp,"Requested product: %s\n",pro);
    gotoxy(50,24);
    textcolor(CYAN+BLINK);
    cprintf("ENTER TO CONTINUE...");
    getch();
    requestgraph();

 }

void requestgraph()
 {
    int gd=DETECT,gm,i;
    highvideo();
    initgraph(&gd,&gm,"..\\BGI");
    setcolor(RED);
    settextstyle(1,0,4);
    outtextxy(80,120,"THANKS FOR YOUR REQUEST");
    outtextxy(170,160,"WE WILL MAKE");
    outtextxy(260,200,"IT");
    outtextxy(160,240,"AVAILABLE SOON");
    getch();
    closegraph();
 }

int billing(long long int cost)
{
    int op;


   textcolor(WHITE);
   //clrscr();
   op=selectoption8();
   //clrscr();
   switch(op)
   {
     case 1:{
	   clrscr();
	   detail();
	   clrscr();
	   congratulation();
	   //clrscr();
	   //gotoxy(25,)
	     return 0;
	       break;
	    }
    case 2:{
	  cost=0;
	  return cost;
	      cursor1();
	      break;
	   }
   case 3:{
	     exit;
	     break;
	  }

   }
   getch();


}
int selectoption8()
{
    int op=1,key;
      if(op==1)
	 {
	 gotoxy(10,13);
	 textcolor(GREEN);
	 cprintf("Buy now ");
	 textcolor(LIGHTRED);
	 gotoxy(10,15);
	 cprintf("Cancel");
	 gotoxy(10,17);
	 cprintf("EXIT");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,15);
	 textcolor(GREEN);
	 cprintf("Cancel");
	 textcolor(LIGHTRED);
	 gotoxy(10,13);
	 cprintf("Buy now");
	 gotoxy(10,17);
	 cprintf("EXIT");
	 }
	 else if(op==3)
	 {
	 gotoxy(10,17);
	 textcolor(GREEN);
	 cprintf("EXIT");
	 textcolor(LIGHTRED);
	 gotoxy(10,15);
	 cprintf("Cancel");
	 gotoxy(10,13);
	 cprintf("Buy now");
	 }
      while((key=bioskey(0))!=7181)
      {
	 switch(key)
	 {
	     case 18432:
		       {
			 if(op!=1)
				 op--;
			break;
		       }
	    case 20480:{
			 if(op!=3)
			 op++;
			}
	 }
	if(op==1)
	 {
	 gotoxy(10,13);
	 textcolor(GREEN);
	 cprintf("Buy now");
	 textcolor(LIGHTRED);
	 gotoxy(10,15);
	 cprintf("Cancel");
	 gotoxy(10,17);
	 cprintf("EXIT");
	 }
	 else if(op==2)
	 {
	 gotoxy(10,15);
	 textcolor(GREEN);
	 cprintf("Cancel");
	 textcolor(LIGHTRED);
	 gotoxy(10,13);
	 cprintf("Buy now");
	 gotoxy(10,17);
	 cprintf("EXIT");
	 }
	 else if(op==3)
	 {
	 gotoxy(10,17);
	 textcolor(GREEN);
	 cprintf("EXIT");
	 textcolor(LIGHTRED);
	 gotoxy(10,15);
	 cprintf("Cancel");
	 gotoxy(10,13);
	 cprintf("Buy now");
	 }
      }
      return op;
}

void front1(void)
 {
int k,i;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "..\\BGI");
 setbkcolor(RED);
 setcolor(GREEN);
 draw_bar();
 draw_line();
 draw_bar3d();
 draw_pieslice();
getch();
 /*Ends All Graphic Jobs*/
closegraph();
delay(1000);
return 0;
}
/*Function Employed in Drawing a Bars*/
/*********************************************/
void draw_bar(void)
 {
int i;
setfillstyle(CLOSE_DOT_FILL,YELLOW);
for(i=0;i<=640;i+=10)
 {
bar(0,0,i,50);
delay(3);
sound(200+i);
delay(100);
nosound();
}
for(i=50;i<=480;i+=10)
{
bar(590,50,640,i);
delay(50);
sound(400+i);
delay(100);
nosound();
}
for(i=590;i>=0;i-=10)
 {
bar(590,430,i,480);
delay(50);
sound(600+i);
delay(100);
nosound();
 }
for(i=430;i>=50;i-=10)
{
bar(0,430,50,i);
delay(50);
sound(800+i);
delay(100);
nosound();
}
for(i=70;i<=140;i+=10)
 {
setfillstyle(SOLID_FILL,GREEN);
bar(430,70,440,140);
delay(100);
sound(1000+i);
delay(100);
nosound();
 }
for(i=70;i<=140;i+=10)
{
bar(460,70,470,140);
delay(100);
sound(1000+i);
delay(100);
nosound();
}
 }
/*Function Employed in Drawing Lines*/
/*********************************************/
 void draw_line(void)
 {      int i;
setfillstyle(CLOSE_DOT_FILL,BLUE);
for(i=70;i<=140;i+=10)
{
line(70,70,80,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
for(i=140;i>=90;i-=10)
{
line(80,140,100,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
for(i=90;i<=140;i+=10)
{
line(100,90,120,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
for(i=140;i>=70;i-=10)
{
line(120,140,130,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
for(i=70;i<=105;i+=5)
 {
line(440,70,450,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
for(i=105;i>=70;i-=5)
{
line(450,105,460,i);
delay(50);
sound(1000+i);
delay(100);
nosound();
}
 }

void draw_bar3d(void)
{
int i;
setfillstyle(CLOSE_DOT_FILL, YELLOW);
for(i=0;i<=5;i++)
{
bar3d(150,70,170,140,5,3);
delay(100);
bar3d(170,70,200,90,5,3);
delay(100);
bar3d(170,95,190,115,5,3);
delay(100);
bar3d(170,120,200,140,5,3);
delay(100);
sound(1000+i);
delay(100);
nosound();
bar3d(220,70,240,140,i,3);
delay(100);
bar3d(240,120,280,140,i,3);
delay(100);
bar3d(300,70,320,140,i,2);
delay(100);
bar3d(320,70,350,90,i,3);
delay(100);
bar3d(320,120,350,140,i,2);
delay(100);
bar3d(480,70,500,140,i,3);
delay(100);
bar3d(500,70,530,90,i,2);
delay(100);
bar3d(500,95,520,115,i,2);
delay(100);
bar3d(500,120,530,140,i,2);
delay(100);
}
}
/*******************************************************/
/*Function Employed in Drawing a Pieslices*/
/*********************************************/
 void draw_pieslice(void)
{
int i;
setfillstyle(CLOSE_DOT_FILL,YELLOW);
for(i=5;i<=30;i++)
{
pieslice(390,105,0,360,i);
delay(100);
setfillstyle(EMPTY_FILL,YELLOW);
pieslice(390,105,0,360,15);
sound(1000+i);
delay(100);
nosound();
}
for(i=40;i<=480;i+=40)
{
setfillstyle(CLOSE_DOT_FILL,CYAN);
pieslice(60+i,240,0,360,40);
delay(100);
setfillstyle(CLOSE_DOT_FILL,LIGHTGREEN);
pieslice(60+i,320,0,360,40);
delay(100);
sound(1000+i);
delay(100);
nosound();
}
}

void congratulation()
{
    int gd=DETECT,gm;
highvideo();
initgraph(&gd,&gm,"..\\BGI");
setbkcolor(RED);
setlinestyle(3,1,3);
rectangle(3,3,getmaxx(),getmaxy());
setlinestyle(1,2,3);
rectangle(140,200,550,250);
setcolor(WHITE);
settextstyle(1,0,5);
outtextxy(150,200,"CONGRATULATIONS...");

getch();
closegraph();
return 0;
}


