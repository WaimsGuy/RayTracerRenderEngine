#include "rtweekend.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "hittable.h"

class triangle : public hittable
{
    public:
        //Triangle construction
        

        bool hit(const ray& r, interval ray_t, hit_record& rec) const override
        {

        }

    private:
        point3 a, b, c; //Triangle vertices following Right-Hand Rule
        vec3 normal;
        shared_ptr<material> mat;
};

#endif