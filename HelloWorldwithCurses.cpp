#include <curses.h>
int main(){
    WINDOW *w;
    w = initscr();
    curs_set(0); //visible cursor

    //start main
    printw("Hello Ncurse!");
    getch(); //wait keyboard

    //end main
    endwin();
    return 0;
}