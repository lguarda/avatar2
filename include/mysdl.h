#ifndef MYSDL_H
# define MYSDL_H

#define _BSD_SOURCE

# include <pthread.h>
# include <SDL.h>
# include <math.h>
# include "vec.h"
# include "rt.h"
# include "scene.h"
# include "buffer.h"

typedef struct		s_env
{
	SDL_Window		*sc;
	SDL_Event		event;
	SDL_Renderer	*img;
	SDL_Surface		*surface;
	t_scene			scene;
	t_buffer		buff;
	char			cmd[255];
	int				cmd_cursor;
	int				opti;
	int				key;
	int				rotkey;
	int				toraytrace;
	int				lol;
	pthread_mutex_t	mutex_lock;
}					t_env;

/*
**	sdl_render.c
*/
void	sdl_putpxl(t_env *e, int x, int y, unsigned char r, unsigned char g, unsigned char b);

/*
**	sdl_events.c
*/
int		sdl_events(t_env *env);
int		sdl_key_down(t_env *env);
int		sdl_key_up(t_env *env);
int		sdl_key_up2(t_env *env);
int		sdl_win_ev(t_env *env);

int		sdl_main_loop(t_env *e);
int		sdl_init(t_env *e, int width, int height);
void	sdl_quit(t_env *e);

/*
**	sdl_change_sample.c
*/
void	change_scenewh(t_env *e, int width, int height);
void	change_sample(t_env *e);

#endif /* MYSDL_H */
