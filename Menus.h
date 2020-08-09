//# License
//----------
//The source code in this project is licensed under the MIT license.
//The media assets such as artwork, custom fonts, music and sound effects are licensed under a separate license.
//A copy of that license can be found in the 'Assets' directory.

#pragma once

#include <stdint.h>

typedef struct MENUITEM
{
	char* Name;

	int16_t x;

	int16_t y;

	BOOL Enabled;

	void(*Action)(void);

} MENUITEM;

typedef struct MENU
{
	char* Name;

	uint8_t SelectedItem;

	uint8_t ItemCount;

	MENUITEM** Items;

} MENU;

void MenuItem_TitleScreen_Resume(void);

void MenuItem_TitleScreen_StartNew(void);

void MenuItem_TitleScreen_Options(void);

void MenuItem_TitleScreen_Exit(void);

void MenuItem_ExitYesNo_Yes(void);

void MenuItem_ExitYesNo_No(void);

void MenuItem_OptionsScreen_SFXVolume(void);

void MenuItem_OptionsScreen_MusicVolume(void);

void MenuItem_OptionsScreen_ScreenSize(void);

void MenuItem_OptionsScreen_Back(void);

void MenuItem_CharacterNaming_Add(void);

void MenuItem_CharacterNaming_Back(void);

void MenuItem_CharacterNaming_OK(void);


// Title screen 

MENUITEM gMI_ResumeGame = { "Resume", (GAME_RES_WIDTH / 2) - ((6 * 6) / 2), 100, FALSE, MenuItem_TitleScreen_Resume };

MENUITEM gMI_StartNewGame = { "Start New Game", (GAME_RES_WIDTH / 2) - ((14 * 6) / 2), 115, TRUE, MenuItem_TitleScreen_StartNew };

MENUITEM gMI_Options = { "Options", (GAME_RES_WIDTH / 2) - ((7 * 6) / 2), 130, TRUE, MenuItem_TitleScreen_Options };

MENUITEM gMI_Exit = { "Exit", (GAME_RES_WIDTH / 2) - ((4 * 6) /2), 145, TRUE, MenuItem_TitleScreen_Exit };

MENUITEM* gMI_TitleScreenItems[] = { &gMI_ResumeGame, &gMI_StartNewGame, &gMI_Options, &gMI_Exit };

MENU gMenu_TitleScreen = { "Title Screen Menu", 1, _countof(gMI_TitleScreenItems), gMI_TitleScreenItems };

///

// Exit Yes or No Screen

MENUITEM gMI_ExitYesNo_Yes = { "Yes", (GAME_RES_WIDTH / 2) - ((3 * 6) / 2), 100, TRUE, MenuItem_ExitYesNo_Yes };

MENUITEM gMI_ExitYesNo_No = { "No",   (GAME_RES_WIDTH / 2) - ((2 * 6) / 2), 115, TRUE, MenuItem_ExitYesNo_No };

MENUITEM* gMI_ExitYesNoItems[] = { &gMI_ExitYesNo_Yes, &gMI_ExitYesNo_No };

MENU gMenu_ExitYesNo = { "Are you sure you want to exit?", 1, _countof(gMI_ExitYesNoItems), gMI_ExitYesNoItems };

// Options Screen

MENUITEM gMI_OptionsScreen_SFXVolume = { "SFX Volume:", (GAME_RES_WIDTH / 2) - ((11 * 6) / 2) - 16, 100, TRUE, MenuItem_OptionsScreen_SFXVolume };

MENUITEM gMI_OptionsScreen_MusicVolume = { "Music Volume:", (GAME_RES_WIDTH / 2) - ((13 * 6) / 2) - 16, 115, TRUE, MenuItem_OptionsScreen_MusicVolume };

MENUITEM gMI_OptionsScreen_ScreenSize = { "Screen Size:", (GAME_RES_WIDTH / 2) - ((12 * 6) / 2) - 16, 130, TRUE, MenuItem_OptionsScreen_ScreenSize };

MENUITEM gMI_OptionsScreen_Back = { "Back", (GAME_RES_WIDTH / 2) - ((4 * 6) / 2) - 16, 145, TRUE, MenuItem_OptionsScreen_Back };

MENUITEM* gMI_OptionsScreenItems[] = { &gMI_OptionsScreen_SFXVolume, &gMI_OptionsScreen_MusicVolume, &gMI_OptionsScreen_ScreenSize, &gMI_OptionsScreen_Back };

MENU gMenu_OptionsScreen = { "Options", 0, _countof(gMI_OptionsScreenItems), gMI_OptionsScreenItems };

// Character Naming Menu

// A B C D E F G H I J K L M 
// N O P Q R S T U V W X Y Z
// a b c d e f g h i j k l m
// n o p q r s t u v w x y z
// Back                   OK

                                 // (12 * 8) + (13 * 6) 12 spaces at 8 pixels each, plus 13 letters at 6 pixels wide each
