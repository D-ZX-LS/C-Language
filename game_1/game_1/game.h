#pragma once

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走子
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走子
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏状态
//1. 玩家赢   - *
//2. 电脑赢   - #
//3. 平局     - D
//4. 游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);