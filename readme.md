This is a program for two-dimensional Navier-Stokes equations (vortex-streamfunction equation actually).

The program is specified on homogeneous isotropic turbulence and the computational domain is $[0,2\pi]\times[0,2\pi]$ with both periodic conditions.

The mesh is uniform and has equal number of cells in both directions. 
User should specify resolution in configuration file.

The program can implement DNS and LES simulation.
LES subgrid model include: static Smagorinsky model, dynamic Smagorinsky model, Leith model.

The time integration is Runge-Kutta 4th.