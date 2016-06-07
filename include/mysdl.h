#ifndef MYSDL_H
# define MYSDL_H

# include <SDL.h>
# include <math.h>
# include "vec.h"

typedef struct		s_env
{
	SDL_Window		*sc;
	SDL_Event		event;
	SDL_Renderer	*img;
	SDL_Surface		*surface;
}					t_env;

void	sdl_putpxl(t_env *e, int x, int y, unsigned char r, unsigned char g, unsigned char b);

int		sdl_events(t_env *env);
int		sdl_key_down(t_env *env);
int		sdl_key_up(t_env *env);
int		sdl_win_ev(t_env *env);
int		sdl_main_loop(t_env *e);
int		sdl_init(t_env *e);
void	sdl_quit(t_env *e);

#endif /* MYSDL_H */
