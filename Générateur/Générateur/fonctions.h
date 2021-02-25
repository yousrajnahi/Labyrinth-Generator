#pragma once
#include<SDL.h>
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#define bool int
#define true 1
#define false 0
#define hauteur_fenetre 715
#define largeur_fenetre 715
#define L  119
#define pix 5

typedef struct point
{
    int x;
    int y;
    int val;
    int vsi;

}point;


extern  int i, j;
extern  point stack[9999];
extern  point tab[L][L];
extern  point nextp;
extern  point p;
extern  SDL_Rect rect[L][L];
extern  SDL_Window* window;
extern  SDL_Renderer* renderer;
extern  int isRunning;

void connect_cell(point u, point v);
int Initialisation_creation();
SDL_Rect newSDL_Rect(int xs, int ys, int widths, int heights);
point rand_vois(point p);
void Quiter_detruire();
void setup();
void processInput();
point rand_vois_nonvi(point p);
void render();
void Labyrinthe();
int verifier(point p);