#include <fftw3.h>
#include <mpi.h>
#include <iostream>
#include <ctime>

using namespace std;
int main(int argc, char **argv)
{
    // Initialize MPI
    MPI_Init(&argc, &argv);
    // Get the number of processes
    int worldSize;
    MPI_Comm_size(MPI_COMM_WORLD, &worldSize);
    // Get the rank of the current process
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 0)
    {
        /*Prefix*/
        cout << "===================================================================" << endl;
        cout << "2D Navier-Stokes (vortex-streamfunction) Paralle Spectral Solver   " << endl;
        cout << "Using MPI & FFTW " << endl;
        cout << "Developed by Chutian Wu, wuct19981223@outlook.com                  " << endl;
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << dt;
        // Print "Hello, World!" from each process
        cout << "Parallel using " << worldSize << " processes                       " << endl;
        cout << "===================================================================" << endl;
    }

    // Finalize MPI
    MPI_Finalize();
    return 0;
}
