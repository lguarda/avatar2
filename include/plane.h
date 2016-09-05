#ifndef PLANE_H
# define PLANE_H

# include <stdint.h>
# include "vec.h"
# include "ray.h"
# include "mtl.h"
# include "rt.h"

typedef struct	s_plane
{
	uint16_t		id;
	t_mtl	mtl;
	t_vec3d	matt;
	t_vec3d	matr;
	t_vec3d	mats;
	t_vec3d		normal;
	t_vec3d		pos;
}				t_plane;

void	hit_plane(t_ray *ray, void *plane, t_hit *hit);
void	surface_plane(t_ray *ray, void *plane, t_hit *hit);
void	surface_plane_normal(void *plane, t_hit *hit);

#endif /* PLANE_H */
