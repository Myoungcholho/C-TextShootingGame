#pragma once
#include "structHeader.h"

#define FILE_MAX_NAME 20
#define FILE_MAX_NUM 10
#define ENEMYNUM 20

extern char* fileStartPoint[FILE_MAX_NUM];
extern int f_count;
extern Enemy _Enemy[ENEMYNUM];

short my_atoi(short* input);
void stageInput(); //char* fileStartPoint[10], int p_count, Enemy e[20]
int InitFile(const char* str); //, char* fileStartPoint[10]