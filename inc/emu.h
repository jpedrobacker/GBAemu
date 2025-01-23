#ifndef EMU_H
# define EMU_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <SDL2/SDL.h>
# include <SDL2/SDL-ttf.h>

/*

	GBA components:

	Cart
	CPU
	ADDRESS BUS
	PPU
	TIMER

*/

typedef struct s_emuCon
{
	bool paused;
	bool running;
	u64 ticks;
} t_emuCon;

void	emu_run(int ac, char **av);

#endif
