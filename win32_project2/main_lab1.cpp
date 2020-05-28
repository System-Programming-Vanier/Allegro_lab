
/******************************************************************************
 * FileName:	main.c
 *
 * Name:	Lab1, Introduction to the Allegro library
 *
 * Description: To complete ...
 *
 * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author  	Date                	Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * SH      	June 15 2020  	v1.0.0      	To complete...
 *
 *
 *
 *****************************************************************************/

#include <allegro.h>
#include<stdio.h>

int main(void) {

	allegro_init();
	set_color_depth(24);
	set_gfx_mode(GFX_SAFE, 640, 480, 0, 0);
	install_keyboard();
	set_keyboard_rate(500, 600);
	textprintf_ex(screen, font, 1, 1, 0x00ff00,-1, "Hello World!");
	textprintf_ex(screen, font, 1, 20, 0x0000ff, -1,"Press ESCape to quit");

	while(! key[KEY_ESC]);
	allegro_exit();
	return 0;
}
END_OF_MAIN()
