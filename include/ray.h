#ifndef RAY_H
# define RAY_H

# include "vec.h"
# include "list.h"
# include "mtl.h"
# include "rt.h"

typedef struct	s_ray
{
	t_vec3d	pos;
	t_vec3d	dir;
}				t_ray;

typedef struct	s_hit
{
	char	didit;
	FLOAT	t;
	FLOAT	reflect;
	t_vec3d	dir;
	t_vec3d	normal;
	t_vec3d	hitpoint;
	t_vec3d	raypos;
	t_mtl	*mtl;
	int		id;
}				t_hit;

/*
**	ray_transform.c
*/
void		ray_translate(t_ray *ray, FLOAT tx, FLOAT ty, FLOAT tz);
void		ray_rotate(t_ray *ray, FLOAT rx, FLOAT ry, FLOAT rz);
void		ray_scale(t_ray *ray, FLOAT tx, FLOAT ty, FLOAT tz);
t_ray		ray_invertmat(t_ray *srcray, t_vec3d *matt, t_vec3d *matr, t_vec3d *mats);

/*
**	ray.c
*/
void		hit_switch(FLOAT t0, FLOAT t1, int id, t_hit *hit, t_ray *ray);
void		hit_clear(t_hit *hit);

#endif /* RAY_H */
