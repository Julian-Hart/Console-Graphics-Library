#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>

#define packed __attribute__((packed))
#define export __attribute__((visibility(default)))
#define protected __attribute__((visibility(hidden)))
#define private __attribute__((visibility(hidden))) static

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;
typedef unsigned short int frame;

//fill framebuffer with data on screen
struct s_framebuffer {
    //store changes 0=unchanged 1=changed
    frame *frames;
    bool bitmap[];
} packed;
typedef struct s_framebuffer framebuffer;

#define $1 (int8 *)
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)
#define $c (char *)
#define $i (int)

struct s_window {
    int8 id;
    int8 x;
    int8 y;
    int8 cols;
    int8 rows;
    int8 title[16];
    bool active;
    framebuffer *fr;
} packed;
typedef struct s_window window;

//constructors

private framebuffer *mkfb(int16);
export window *mkwin(int8, int8, int8*);

int main(int, char**);



