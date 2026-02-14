#include<stdio.h>
#include<windows.h>
#include<time.h>
void zero(int x,int y);
void one(int x,int y);
void two(int x,int y);
void three(int x,int y);
void four(int x,int y);
void five(int x,int y);
void six(int x,int y);
void seven(int x,int y);
void eight(int x,int y);
void nine(int x,int y);
void colon(int x,int y);
void gotoxy(int x,int y);
void call(int digit,int x,int y);
void displaytime();



int main(){
	while(1){
		displaytime();
		Sleep(1000);
	}
    return 0;
}
void displaytime(){
    time_t t;                 
    struct tm *current_time;  

    t = time(NULL);                 
    current_time = localtime(&t);   
    int hour = current_time->tm_hour;
    int min  = current_time->tm_min;
    int sec  = current_time->tm_sec;
    
    // Display Hours
    call(hour/10,10,5);
    call(hour%10,19,5);
    colon(25,5);
    
    // Display Minutes
    call(min/10,31,5);
    call(min%10,40,5);
    colon(46,5);
    
    // Display Seconds
    call(sec/10,52,5);
    call(sec%10,61,5);
}
void call(int digit,int x,int y){
	switch(digit){
		case 1:one(x,y);break;
		case 2:two(x,y);break;
		case 3:three(x,y);break;
		case 4:four(x,y);break;
		case 5:five(x,y);break;
		case 6:six(x,y);break;
		case 7:seven(x,y);break;
		case 8:eight(x,y);break;
		case 9:nine(x,y);break;
		default :zero(x,y);
		
	}
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void colon(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if((j==3 && i==3) || (i==7 && j==3)){
                printf("#");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        printf("\n");
    }
}

void nine(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || j==5 || (i<5 && j==1)){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void eight(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || j==1 || j==5){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void seven(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || j==5){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void six(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==9 || i==5 || j==1 || (i>5 && j==5)){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void five(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==9 || i==5 || (i<5 && j==1) || (i>5 && j==5)){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void four(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==5 || j==5 || (i<5 && j==1)){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void three(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 ||  j==5){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void two(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==5 || i==9 || (i<5 && j==5) || (i>5 && j==1)){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void one(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(j==3){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }
}
void zero(int x,int y){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=5;j++){
            gotoxy(x,y);
            if(i==1 || i==9 || j==1 || j==5){
                printf("*");
            }else{
                printf(" ");
            }
            x++;
        }
        y++;
        x=x-5;
        
    }

}
