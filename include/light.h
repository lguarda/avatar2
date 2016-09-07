#ifndef LIGHT_H
# define LIGHT_H

# include <string.h>
# include <stdint.h>
# include "vec.h"
# include "ray.h"
# include "raytrace.h"
# include "mtl.h"
# include "rt.h"

# ifndef MIN
#  define MIN(a,b) (((a)<(b))?(a):(b))
#endif

# ifndef MAX
#  define MAX(a,b) (((a)>(b))?(a):(b))
#endif

typedef struct	s_dotlight
{
	uint16_t	id;
	t_vec3d		pos;
	t_color		color;
}				t_dotlight;

void	init_dotlight(t_dotlight *light, t_vec3d pos, t_color color);
void	dotlight(t_color *color, t_dotlight *light, t_hit *hit, t_list *objlst, int opti);
void	addolight(t_list **lightlist, t_dotlight *object);
void	delete_light(void *obj);

#endif /* LIGHT_H */
