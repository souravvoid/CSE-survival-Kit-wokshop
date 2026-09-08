/*
 * =============================================
 *   STAR COMMANDER — An ASCII Space Defender
 * =============================================
 *
 * CSE SURVIVAL KIT — Final Mini-Project
 *
 * You are the last defender of Sector 7.
 * Enemy ships (V) descend from the top.
 * Your ship (^) is at the bottom.
 * Fire bullets (|) to destroy them.
 * Each kill = +10 points.
 * Each enemy that reaches the bottom = -1 life.
 * You start with 3 lives. Survive as long as you can.
 *
 * Controls:
 *   A = Move left
 *   D = Move right
 *   F = Fire
 *   Q = Quit
 *
 * Compile: gcc star_commander.c -o star_commander
 * Run:     ./star_commander
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ---- CONFIGURATION ---- */
#define FIELD_W 21     /* game field width  */
#define FIELD_H 10     /* game field height */
#define MAX_ENEMIES 5  /* max enemies on screen at once */

/* ---- DATA STRUCTURES ---- */

/* Entity — used for both enemies and the bullet */
typedef struct {
    int x, y;       /* position on the field */
    int active;     /* 1 = alive/on-screen, 0 = inactive */
} Entity;

/* Player — the user's ship */
typedef struct {
    int x;          /* horizontal position */
    int lives;      /* remaining lives */
    int score;      /* current score */
} Player;

/* ---- GLOBAL GAME STATE ---- */
Player player;
Entity enemies[MAX_ENEMIES];
Entity bullet;
int running;   /* 1 = game is active, 0 = game over */

/* ---- FUNCTIONS ---- */

/*
 * init — reset all game state to starting values.
 * Sets player to center, 3 lives, 0 score.
 * Deactivates all enemies and the bullet.
 */
void init() {
    int i;
    player.x = FIELD_W / 2;
    player.lives = 3;
    player.score = 0;
    bullet.active = 0;
    running = 1;

    for (i = 0; i < MAX_ENEMIES; i++)
        enemies[i].active = 0;

    srand(time(NULL));  /* seed random number generator */
}

/*
 * draw — render the game field to the terminal.
 * Clears the screen, then draws the header, the field
 * (row by row, column by column), and the controls.
 */
void draw() {
    int r, c, e, hit;

    system("clear");  /* use "cls" on Windows */

    printf("\n");
    printf("  ===================================\n");
    printf("  |     S T A R   C O M M A N D E R |\n");
    printf("  ===================================\n");
    printf("  |  Score: %-5d     Lives: %-2d     |\n",
           player.score, player.lives);
    printf("  -----------------------------------\n");

    /* Draw each row of the field */
    for (r = 0; r < FIELD_H; r++) {
        printf("  | ");
        for (c = 0; c < FIELD_W; c++) {
            hit = 0;

            /* Priority 1: Check if an enemy is at this position */
            for (e = 0; e < MAX_ENEMIES; e++) {
                if (enemies[e].active &&
                    enemies[e].x == c && enemies[e].y == r) {
                    printf("V");
                    hit = 1;
                    break;
                }
            }

            /* Priority 2: Check if the bullet is at this position */
            if (!hit && bullet.active &&
                bullet.x == c && bullet.y == r) {
                printf("|");
                hit = 1;
            }

            /* Priority 3: Check if the player is at this position */
            if (!hit && r == FIELD_H - 1 && c == player.x) {
                printf("^");
                hit = 1;
            }

            /* Nothing here — draw empty space */
            if (!hit)
                printf(".");
        }
        printf(" |\n");
    }

    printf("  -----------------------------------\n");
    printf("  |  [A] Left  [D] Right  [F] Fire  |\n");
    printf("  |  [Q] Quit                       |\n");
    printf("  ===================================\n");
}

/*
 * spawn — create a new enemy at the top of the field.
 * Finds the first inactive enemy slot and activates it
 * with a random x-position and y = 0 (top row).
 */
void spawn() {
    int i;
    for (i = 0; i < MAX_ENEMIES; i++) {
        if (!enemies[i].active) {
            enemies[i].x = rand() % FIELD_W;
            enemies[i].y = 0;
            enemies[i].active = 1;
            return;
        }
    }
}

/*
 * update — advance the game state by one tick.
 * Moves the bullet up, moves enemies down,
 * checks for bullet-enemy collisions,
 * removes enemies that reached the bottom,
 * and randomly spawns new enemies.
 */
void update() {
    int i;

    /* Move bullet upward */
    if (bullet.active) {
        bullet.y--;
        if (bullet.y < 0)
            bullet.active = 0;  /* bullet left the field */
    }

    /* Move enemies downward */
    for (i = 0; i < MAX_ENEMIES; i++) {
        if (enemies[i].active) {
            enemies[i].y++;

            /* Enemy reached the bottom — player loses a life */
            if (enemies[i].y >= FIELD_H) {
                enemies[i].active = 0;
                player.lives--;
                if (player.lives <= 0)
                    running = 0;
            }
        }
    }

    /* Check if bullet hit any enemy */
    if (bullet.active) {
        for (i = 0; i < MAX_ENEMIES; i++) {
            if (enemies[i].active &&
                enemies[i].x == bullet.x &&
                enemies[i].y == bullet.y) {
                enemies[i].active = 0;  /* destroy enemy */
                bullet.active = 0;      /* bullet is spent */
                player.score += 10;     /* score +10 */
                break;
            }
        }
    }

    /* Random chance to spawn a new enemy (~33% per tick) */
    if (rand() % 3 == 0)
        spawn();
}

/* ---- MAIN ---- */

int main() {
    char cmd;

    init();

    /* Show title screen */
    printf("\n  ===================================\n");
    printf("  |     S T A R   C O M M A N D E R |\n");
    printf("  ===================================\n");
    printf("  |                                 |\n");
    printf("  |  Defend Sector 7 from enemies!  |\n");
    printf("  |                                 |\n");
    printf("  |  ^ = Your ship                  |\n");
    printf("  |  V = Enemy ship                 |\n");
    printf("  |  | = Your bullet                |\n");
    printf("  |                                 |\n");
    printf("  |  A = Move left                  |\n");
    printf("  |  D = Move right                 |\n");
    printf("  |  F = Fire                       |\n");
    printf("  |  Q = Quit                       |\n");
    printf("  |                                 |\n");
    printf("  ===================================\n");
    printf("\n  Press Enter to begin...");
    getchar();

    /* ---- GAME LOOP ---- */
    /* Each iteration: draw -> input -> update */
    while (running) {
        draw();

        printf("  Your command: ");
        scanf(" %c", &cmd);

        /* Process player input */
        if (cmd == 'a' || cmd == 'A') {
            if (player.x > 0)
                player.x--;
        } else if (cmd == 'd' || cmd == 'D') {
            if (player.x < FIELD_W - 1)
                player.x++;
        } else if ((cmd == 'f' || cmd == 'F') && !bullet.active) {
            bullet.x = player.x;
            bullet.y = FIELD_H - 2;  /* one row above player */
            bullet.active = 1;
        } else if (cmd == 'q' || cmd == 'Q') {
            running = 0;
        }

        /* Update game state */
        update();
    }

    /* ---- GAME OVER ---- */
    draw();
    printf("\n  ===================================\n");
    printf("  |        G A M E   O V E R        |\n");
    printf("  |    Final Score: %-5d           |\n", player.score);
    printf("  ===================================\n\n");

    return 0;
}
