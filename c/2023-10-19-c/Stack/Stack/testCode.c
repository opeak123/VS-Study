#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

int bird_x, bird_y;
int pipe_height;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setup() {
    bird_x = WIDTH / 2;
    bird_y = HEIGHT / 2;
    pipe_height = rand() % (HEIGHT - 3);
}

void draw() {
    system("cls");

    for (int i = 0; i <= HEIGHT; ++i) {
        for (int j = 0; j <= WIDTH; ++j) {
            if (j == bird_x && i == bird_y)
                printf("*"); // Bird
            else if (j == WIDTH && (i > pipe_height && i < pipe_height + 3))
                printf(" "); // Pipe gap
            else if (j == WIDTH)
                printf("|"); // Pipe
            else
                printf(" ");
        }
        printf("\n");
    }
}

void update() {
    char ch;

    if (_kbhit()) {
        ch = _getch();
        switch (ch) {
        case 'a':
            --bird_y;
            break;

        case 'd':
            ++bird_y;
            break;

        default:
            break;
        }
    }

    gotoxy(WIDTH, pipe_height);
    printf(" ");
    gotoxy(WIDTH, pipe_height + 3);
    printf("|");

    --pipe_height;

    if (pipe_height < -1)
        pipe_height = rand() % (HEIGHT - 3);

}

void game_over() {
    if (bird_y <= 0 || bird_y >= HEIGHT) {
        system("cls");
        printf("\n\n\t\tGame Over\n\n");
        exit(0);
    }
}


int main(void) {

    setup();

    while (1) {
        draw();
        update();
        game_over();
        Sleep(100);
    }
    return(0);
}
