#ifndef SOLVER_HPP
#define SOLVER_HPP
#define _USE_MATH_DEFINES
#include <cmath>
#include "armadillo"
#include <string>

class FluidDynamics
{
    private:
      double nu;
      double omega;
      double **nZero;
      double **nOne;
      double **nTwo;
      double **nThree;
      double **nFoure;
      double **nFive;
      double **nSix;
      double **nSeven;
      double **nEight;
      double **nNine;
      double **rho;
      double **u_x;
      double **u_y;
      double *equiDens;
      double *Omega;
      double *unit_x;
      double *unit_y;
    public:
      void Initialize(double width, double height, double omega);
};

#endif
