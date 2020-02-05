#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#define CYCLES_FOR_UPDATE 30
#define AREA_X 10
#define AREA_Y 10

unsigned short timer = 0;
unsigned short i;
unsigned short j;
char key = 'd';
char **area;

typedef struct snake {
    unsigned short xpos;
    unsigned short ypos;
    struct snake *next;
} snake_t;

char** initialize_area();
void draw_area(char **area);

int main() {
    **area = **initialize_area();
    draw_area(area);

    while(1) {
        printf("a");
    }
/*
    // Initialize the snake.
    snake_t *head = NULL;
    head = (snake_t*) malloc(sizeof(snake_t));
    head->xpos = 1;
    head->ypos = 1;
    
    while(1) {
        // Poll inputs every 16ms.
        usleep(16 * 1000);
        if (_kbhit()) {
            key = _getch();
        }

        // Advance the timer and update the scene.
        timer++;
        if (timer >= CYCLES_FOR_UPDATE) {
            switch (key) {
                case 'd':
                    head->xpos++;
                    break;
                default:
                    break;
            }
            // Position the head in the play area.
            area[head->xpos][head->ypos] = '@';

            timer = 0;
        }
    }
*/
    return 0;
}

char** initialize_area() {
    unsigned short i;
    unsigned short j;
    char **area;

    for (j = 0; j < AREA_Y; j++) {
        for (i = 0; i < AREA_X; i++) {
            if (i == 0 || j == 0) {
                area[i][j] = '#';
            } else {
                area[i][j] = ' ';
            }
        }
    }

    return area;
}

void draw_area(char **area) {
    system("@cls||clear");
    for (i = 0; i < AREA_X; i++) {
        printf("a%c\n", area[i]);
    }
}