MENUITEM gMI_CharacterNaming_A = { "A", 118, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_B = { "B", 130, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_C = { "C", 142, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_D = { "D", 154, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_E = { "E", 166, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_F = { "F", 178, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_G = { "G", 190, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_H = { "H", 202, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_I = { "I", 214, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_J = { "J", 226, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_K = { "K", 238, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_L = { "L", 250, 110, TRUE, MenuItem_CharacterNaming_Add };
											 
MENUITEM gMI_CharacterNaming_M = { "M", 262, 110, TRUE, MenuItem_CharacterNaming_Add };



MENUITEM gMI_CharacterNaming_N = { "N", 118, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_O = { "O", 130, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_P = { "P", 142, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_Q = { "Q", 154, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_R = { "R", 166, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_S = { "S", 178, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_T = { "T", 190, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_U = { "U", 202, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_V = { "V", 214, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_W = { "W", 226, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_X = { "X", 238, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_Y = { "Y", 250, 120, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_Z = { "Z", 262, 120, TRUE, MenuItem_CharacterNaming_Add };


MENUITEM gMI_CharacterNaming_a = { "a", 118, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_b = { "b", 130, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_c = { "c", 142, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_d = { "d", 154, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_e = { "e", 166, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_f = { "f", 178, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_g = { "g", 190, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_h = { "h", 202, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_i = { "i", 214, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_j = { "j", 226, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_k = { "k", 238, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_l = { "l", 250, 130, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_m = { "m", 262, 130, TRUE, MenuItem_CharacterNaming_Add };


MENUITEM gMI_CharacterNaming_n = { "n", 118, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_o = { "o", 130, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_p = { "p", 142, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_q = { "q", 154, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_r = { "r", 166, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_s = { "s", 178, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_t = { "t", 190, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_u = { "u", 202, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_v = { "v", 214, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_w = { "w", 226, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_x = { "x", 238, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_y = { "y", 250, 140, TRUE, MenuItem_CharacterNaming_Add };

MENUITEM gMI_CharacterNaming_z = { "z", 262, 140, TRUE, MenuItem_CharacterNaming_Add };



MENUITEM gMI_CharacterNaming_Back = { "Back", 118, 150, TRUE, MenuItem_CharacterNaming_Back };

MENUITEM gMI_CharacterNaming_OK = { "OK", 256, 150, TRUE, MenuItem_CharacterNaming_OK };


MENUITEM* gMI_CharacterNamingItems[] = { 
	&gMI_CharacterNaming_A, &gMI_CharacterNaming_B, &gMI_CharacterNaming_C, &gMI_CharacterNaming_D, &gMI_CharacterNaming_E, &gMI_CharacterNaming_F, 
	&gMI_CharacterNaming_G, &gMI_CharacterNaming_H, &gMI_CharacterNaming_I, &gMI_CharacterNaming_J, &gMI_CharacterNaming_K, &gMI_CharacterNaming_L, 
	&gMI_CharacterNaming_M, &gMI_CharacterNaming_N, &gMI_CharacterNaming_O, &gMI_CharacterNaming_P, &gMI_CharacterNaming_Q, &gMI_CharacterNaming_R,
	&gMI_CharacterNaming_S, &gMI_CharacterNaming_T, &gMI_CharacterNaming_U, &gMI_CharacterNaming_V, &gMI_CharacterNaming_W, &gMI_CharacterNaming_X,
	&gMI_CharacterNaming_Y, &gMI_CharacterNaming_Z,
	&gMI_CharacterNaming_a, &gMI_CharacterNaming_b, &gMI_CharacterNaming_c, &gMI_CharacterNaming_d, &gMI_CharacterNaming_e, &gMI_CharacterNaming_f,
	&gMI_CharacterNaming_g, &gMI_CharacterNaming_h, &gMI_CharacterNaming_i, &gMI_CharacterNaming_j, &gMI_CharacterNaming_k, &gMI_CharacterNaming_l,
	&gMI_CharacterNaming_m, &gMI_CharacterNaming_n, &gMI_CharacterNaming_o, &gMI_CharacterNaming_p, &gMI_CharacterNaming_q, &gMI_CharacterNaming_r,
	&gMI_CharacterNaming_s, &gMI_CharacterNaming_t, &gMI_CharacterNaming_u, &gMI_CharacterNaming_v, &gMI_CharacterNaming_w, &gMI_CharacterNaming_x,
	&gMI_CharacterNaming_y, &gMI_CharacterNaming_z, &gMI_CharacterNaming_Back, &gMI_CharacterNaming_OK };

MENU gMenu_CharacterNaming = { "What's your name, hero?", 0, _countof(gMI_CharacterNamingItems), gMI_CharacterNamingItems };