#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include<stdbool.h>
#include <windows.h>
//#include "Menghindari Input String.c"

void help();
void scoreboard();
void startgame();
void mulai();
void kategori();
void mulaibuah(char nama[]);
void maingame(char SB[],char A[], int nyawa, char soalhm[], char jawabanhm[], int len, int al[]);
void jwbn(char SB[], char soalhm[], char jawabanhm[]);
void mulaibinatang(char nama[]);
void mulainegara(char nama[]);
void setcolor(unsigned short color);
void start();

FILE *file;
char G;

void selamatdatanggakedip(){
	int i;
	for(i=0; i<5; i++){
            //clear screen
            system("cls");
            setcolor(14);
            printf("\n                         -----SELAMAT DATANG DI APLIKASI HANGMAN-----\t\t\t \n\n");
            //mencetak string x
            setcolor(3);
			printf(" %c%c%c%c      %c%c%c%c     %c%c%c%c      %c%c%c      %c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c      %c%c%c     %c%c%c%c     %c%c%c      %c%c%c\n",219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c    %c%c%c%c%c%c     %c%c%c%c     %c%c%c %c%c        %c%c%c %c%c%c%c    %c%c%c%c    %c%c%c%c%c%c    %c%c%c%c     %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c   %c%c%c  %c%c%c    %c%c%c%c%c    %c%c%c%c%c             %c%c%c%c%c  %c%c%c%c%c   %c%c%c  %c%c%c   %c%c%c%c%c    %c%c%c\n",219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c %c%c   %c%c%c%c%c             %c%c%c %c%c%c%c %c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c %c%c   %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219, 219,219,219,219,219, 219,219,219);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c  %c%c  %c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c  %c%c  %c%c%c %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c  %c%c  %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c%c%c%c    %c%c%c%c%c %c%c%c   %c%c %c%c%c%c%c         %c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c   %c%c %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c%c        %c%c%c%c%c%c%c    %c%c%c%c%c %c%c        %c%c%c %c%c%c      %c%c%c%c%c%c        %c%c%c%c%c%c    %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c          %c%c%c%c%c%c     %c%c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c      %c%c%c%c%c          %c%c%c%c%c     %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			setcolor(11);
			printf("\t\t\t\t\t     _____\n");
			printf("\t\t\t\t\t       |\n");
			printf("\t\t\t\t\t       O\n");
			printf("\t\t\t\t\t      /|\\\n");
			printf("\t\t\t\t\t      / \\\n\n");
            //perulangan untuk menimbulkan jeda waktu
	}
}

void selamatdatang(){
	int i, j,k;
	
	for(i=0; i<5; i++){
            //clear screen
            system("cls");
            setcolor(14);
            printf("\n                         -----SELAMAT DATANG DI APLIKASI HANGMAN-----\t\t\t \n\n");
            //perulangan untuk menimbulkan jeda waktu
            for(j=0; j<99999;j++){
                  for(k=0; k<2000; k++){
                  }
            }
            //mencetak string x
            setcolor(3);
			printf(" %c%c%c%c      %c%c%c%c     %c%c%c%c      %c%c%c      %c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c      %c%c%c     %c%c%c%c     %c%c%c      %c%c%c\n",219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c    %c%c%c%c%c%c     %c%c%c%c     %c%c%c %c%c        %c%c%c %c%c%c%c    %c%c%c%c    %c%c%c%c%c%c    %c%c%c%c     %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c   %c%c%c  %c%c%c    %c%c%c%c%c    %c%c%c%c%c             %c%c%c%c%c  %c%c%c%c%c   %c%c%c  %c%c%c   %c%c%c%c%c    %c%c%c\n",219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c %c%c   %c%c%c%c%c             %c%c%c %c%c%c%c %c%c%c  %c%c%c%c%c%c%c%c%c%c  %c%c%c %c%c   %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219, 219,219,219,219,219, 219,219,219);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c  %c%c  %c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c  %c%c  %c%c%c %c%c%c%c%c%c%c%c%c%c%c%c %c%c%c  %c%c  %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c%c%c%c    %c%c%c%c%c %c%c%c   %c%c %c%c%c%c%c         %c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c   %c%c %c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c%c        %c%c%c%c%c%c%c    %c%c%c%c%c %c%c        %c%c%c %c%c%c      %c%c%c%c%c%c        %c%c%c%c%c%c    %c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219, 219,219,219,219,219,219,219);
			printf(" %c%c%c%c      %c%c%c%c%c%c          %c%c%c%c%c%c     %c%c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c      %c%c%c%c%c          %c%c%c%c%c     %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219,219,219,219,219,219,219, 219,219,219,219,219,219,219);
			setcolor(11);
			printf("\t\t\t\t\t     _____\n");
			printf("\t\t\t\t\t       |\n");
			printf("\t\t\t\t\t       O\n");
			printf("\t\t\t\t\t      /|\\\n");
			printf("\t\t\t\t\t      / \\\n\n");
            //perulangan untuk menimbulkan jeda waktu
            for(j=0; j<99999;j++){
                  for(k=0; k<2000; k++){
                  }
            }

	}
}

void startgakedip(){
	selamatdatanggakedip();
	
//	file = fopen("judul.txt","r");
//	while (!feof (file)){
//		fscanf (file, "%[^\n]", &ascii);
//	}
//	printf ("%s", ascii);
//	fclose(file);
	
	
	//char asci = 219;
	setcolor(13);
	printf("\t\t\t          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	printf("\t\t\t          %c%c                        %c%c\t\t\t\t\n", 219,219,219, 219);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 1. Start Game");
		setcolor(13);
	printf("     %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 2. Scoreboard");
		setcolor(13);
	printf("     %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 3. Help");
		setcolor(13);
	printf("\t    %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 0. Exit Game");
		setcolor(13);
	printf("      %c%c\t\t\t\t\n", 219,219);

	printf("\t\t\t          %c%c                        %c%c\t\t\t\t\n", 219,219,219, 219);
	printf("\t\t\t          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	int pil;
	setcolor(7);
	printf("\t\t\t\t        Pilihan Anda : ");
//	pil = hindaristring();
	scanf("%d", &pil);
	getchar();
	
	switch(pil){
		case 1:
			system("cls");
			startgame();
			exit(0);
		case 2:
			system("cls");
			scoreboard();
			exit(0);
		case 3:
			system("cls");
			help();
			exit(0);
		case 0:
			system("cls");
			printf("\n\n\n\n\n\n\n\n");
			
			setcolor(4);
			printf("\t\t\t     ");
			printf("%c%c%c", 220,220,220);
			printf(" %c %c", 220,220);
			printf("  %c ",220);
			printf(" %c%c",220,220,220);
			printf("  %c %c",220,220);
			printf("   %c %c", 220,220);
			printf("  %c", 220);
			printf("  %c %c\n",220,220);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf(" %c", 219);
			printf("  %c%c%c", 219,254,219);
			printf(" %c%c%c",219,254,219);
			printf(" %c %c",219,219);
			printf(" %c%c", 219,219);
			printf("    %c%c%c",223,223,219);
			printf(" %c %c",219,219);
			printf(" %c %c\n",219,219);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf(" %c", 223);
			printf("  %c %c", 223,223);
			printf(" %c %c",223,223);
			printf(" %c %c",223,223);
			printf(" %c %c",223,223);
			printf("   %c%c",223,223);
			printf("   %c",223);
			printf("   %c\n",223);
			Sleep(250);
			
			puts("");
			
			setcolor(2);
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c%c%c",220,220,220);
			printf("  %c", 220);
			printf("  %c%c%c\n",220,220,220);
			Sleep(250);
			
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c%c",219,254);
			printf("  %c %c",219,219);
			printf(" %c%c%c\n",219,220,223);
			Sleep(250);
		
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c",223);
			printf("    %c",223);
			printf("  %c %c\n",223,223);
			Sleep(250);
			
			puts("");
			
			setcolor(1);
			printf("\t\t\t     ");
			printf("     ");
			printf("%c%c%c",220,220,220);
			printf(" %c",220);
			printf("    %c",220);
			printf("  %c %c", 220,220);
			printf(" %c",220);
			printf(" %c%c",220,220,220);
			printf("   %c%c\n",220,220);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf("     ");
			printf("%c%c%c",219,254,223);
			printf(" %c",219);
			printf("   %c%c%c",219,254,219);
			printf(" %c%c%c",223,223,219);
			printf(" %c",219);
			printf(" %c %c",219,219);
			printf(" %c%c%c\n",223,254, 219);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf("     ");
			printf("%c",223);
			printf("   %c%c%c",223,223,223);
			printf(" %c %c",223,223);
			printf(" %c%c",223,223);
			printf("  %c",223);
			printf(" %c %c",223,223);
			printf(" %c%c%c",220,220,223);
			Sleep(250);
			
			printf(" ");Sleep(250);
			printf(" ");Sleep(250);
			printf(" ");Sleep(250);
			setcolor(7);
			exit(0);
		default:
			printf("\t\t\t      Masukkan pilihan angka yang tersedia\n\n");
			system("pause");
			system("cls");
			startgakedip();
			exit(0);	
	}
}

void start(){
	selamatdatang();
	
//	file = fopen("judul.txt","r");
//	while (!feof (file)){
//		fscanf (file, "%[^\n]", &ascii);
//	}
//	printf ("%s", ascii);
//	fclose(file);
	
	
	//char asci = 219;
	setcolor(13);
	printf("\t\t\t          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	printf("\t\t\t          %c%c                        %c%c\t\t\t\t\n", 219,219,219, 219);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 1. Start Game");
		setcolor(13);
	printf("     %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 2. Scoreboard");
		setcolor(13);
	printf("     %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 3. Help");
		setcolor(13);
	printf("\t    %c%c\t\t\t\t\n", 219,219);
		setcolor(13);
	printf("\t\t\t          %c%c     ",219,219);
		setcolor(7);
	printf(" 0. Exit Game");
		setcolor(13);
	printf("      %c%c\t\t\t\t\n", 219,219);

	printf("\t\t\t          %c%c                        %c%c\t\t\t\t\n", 219,219,219, 219);
	printf("\t\t\t          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	int pil;
	setcolor(7);
	printf("\t\t\t\t        Pilihan Anda : ");
//	pil = hindaristring();
	scanf("%d", &pil);
	getchar();

	switch(pil){
		case 1:
			system("cls");
			startgame();
			exit(0);
		case 2:
			system("cls");
			scoreboard();
			exit(0);
		case 3:
			system("cls");
			help();
			exit(0);
		case 0:
			system("cls");
			printf("\n\n\n\n\n\n\n\n");
			
			 setcolor(4);
			printf("\t\t\t     ");
			printf("%c%c%c", 220,220,220);
			printf(" %c %c", 220,220);
			printf("  %c ",220);
			printf(" %c%c",220,220,220);
			printf("  %c %c",220,220);
			printf("   %c %c", 220,220);
			printf("  %c", 220);
			printf("  %c %c\n",220,220);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf(" %c", 219);
			printf("  %c%c%c", 219,254,219);
			printf(" %c%c%c",219,254,219);
			printf(" %c %c",219,219);
			printf(" %c%c", 219,219);
			printf("    %c%c%c",223,223,219);
			printf(" %c %c",219,219);
			printf(" %c %c\n",219,219);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf(" %c", 223);
			printf("  %c %c", 223,223);
			printf(" %c %c",223,223);
			printf(" %c %c",223,223);
			printf(" %c %c",223,223);
			printf("   %c%c",223,223);
			printf("   %c",223);
			printf("   %c\n",223);
			Sleep(250);
			
			puts("");
			setcolor(2);
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c%c%c",220,220,220);
			printf("  %c", 220);
			printf("  %c%c%c\n",220,220,220);
			Sleep(250);
			
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c%c",219,254);
			printf("  %c %c",219,219);
			printf(" %c%c%c\n",219,220,223);
			Sleep(250);
		
			printf("\t\t\t       ");
			printf("\t        ");
			printf("%c",223);
			printf("    %c",223);
			printf("  %c %c\n",223,223);
			Sleep(250);
			
			puts("");
			
			setcolor(1);
			printf("\t\t\t     ");
			printf("     ");
			printf("%c%c%c",220,220,220);
			printf(" %c",220);
			printf("    %c",220);
			printf("  %c %c", 220,220);
			printf(" %c",220);
			printf(" %c%c",220,220,220);
			printf("   %c%c\n",220,220);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf("     ");
			printf("%c%c%c",219,254,223);
			printf(" %c",219);
			printf("   %c%c%c",219,254,219);
			printf(" %c%c%c",223,223,219);
			printf(" %c",219);
			printf(" %c %c",219,219);
			printf(" %c%c%c\n",223,254, 219);
			Sleep(250);
			
			printf("\t\t\t     ");
			printf("     ");
			printf("%c",223);
			printf("   %c%c%c",223,223,223);
			printf(" %c %c",223,223);
			printf(" %c%c",223,223);
			printf("  %c",223);
			printf(" %c %c",223,223);
			printf(" %c%c%c",220,220,223);
			Sleep(250);
			
			printf(" ");Sleep(250);
			printf(" ");Sleep(250);
			printf(" ");Sleep(250);
			setcolor(7);
			exit(0);
		default:
			printf("\t\t\t      Masukkan pilihan angka yang tersedia\n\n");
			system("pause");
			system("cls");
			startgakedip();
			exit(0);	
	}
}

void setcolor(unsigned short color){
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,color);
}

void kategori(char nama[]){
	int pil2;
	printf ("\n\n\n\n\n\n\n\n\n\t\t\t        Pilih kategori di bawah ini");
	setcolor(10);
	printf("\n\n\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219,219,219,219,219,219,219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	printf("\t\t\t     %c                                %c\t\t\t\t\n", 219, 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("\t1 -> Buah");
	setcolor(10);
	printf("\t      %c\n", 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("\t2 -> Binatang");
	setcolor(10);
	printf("\t      %c\n", 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("\t3 -> Negara");
	setcolor(10);
	printf("\t      %c\n", 219);
	printf("\t\t\t     %c                                %c\t\t\t\t\n", 219, 219);
	printf("\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n", 219,219,219,219,219,219,219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	setcolor(7);
	printf ("\t\t\t\t   Masukkan pilihan : ");
	scanf ("%d", &pil2);
	
	switch (pil2){
		case 1:
			system("cls");
			mulaibuah(nama);
			exit(0);
		case 2:
			system("cls");
			mulaibinatang(nama);
			exit(0);
		case 3:
			system("cls");
			mulainegara(nama);
			exit(0);
		default:
			printf("\t\t\t    Masukkan pilihan angka yang tersedia\n\n\n\n\n\n\n\n\n");
			system("pause");
			getchar();
			system("cls");
			kategori(nama);
			exit(0);
	}
}

void startgame(){
	char nama[100];
//	FILE *file = fopen("nama.txt","a");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  Masukkan nama anda :\n");
	printf("\t\t\t\t       ");
	scanf("%[^\n]", nama);
	getchar();
	if (strlen(nama) > 10){
		printf("\n\n\t\t       ");
		printf ("Jangan masukkan nama lebih dari 10 character...\n\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		system("pause");
		system("cls");
		startgame();
	}
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          ");
	printf("S");Sleep(50);printf("E");Sleep(50);printf("L");Sleep(50);printf("A");Sleep(50);printf("M");Sleep(50);printf("A");Sleep(50);printf("T");Sleep(50);
	printf(" ");Sleep(50);printf("B");Sleep(50);printf("E");Sleep(50);printf("R");Sleep(50);printf("M");Sleep(50);printf("A");Sleep(50);printf("I");Sleep(50);printf("N");Sleep(50);
	printf(" ");Sleep(50);printf("%s", nama);Sleep(50);printf(" ");Sleep(50);printf(":)");Sleep(50);
//	printf("Selamat Bermain %s :)\n\n", nama);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
	kategori(nama);
	exit(0);
}

void mulaibuah(char nama[]){
	char SB[50] ={'b','u','a','h'};
	file = fopen("scoreboardbuah.txt", "a");
	fprintf(file, "%s#", nama);
	fclose(file);
	int angka = (rand() % 5) + 1;
//	printf ("%d", angka);
	
	if(angka == 1){
		file = fopen("filebuah1.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 2){
		file = fopen("filebuah2.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 3){
		file = fopen("filebuah3.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 4){
		file = fopen("filebuah4.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 5){
		file = fopen("filebuah5.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void mulaibinatang(char nama[]){
	char SB[50] ={'b','i','n','a','t', 'a', 'n', 'g'};
	file = fopen("scoreboardbinatang.txt", "a");
	fprintf(file, "%s#", nama);
	fclose(file);
	int angka = (rand() % 5) + 1;
	
	if(angka == 1){
		file = fopen("filebinatang1.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 2){
		file = fopen("filebinatang2.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 3){
		file = fopen("filebinatang3.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 4){
		file = fopen("filebinatang4.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 5){
		file = fopen("filebinatang5.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void mulainegara(char nama[]){
	char SB[50] ={'n', 'e', 'g', 'a', 'r', 'a'};
	file = fopen("scoreboardnegara.txt", "a");
	fprintf(file, "%s#", nama);
	fclose(file);
	int angka = (rand() % 5) + 1;
	
	if(angka == 1){
		file = fopen("filenegara1.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 2){
		file = fopen("filenegara2.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 3){
		file = fopen("filenegara3.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 4){
		file = fopen("filenegara4.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	else if (angka == 5){
		file = fopen("filenegara5.txt", "r");
		char soalhm[100], jawabanhm[30];
		fscanf(file, "%[^#]#%[^#]#",soalhm, jawabanhm);
		fclose(file);
		jwbn(SB, soalhm, jawabanhm);
	}
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void jwbn(char SB[], char soalhm[], char jawabanhm[]){
	int len = strlen(jawabanhm);
	char A[len];
	int i=0, nyawa=5;
	for(i = 0; i < len; i++){
		A[i] = '_';
	}
	int al[26];
	for(i = 0; i < 26; i++){
		al[i] = 'a' + i; 
	}
	maingame(SB, A, nyawa,soalhm, jawabanhm, len, al);
	exit(0);
}

void maingame(char SB[], char A[], int nyawa, char soalhm[], char jawabanhm[], int len, int al[]){
	printf ("Kategori : %s\n", SB);
	printf ("Soal : \n");
	printf("%s\n\n",soalhm);
	printf ("\t\t\t\t     ");
	if (nyawa == 5 || nyawa == 4 || nyawa == 3)
	{
		setcolor(10);
		printf ("Nyawa = %d", nyawa);
	}
	else if (nyawa == 2)
	{
		setcolor(6);
		printf ("Nyawa = %d", nyawa);
	}
	else if (nyawa == 1 || nyawa == 0)
	{
		setcolor(4);
		printf ("Nyawa = %d", nyawa);
	}
	printf("\n");
	setcolor(7);
	int i;
	
	if (nyawa == 5){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n\n\n\n\n");
	}
	if (nyawa == 4){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n");
		printf("\t\t\t\t         O\n");
		printf("\t\t\t\t         |\n\n\n");
	}
	if (nyawa == 3){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n");
		printf("\t\t\t\t         O\n");
		printf("\t\t\t\t        /|\n\n\n");
	}
	if (nyawa == 2){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n");
		printf("\t\t\t\t         O\n");
		printf("\t\t\t\t        /|\\\n\n\n");
	}
	if (nyawa == 1){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n");
		printf("\t\t\t\t         O\n");
		printf("\t\t\t\t        /|\\\n");
		printf("\t\t\t\t        /\n\n");
	}
	if (nyawa == 0){
		printf("\t\t\t\t       _____\n");
		printf("\t\t\t\t         |\n");
		printf("\t\t\t\t         O\n");
		printf("\t\t\t\t        /|\\\n");
		printf("\t\t\t\t        / \\\n\n");
	}
	
	printf ("\t\t   ");
	for(i = 0; i < 26; i++)
	{
		printf("%c ", al[i]);
	}
	puts("");
	printf("\n\t\t\t  Input huruf yang ingin anda masukkan!\n");
	char jawab;
	printf ("\t\t\t\t   ");
	for(i = 0; i < len; i++)
	{
		printf("%c ", A[i]);
	}
	puts("");
	char kat1[50] ={'b','u','a','h'}, kat2[50] = {'b','i','n','a','t', 'a', 'n', 'g'}, kat3[50] = {'n', 'e', 'g', 'a', 'r', 'a'};
	
//	int a = strcmp(SB, kat1);
//	printf("strcmp = %d\n", a);
	
	if(strcmp(jawabanhm, A) == 0){
		setcolor(10);
		printf("\n\t\t\t   YEAAAAAAAAYYY KAMU MENANG!!!!!\n\n");
		setcolor(7);
		if (nyawa > 0){
			if (strcmp(SB, kat1) == 0){
				file = fopen("scoreboardbuah.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
			else if (strcmp(SB, kat2) == 0){
				file = fopen("scoreboardbinatang.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
			else if (strcmp(SB, kat3) == 0){
				file = fopen("scoreboardnegara.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
		}
		
		printf ("Apakah anda ingin bermain lagi?\n");
		printf("\t   (Y / N)\n");
		do{
			G=getch();
			if(G == 'Y' || G == 'y'){
				system("cls");
				startgakedip();
			}
			else if(G == 'N' || G == 'n'){
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
		
				setcolor(4);
				printf("\t\t\t     ");
				printf("%c%c%c", 220,220,220);
				printf(" %c %c", 220,220);
				printf("  %c ",220);
				printf(" %c%c",220,220,220);
				printf("  %c %c",220,220);
				printf("   %c %c", 220,220);
				printf("  %c", 220);
				printf("  %c %c\n",220,220);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf(" %c", 219);
				printf("  %c%c%c", 219,254,219);
				printf(" %c%c%c",219,254,219);
				printf(" %c %c",219,219);
				printf(" %c%c", 219,219);
				printf("    %c%c%c",223,223,219);
				printf(" %c %c",219,219);
				printf(" %c %c\n",219,219);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf(" %c", 223);
				printf("  %c %c", 223,223);
				printf(" %c %c",223,223);
				printf(" %c %c",223,223);
				printf(" %c %c",223,223);
				printf("   %c%c",223,223);
				printf("   %c",223);
				printf("   %c\n",223);
				Sleep(250);
				
				puts("");
				
				setcolor(2);
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c%c%c",220,220,220);
				printf("  %c", 220);
				printf("  %c%c%c\n",220,220,220);
				Sleep(250);
				
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c%c",219,254);
				printf("  %c %c",219,219);
				printf(" %c%c%c\n",219,220,223);
				Sleep(250);
			
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c",223);
				printf("    %c",223);
				printf("  %c %c\n",223,223);
				Sleep(250);
				
				puts("");
				
				setcolor(1);
				printf("\t\t\t     ");
				printf("     ");
				printf("%c%c%c",220,220,220);
				printf(" %c",220);
				printf("    %c",220);
				printf("  %c %c", 220,220);
				printf(" %c",220);
				printf(" %c%c",220,220,220);
				printf("   %c%c\n",220,220);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf("     ");
				printf("%c%c%c",219,254,223);
				printf(" %c",219);
				printf("   %c%c%c",219,254,219);
				printf(" %c%c%c",223,223,219);
				printf(" %c",219);
				printf(" %c %c",219,219);
				printf(" %c%c%c\n",223,254, 219);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf("     ");
				printf("%c",223);
				printf("   %c%c%c",223,223,223);
				printf(" %c %c",223,223);
				printf(" %c%c",223,223);
				printf("  %c",223);
				printf(" %c %c",223,223);
				printf(" %c%c%c",220,220,223);
				Sleep(250);
				
				printf(" ");Sleep(250);
				printf(" ");Sleep(250);
				printf(" ");Sleep(250);
				setcolor(7);
				exit(0);
			}
		}while(true);
		
		system("pause");
		system("cls");
		startgakedip();
		exit(0);
	}
	if (nyawa == 0)
	{
		setcolor(4);
		printf("\n\t\t\t  YAAAAAAHHHHH NYAWA KAMU HABIS!!!!!\n\n");
		setcolor(7);
		if (nyawa == 0){
			if (strcmp(SB, kat1) == 0){
				file = fopen("scoreboardbuah.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
			if (strcmp(SB, kat2) == 0){
				file = fopen("scoreboardbinatang.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
			if (strcmp(SB, kat3) == 0){
				file = fopen("scoreboardnegara.txt","a");
				fprintf(file, "%d#", nyawa);
				fclose(file);
			}
		}
		
		printf ("Apakah anda ingin bermain lagi?\n");
		printf("\t   (Y / N)\n");
		do{
			G=getch();
			if(G == 'Y' || G == 'y'){
				system("cls");
				start();
			}
			else if(G == 'N' || G == 'n'){
				system("cls");
				printf("\n\n\n\n\n\n\n\n");
		
				setcolor(4);
				printf("\t\t\t     ");
				printf("%c%c%c", 220,220,220);
				printf(" %c %c", 220,220);
				printf("  %c ",220);
				printf(" %c%c",220,220,220);
				printf("  %c %c",220,220);
				printf("   %c %c", 220,220);
				printf("  %c", 220);
				printf("  %c %c\n",220,220);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf(" %c", 219);
				printf("  %c%c%c", 219,254,219);
				printf(" %c%c%c",219,254,219);
				printf(" %c %c",219,219);
				printf(" %c%c", 219,219);
				printf("    %c%c%c",223,223,219);
				printf(" %c %c",219,219);
				printf(" %c %c\n",219,219);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf(" %c", 223);
				printf("  %c %c", 223,223);
				printf(" %c %c",223,223);
				printf(" %c %c",223,223);
				printf(" %c %c",223,223);
				printf("   %c%c",223,223);
				printf("   %c",223);
				printf("   %c\n",223);
				Sleep(250);
				
				puts("");
				
				setcolor(2);
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c%c%c",220,220,220);
				printf("  %c", 220);
				printf("  %c%c%c\n",220,220,220);
				Sleep(250);
				
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c%c",219,254);
				printf("  %c %c",219,219);
				printf(" %c%c%c\n",219,220,223);
				Sleep(250);
			
				printf("\t\t\t       ");
				printf("\t        ");
				printf("%c",223);
				printf("    %c",223);
				printf("  %c %c\n",223,223);
				Sleep(250);
				
				puts("");
				
				setcolor(1);
				printf("\t\t\t     ");
				printf("     ");
				printf("%c%c%c",220,220,220);
				printf(" %c",220);
				printf("    %c",220);
				printf("  %c %c", 220,220);
				printf(" %c",220);
				printf(" %c%c",220,220,220);
				printf("   %c%c\n",220,220);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf("     ");
				printf("%c%c%c",219,254,223);
				printf(" %c",219);
				printf("   %c%c%c",219,254,219);
				printf(" %c%c%c",223,223,219);
				printf(" %c",219);
				printf(" %c %c",219,219);
				printf(" %c%c%c\n",223,254, 219);
				Sleep(250);
				
				printf("\t\t\t     ");
				printf("     ");
				printf("%c",223);
				printf("   %c%c%c",223,223,223);
				printf(" %c %c",223,223);
				printf(" %c%c",223,223);
				printf("  %c",223);
				printf(" %c %c",223,223);
				printf(" %c%c%c",220,220,223);
				Sleep(250);
				
				printf(" ");Sleep(250);
				printf(" ");Sleep(250);
				printf(" ");Sleep(250);
				setcolor(7);
				exit(0);
			}
		}while(true);
		
		system("pause");
		system("cls");
		startgakedip();
		exit(0);
	} 
	do
	{
		jawab = getch(); 
		if((jawab >= 'A' && jawab <= 'Z') || jawab >= 'a' && jawab <= 'z') //CAPSLOCK non CAPSLOCK W w
		{
			if(jawab >= 'A' && jawab <= 'Z') // A = 65
			{
				al[jawab % 'A'] = 178; // B = 66 % 65 = al[1] = 66 -> 178
				jawab = jawab + 32;
			}
			else 
			{
				al[jawab % 'a'] = 178;
			}
			break;
		}
	}while(true);
	int cek = 0;
	for (i=0; i<len; i++)
	{
		if(jawab == jawabanhm[i])
		{
			A[i]=jawab;
			cek = 1;
		}
		else if(i == len - 1 && cek == 0)
		{
			nyawa--;
		}
	}
	printf("\n");
	system("cls");
	maingame(SB, A, nyawa,soalhm, jawabanhm, len, al);
	exit(0);
}

struct data
{
	char nama[100];
	int nyawa;
}orang[101];

void scoreboardbuah()
{
	int i = 0;
	file = fopen("scoreboardbuah.txt", "r");
	while ((fscanf(file, "%[^#]#%d#", orang[i].nama, &orang[i].nyawa)) != EOF)
	{
		i++;
	}
	
	i++;
	//bubble sort
	for (int j=0; j<i-1; j++)
	{
		for (int k=j+1; k<i; k++)
		{
			if (orang[j].nyawa < orang[k].nyawa)
			{
				int temp;
				char temp2[105];
				
				temp = orang[j].nyawa;
				strcpy(temp2, orang[j].nama);
				
				orang[j].nyawa = orang[k].nyawa;
				strcpy(orang[j].nama, orang[k].nama);
				
				orang[k].nyawa = temp;
				strcpy(orang[k].nama, temp2);
			}
		}
	}
	
	//printf sortingan
	setcolor(14);
	printf ("\n");
	printf("\t\t\t\t        SCOREBOARD BUAH\n\n");
	setcolor(12);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c",186);
	setcolor(7);
	printf("        Juara        ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("                      Nama                      ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("        Score        ");
	setcolor(12);
	printf("%c\n",186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	setcolor(7);
	if (i >= 10)
	{	
		for (int j=0; j<10; j++)
		{
			setcolor(10);
			printf (" %c", 186);
			setcolor(7);
			printf("          %-11d",j+1);
			setcolor(10);
			printf("%c", 186);
			setcolor(7);
			printf("                      %-24s  ",orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	else
	{
		for (int j=0; j<i-1; j++)
		{
			setcolor(10);
			printf (" %c",186);
			setcolor(7);
			printf("          %-11d", j+1);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("                      %-24s  ",orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	setcolor(7);
	puts("");
	int pil5;
	int T = 0;
	printf("1.Cari nama\n");
	printf("2.Kembali ke pilihan scoreboard\n");
	printf("3.Kembali ke menu utama\n\n");
	printf("Pilihan anda : ");
	scanf("%d", &pil5);
	getchar();
	
	printf("\n");
	switch(pil5){
		case 1:
			char name3[100];
			system("cls");
			printf ("Cari nama anda : ");
			scanf (" %[^\n]", name3);
			getchar();
			printf("\n");
			setcolor(12);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
			printf(" %c",186);
			setcolor(7);
			printf("        Juara        ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("                      Nama                      ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("        Score        ");
			setcolor(12);
			printf("%c\n",186);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
			setcolor(7);
			for(int k=0;k<i;k++){
				if (strcmp(name3, orang[k].nama) == 0){
					setcolor(10);
					printf (" %c",186);
					setcolor(7);
					printf("          %-11d",k+1);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("                      %-24s  ",orang[k].nama);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("          %-11d", orang[k].nyawa);
					setcolor(10);
					printf("%c\n",186);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
					T=1;
				}
				if (k == i-1 && T == 0){
					setcolor(7);
					printf("\nMaaf, tidak terdapat nama \"%s\"\n", name3);
				}
			}
			
			setcolor(7);
			printf("\n");
			printf("Apakah anda ingin mencari nama lain? ");
			printf("(Y / N)\n");
			do{
				G=getch();
				if(G == 'Y' || G == 'y'){
					system("cls");
					scoreboardbuah();
				}
				else if(G == 'N' || G == 'n'){
					system("cls");
					startgakedip();
				}
			}while(true);
			
			system("pause");
			system("cls");
			startgakedip();
			exit(0);
		case 2:
			system("cls");
			scoreboard();
			exit(0);
		case 3:
			system("cls");
			startgakedip();
			exit(0);
	}
	fclose(file);
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void scoreboardbinatang()
{
	int i = 0;
	file = fopen("scoreboardbinatang.txt", "r");
	while ((fscanf(file, "%[^#]#%d#", orang[i].nama, &orang[i].nyawa)) != EOF)
	{
		i++;
	}
	
	
	i++;
	//bubble sort
	for (int j=0; j<i-1; j++)
	{
		for (int k=j+1; k<i; k++)
		{
			if (orang[j].nyawa < orang[k].nyawa)
			{
				int temp;
				char temp2[105];
				
				temp = orang[j].nyawa;
				strcpy(temp2, orang[j].nama);
				
				orang[j].nyawa = orang[k].nyawa;
				strcpy(orang[j].nama, orang[k].nama);
				
				orang[k].nyawa = temp;
				strcpy(orang[k].nama, temp2);
			}
		}
	}
	
	//printf sortingan
	setcolor(14);
	printf("\n");
	printf("\t\t\t\t       SCOREBOARD BINATANG\n\n");
	setcolor(12);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c",186);
	setcolor(7);
	printf("        Juara        ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("                      Nama                      ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("        Score        ");
	setcolor(12);
	printf("%c\n",186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	setcolor(7);
	if (i >= 10)
	{	
		for (int j=0; j<10; j++)
		{
			setcolor(10);
			printf (" %c",186);
			setcolor(7);
			printf("          %-11d", j+1);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("                      %-24s  ", orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	else
	{
		for (int j=0; j<i-1; j++)
		{
			setcolor(10);
			printf (" %c",186);
			setcolor(7);
			printf("          %-11d", j+1);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("                      %-24s  ", orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	setcolor(7);
	puts("");
	int pil6;
	int T=0;
	printf("1.Cari nama\n");
	printf("2.Kembali ke pilihan scoreboard\n");
	printf("3.Kembali ke menu utama\n\n");
	printf("Pilihan anda : ");
	scanf("%d", &pil6);
	getchar();
	
	printf("\n");
	switch(pil6){
		case 1:
			char name1[100];
			system("cls");
			printf ("Cari nama anda : ");
			scanf (" %[^\n]", name1);
			getchar();
			puts("");
			setcolor(12);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
			printf(" %c",186);
			setcolor(7);
			printf("        Juara        ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("                      Nama                      ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("        Score        ");
			setcolor(12);
			printf("%c\n",186);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
			setcolor(7);
			for(int k=0;k<i;k++){
				if (strcmp(name1, orang[k].nama) == 0){
					setcolor(10);
					printf(" %c",186);
					setcolor(7);
					printf("          %-11d",k+1);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("                      %-24s  ",orang[k].nama);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("          %-11d", orang[k].nyawa);
					setcolor(10);
					printf("%c\n",186);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
					T=1;
				}
				if (k == i-1 && T == 0){
					setcolor(7);
					printf("\nMaaf, tidak terdapat nama \"%s\"\n", name1);
				}
			}
			
			setcolor(7);
			printf("\n");
			printf("Apakah anda ingin mencari nama lain? ");
			printf("(Y / N)");
			do{
				G=getch();
				if(G == 'Y' || G == 'y'){
					system("cls");
					scoreboardbinatang();
				}
				else if(G == 'N' || G == 'n'){
					system("cls");
					startgakedip();
				}
			}while(true);
			
			system("pause");
			system("cls");
			startgakedip();
			exit(0);
		case 2:
			system("cls");
			scoreboard();
			exit(0);
		case 3:
			system("cls");
			startgakedip();
			exit(0);
	}

	fclose(file);
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void scoreboardnegara()
{
	int i = 0;
	file = fopen("scoreboardnegara.txt", "r");
	while ((fscanf(file, "%[^#]#%d#", orang[i].nama, &orang[i].nyawa)) != EOF)
	{
		i++;
	}
	
	i++;
	//bubble sort
	for (int j=0; j<i-1; j++)
	{
		for (int k=j+1; k<i; k++)
		{
			if (orang[j].nyawa < orang[k].nyawa)
			{
				int temp;
				char temp2[105];
				
				temp = orang[j].nyawa;
				strcpy(temp2, orang[j].nama);
				
				orang[j].nyawa = orang[k].nyawa;
				strcpy(orang[j].nama, orang[k].nama);
				
				orang[k].nyawa = temp;
				strcpy(orang[k].nama, temp2);
			}
		}
	}
	
	//printf sortingan
	setcolor(14);
	printf ("\n");
	printf("\t\t\t\t       SCOREBOARD NEGARA\n\n");
	setcolor(12);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
	printf(" %c",186);
	setcolor(7);
	printf("        Juara        ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("                      Nama                      ");
	setcolor(12);
	printf("%c",186);
	setcolor(7);
	printf("        Score        ");
	setcolor(12);
	printf("%c\n",186);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	setcolor(7);
	if (i >= 10)
	{	
		for (int j=0; j<10; j++)
		{
			setcolor(10);
			printf (" %c",186);
			setcolor(7);
			printf("          %-11d", j+1);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("                      %-24s  ", orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	else
	{
		for (int j=0; j<i-1; j++)
		{
			setcolor(10);
			printf (" %c",186);
			setcolor(7);
			printf("          %-11d", j+1);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("                      %-24s  ", orang[j].nama);
			setcolor(10);
			printf("%c",186);
			setcolor(7);
			printf("          %-11d", orang[j].nyawa);
			setcolor(10);
			printf("%c\n",186);
		}
		printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
	}
	
	setcolor(7);
	puts("");
	int pil7;
	int T=0;
	printf("1.Cari nama\n");
	printf("2.Kembali ke pilihan scoreboard\n");
	printf("3.Kembali ke menu utama\n\n");
	printf("Pilihan anda : ");
	scanf("%d", &pil7);
	getchar();
	
	printf("\n");
	switch(pil7){
		case 1:
			char name2[100];
			system("cls");
			printf ("Cari nama anda : ");
			scanf (" %[^\n]", name2);
			getchar();
			printf("\n");
			setcolor(12);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 203,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,203,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,187);
			printf(" %c",186);
			setcolor(7);
			printf("        Juara        ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("                      Nama                      ");
			setcolor(12);
			printf("%c",186);
			setcolor(7);
			printf("        Score        ");
			setcolor(12);
			printf("%c\n",186);
			printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
			setcolor(7);
			for(int k=0;k<i;k++){
				if (strcmp(name2, orang[k].nama) == 0){
					setcolor(10);
					printf(" %c",186);
					setcolor(7);
					printf("          %-11d",k+1);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("                      %-24s  ",orang[k].nama);
					setcolor(10);
					printf("%c",186);
					setcolor(7);
					printf("          %-11d", orang[k].nyawa);
					setcolor(10);
					printf("%c\n",186);
					printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205, 202,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,202,205, 205,205,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,205,205,205,188);
					T=1;
				}
				if (k == i-1 && T == 0){
					setcolor(7);
					printf("\nMaaf, tidak terdapat nama \"%s\"\n", name2);
				}
			}
			
			setcolor(7);
			printf("\n");
			printf("Apakah anda ingin mencari nama lain? ");
			printf("(Y / N)");
			do{
				G=getch();
				if(G == 'Y' || G == 'y'){
					system("cls");
					scoreboardnegara();
				}
				else if(G == 'N' || G == 'n'){
					system("cls");
					startgakedip();
				}
			}while(true);
			
			system("pause");
			system("cls");
			startgakedip();
			exit(0);
		case 2:
			system("cls");
			scoreboard();
			exit(0);
		case 3:
			system("cls");
			startgakedip();
			exit(0);
	}
	fclose(file);
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void scoreboard(){
	int pil3;
	printf("\n\n\n\n\n\n\n\n\t\t\t  ");
	printf ("Silahkan pilih scoreboard sesuai kategori");
	setcolor(4);
	printf("\n\n\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 219,219,219,219,219,219,219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	printf("\t\t\t     %c                                %c\t\t\t\t\n", 219, 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("   1. Scoreboard Buah");
	setcolor(4);
	printf("\t      %c\n", 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("   2. Scoreboard Binatang");
	setcolor(4);
	printf("     %c\n", 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("   3. Scoreboard Negara");
	setcolor(4);
	printf("       %c\n", 219);
	printf("\t\t\t     %c  ",219);
	setcolor(7);
	printf ("   4. Kembali ke menu utama");
	setcolor(4);
	printf("   %c\n", 219);
	printf("\t\t\t     %c                                %c\t\t\t\t\n", 219, 219);
	printf("\t\t\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n", 219,219,219,219,219,219,219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	setcolor(7);
	printf ("\t\t\t\t   Masukkan pilihan : ");
	scanf ("%d", &pil3);
	
	switch (pil3){
		case 1:
			system("cls");
			scoreboardbuah();
			exit(0);
		case 2:
			system("cls");
			scoreboardbinatang();
			exit(0);
		case 3:
			system("cls");
			scoreboardnegara();
			exit(0);
		case 4:
			system("cls");
			startgakedip();
			exit(0);
		default:
			printf("\t\t\t    Masukkan pilihan angka yang tersedia\n\n\n\n\n\n\n\n\n");
			system("pause");
			system("cls");
			scoreboard();
			exit(0);
	}

	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

void help(){
	char asci = 126;
	setcolor(14);
	printf ("\n\t\t\t    =====RULES PERMAINAN HANGMAN=====\n\n");
	setcolor(13);
	for (int i=0;i<48;i++){
		printf ("%c ", asci);
		Sleep(10);
	}
	
	printf ("\n");
	setcolor(10);
	puts("");
	printf ("\t\t  1. Jangan masukkan huruf ke dalam pilihan\n\n");
	printf ("\t\t  2. Jika sudah memilih huruf yang salah, kemudian memilih kembali,\n\t\t\t\tmaka nyawa akan tetap berkurang.\n\n");
	printf ("\t\t  3. Pilih kategori sesuai yang diinginkan.\n\n");
	printf ("\t\t  4. Jangan menginputkan simbol.\n\n");
	printf ("\t\t  5. Jika anda kalah, jangan menyerah yach :)\n\n");
	setcolor(13);
	for (int i=0;i<48;i++){
		printf ("%c ", asci);
		Sleep(10);
	}
	printf ("\n");
	setcolor(7);
	printf("\t\t\t     Tekan \"M\" untuk kembali ke menu");
	do{
		G=getch();
		if(G == 'M' || G == 'm'){
			system("cls");
			startgakedip();
		}
	}while(true);
	
	system("pause");
	system("cls");
	startgakedip();
	exit(0);
}

int main(){
	system("mode con cols=96 lines=30");
	srand(time(0));
	start();
	return 0;
}

//void merge(long long int array[], long long int l, long long int m, long long int r)
//{
//	long long int n1 = m - l + 1;
//	long long int n2 = r - m;
//	
//	long long int i, j, k;
//	long long int L[n1], R[n2];
//	
//	for (i = 0; i < n1; i++)
//	{
//		L[i] = array[l + i];
//	}
//	for (j = 0; j < n2; j++)
//	{
//		R[j] = array[m + 1 + j];
//	}
//	
//	i = 0;
//	j = 0;
//	k = l;
//	
//	while (i < n1 && j < n2)
//	{
//		if (L[i] <= R[j])
//		{
//			array[k] = L[i];
//			i++;
//		}
//		else
//		{
//			array[k] = R[j];
//			j++;
//		}
//		k++;
//	}
//	
//	while (i < n1)
//	{
//		array[k] = L[i];
//		i++;
//		k++;
//	}
//	
//	while (j < n2)
//	{
//		array[k] = R[j];
//		j++;
//		k++;
//	}
//}
//
//void mergesort(long long int array[], long long int l, long long int r)
//{
//	if (l < r)
//	{
//		long long int m = l + (r - l) / 2;
//		
//		mergesort(array, l, m);
//		mergesort(array, m + 1, r);
//		
//		merge(array, l, m, r);
//	}
//}
