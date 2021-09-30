/********************************************************************************************

Names    : Vaja Gautam Kamlesh ee20b144, Thomas Prince ee20b141, Syam SriBalaji T ee20b136
Group    : 8B
Input    :  
Output   :
Purpose  : 

**********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void sinewave(float *x, float *y, float *y1, int M, int n)  
{
    srand(time(0)); // Seeding rand() function

    float A = 1;     // Amplitude of Sine wave
    float Omega = 1; // Angluar frequency

    float *z = (float *)malloc((n * M + 1) * sizeof(float)); // Normal distribution samples
    float stdev = 0.0005 * A;                                 // Standard deviation of Normal distribution
    float mu = 0;                                            // Mean of standard distribution

    int P = n * M; // Total number of points

    float *unif1 = (float *)malloc((n * M + 1) * sizeof(float)); //Creating two uniform distributions
    float *unif2 = (float *)malloc((n * M + 1) * sizeof(float));

    for (int i = 0; i <= P; i++)
    {
        x[i] = i * (360.0 / n); //Creating x,y coordinates
        y[i] = A * sin(x[i] * (M_PI / 180) * Omega);

        float T = RAND_MAX;

        unif1[i] = rand() / T;
        unif2[i] = rand() / T;

        z[i] = logf(unif1[i]); // Normal distribution using the two uniform distributions
        z[i] = -2 * z[i];
        z[i] = sqrt(z[i]);
        z[i] = z[i] * cos(2 * M_PI * unif2[i]);

        z[i] = stdev * z[i] + mu;

        y1[i] = y[i] + z[i];
        //printf("(%.0f,%f)\n",x[i],y1[i]);
    }
    free(unif1);
    free(unif2);
    free(z);
}

float trapazoid(float *y1, int n, int M)
{
    float ans = 0;
    int P = n * M;
    for (int h = 0; h <= P; h++)
    {

        if (h == 0 || h == P)
            ans += y1[h];
        else
            ans += 2 * y1[h];
    }
    ans = 0.5 * (2 * M_PI / n) * ans;
    return ans;
}

float simpsons(float *y1, int n, int M)
{
    float ans = 0;
    int P = n * M;

    for (int h = 0; h <= P; h++)
    {
        if (h == 0 || h == P)
            ans += y1[h];
        else if (h % 2 == 0)
            ans += 2 * y1[h];
        else
            ans += 4 * y1[h];
    }
    ans = ans * (2 * M_PI / n) / 3;
    return ans;
}

float mid_point(float *y1, int n, int M)
{
    float ans = 0;
    int P = n * M;
    for (int h = 1; h <= P; h += 2)
    {
        ans += y1[h];
    }
    ans = 0.5 * (2 * M_PI / n) * ans;
    return ans;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Invalid input");
        return 0;
    }

    int M = 2 * atoi(argv[1]); //no. of cycles (We multiply by 2 beacuse simpsons alsways needs even number of intervals)
    int N = atoi(argv[2]); //no. points per cycles

    for (int n = 4; n <= N; n++)
    {
        float *x = (float *)malloc((n * M + 1) * sizeof(float));      // x-coordinates
        float *y = (float *)malloc((n * M + 1) * sizeof(float));      // y-coordinates
        float *ynoise = (float *)malloc((n * M + 1) * sizeof(float)); // Noisy y-coordinates

        sinewave(x, y, ynoise, M, n);

        float mid = mid_point(ynoise, n, M);
        float trap = trapazoid(ynoise, n, M);
        float simp = simpsons(ynoise, n, M);

        printf("n = %d trapazoid = %f midpoint = %f simpsons = %f\n", n, trap, mid, simp);
        free(x);
        free(y);
        free(ynoise);
    }

    return 0;
}
