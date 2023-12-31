#pragma once

#include "GetHtml.h"
#include "JsonParse.h"
#include "StrToW.h"
#include "ShuffleRandom.h"
//#include "Random.h"

//CURL
string curlResult;
const char* _link = "https://raw.githubusercontent.com/rihyungame/EverydayRead/master/EverydayRead/guideline.json";

//STRING
std::vector<string> sentences;
std::wstring sentence;

//Wstring Convert
StrToW strToW;

//mt19937 Random
//Random random;

//ShuffleRandom
ShuffleRandom shuffleRandom;
int randNum;

//WINDOW
#define TITLE L"EverydayRead"
#define WIDTH 800
#define HEIGHT 200

HINSTANCE g_hInst;
HWND g_hwnd;

RECT rc = { 0, 0, WIDTH, HEIGHT };

HRESULT			 InitWindow(HINSTANCE hInstance, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);