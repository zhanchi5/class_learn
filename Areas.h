//
// Created by oracle on 3/15/17.
//

#ifndef UNTITLED1_AREAS_H
#define UNTITLED1_AREAS_H
#define PI 3.14159265

class Areas
{
public:
    double Triangle(float a,float b, float q)
    {
        0.5*a*b*sin(q * PI/180);
        return 0.5 * a * b * sin(q * PI/180);

    }

    double Triangle(float a, float b,float c, float p)
    {
        p = (0.5*(a+b+c));
        sqrt(p*(p-a)*(p-b)*(p-c));
        return sqrt(p*(p-a)*(p-b)*(p-c));

    }

};

#endif //UNTITLED1_AREAS_H
