#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>

#define WINDOW_WIDTH (100)
#define WINDOW_HEIGHT (100)

int n,m,i,j,suma;




int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        printf("error initializing SDL: %s\n",SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Saper", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT,0);
    
    if (!win)
    {
        printf("error creating window: %s\n", SDL_GetError());
    }
    
    Uint32 render_flags = SDL_RENDERER_ACCELERATED;
    SDL_Renderer* rend = SDL_CreateRenderer(win, -1, render_flags);
    
    if (!rend)
    {
        printf("error recating renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Surface* surface = NULL;
    
    surface = IMG_Load("saperimg/saperimg1.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box1 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box1)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg2.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box2 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box2)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg3.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box3 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box3)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg4.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box4 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box4)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg5.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box5 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box5)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg6.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box6 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box6)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg7.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box7 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box7)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimg8.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* box8 =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!box8)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimgblank.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* boxblank = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!boxblank)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimgcover.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* boxcover =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!boxcover)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimgbomb.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* boxbomb =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!boxbomb)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimgflag.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* boxflag =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!boxflag)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    surface = IMG_Load("saperimg/saperimgflagx.bmp");
    if (!surface)
    {
        printf("error creating surface\n");
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    SDL_Texture* boxflagx =SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!boxflagx)
    {
        printf("error creating texture: %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    
    
    n=10;
    m=10;
    n+=2;
    m+=2;
    int plansza[n][m];
    int plansza2[n-2][m-2];
    int plansza3[n-2][m-2];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++)
            plansza[i][j]=0;
    };

    int ile = 20;
    srand(time(0));
    while(ile>0){
        i=1+rand()%(n-2);
        j=1+rand()%(m-2);
        if (plansza[i][j]==0){
            plansza[i][j]=1;
            ile-=1;
            };
        };

    for (i=1;i<n-1;i++){
        for (j=1;j<m-1;j++){
            if (plansza[i][j]==0)
                suma=plansza[i-1][j-1]+plansza[i][j-1]+plansza[i+1][j-1]+plansza[i-1][j]+plansza[i+1][j]+plansza[i-1][j+1]+plansza[i][j+1]+plansza[i+1][j+1];
            else
                suma=9;
            plansza2[i-1][j-1]=suma;
            
        };
    };
    
    for (i=0;i<n-2;i++)
    {
        for (j=0;j<m-2;j++)
        {
            plansza3[i][j]=0;
        }
    }


    
    SDL_RenderClear(rend);
    
    int close_requested = 0;  
    SDL_Rect rect;
    rect.h = 10;
    rect.w = 10;
    SDL_Event event;
    
    
    while(!close_requested)
    {
        int mouse_x, mouse_y;
        int mysz = SDL_GetMouseState(&mouse_x,&mouse_y);
        for ( i=0;i<n-2;i++){
            for ( j=0;j<m-2;j++)
            {
                rect.x = i * 10;
                rect.y = j * 10;
                if( plansza3[i][j] == 1 )
                {
                    if( plansza2[i][j] == 0 )
                    {
                        SDL_RenderCopy(rend, boxblank, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 1 )
                    {
                        SDL_RenderCopy(rend, box1, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 2 )
                    {
                        SDL_RenderCopy(rend, box2, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 3 )
                    {
                        SDL_RenderCopy(rend, box3, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 4 )
                    {
                        SDL_RenderCopy(rend, box4, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 5 )
                    {
                        SDL_RenderCopy(rend, box5, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 6 )
                    {
                        SDL_RenderCopy(rend, box6, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 7 )
                    {
                        SDL_RenderCopy(rend, box7, NULL, &rect);
                    }
                    else if ( plansza2[i][j] == 8 )
                    {
                        SDL_RenderCopy(rend, box1, NULL, &rect);
                    }
                    
                    }
                else if (plansza3[i][j] == 2)
                {
                    SDL_RenderCopy(rend, boxflag, NULL, &rect);
                }
                else if (plansza3[i][j] == 0)
                {
                    SDL_RenderCopy(rend, boxcover, NULL, &rect);
                }
            }
        }
        
        
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                close_requested = 1;
            }
        }
        
        if ( mysz & SDL_BUTTON(SDL_BUTTON_LEFT) )
        {
            if ( plansza3[mouse_x/10][mouse_y/10] == 0 )
            {
                plansza3[mouse_x/10][mouse_y/10]=1;
                if (plansza2[mouse_x/10][mouse_y/10] == 9)
                {
                    for ( i=0;i<n-2;i++){
                        for ( j=0;j<m-2;j++)
                        {
                            rect.x = i * 10;
                            rect.y = j * 10;
                            
                            if (plansza3[i][j] == 2)
                            { 
                                if (plansza2[i][j] == 9)
                                {
                                    SDL_RenderCopy(rend, boxflag, NULL, &rect);
                                }
                                else
                                {
                                    SDL_RenderCopy(rend, boxflagx, NULL, &rect);
                                }
                                
                            }
                            else if( plansza2[i][j] == 0 )
                            {
                                SDL_RenderCopy(rend, boxblank, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 1 )
                            {
                                SDL_RenderCopy(rend, box1, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 2 )
                            {
                                SDL_RenderCopy(rend, box2, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 3 )
                            {
                                SDL_RenderCopy(rend, box3, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 4 )
                            {
                                SDL_RenderCopy(rend, box4, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 5 )
                            {
                                SDL_RenderCopy(rend, box5, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 6 )
                            {
                                SDL_RenderCopy(rend, box6, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 7 )
                            {
                                SDL_RenderCopy(rend, box7, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 8 )
                            {
                                SDL_RenderCopy(rend, box1, NULL, &rect);
                            }
                            else if ( plansza2[i][j] == 9 )
                            {
                                SDL_RenderCopy(rend, boxbomb, NULL, &rect);
                            }
                        }
                    }
                    
                    while(!close_requested)
                    {
                        SDL_RenderPresent(rend);
                        while (SDL_PollEvent(&event))
                        {
                            if (event.type == SDL_QUIT)
                            {
                                close_requested = 1;
                            }
                        }
                        
                    }
                        
                    
                }
                
            }
        }
        else if ( mysz & SDL_BUTTON(SDL_BUTTON_RIGHT) ) 
        {
            if ( plansza3[mouse_x/10][mouse_y/10] == 0 )
            {
                plansza3[mouse_x/10][mouse_y/10] = 2;
            }
            else if ( plansza3[mouse_x/10][mouse_y/10] == 2 )
            {
                plansza3[mouse_x/10][mouse_y/10] = 0;
            }
        }
        
        
        
        SDL_RenderPresent(rend);
        SDL_Delay(1000/60);
        SDL_RenderClear(rend);
    }
    
    
    
    SDL_DestroyTexture(box1);
    SDL_DestroyTexture(box2);
    SDL_DestroyTexture(box3);
    SDL_DestroyTexture(box4);
    SDL_DestroyTexture(box5);
    SDL_DestroyTexture(box6);
    SDL_DestroyTexture(box7);
    SDL_DestroyTexture(box8);
    SDL_DestroyTexture(boxflag);
    SDL_DestroyTexture(boxflagx);
    SDL_DestroyTexture(boxcover);
    SDL_DestroyTexture(boxblank);
    SDL_DestroyTexture(boxbomb);
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
