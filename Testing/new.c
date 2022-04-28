#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>

#define N (1024*1024)
#define sets (256)
#define cache_sz (64)

unsigned cycles_low, cycles_high, cycles_low1, cycles_high1;

static __inline__ unsigned long long rdtsc(void)
{
    __asm__ __volatile__ ("CPUID\n\t"
            "RDTSC\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t": "=r" (cycles_high), "=r" (cycles_low)::
            "%rax", "rbx", "rcx", "rdx");
}

static __inline__ unsigned long long rdtsc1(void)
{
    __asm__ __volatile__ ("CPUID\n\t"
            "RDTSC\n\t"
            "CPUID\n\t"
            "RDTSC\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t": "=r" (cycles_high1), "=r" (cycles_low1)::
            "%rax", "rbx", "rcx", "rdx");
}

int main(/*int argc, char* argv[]*/)
{
    uint64_t start, end;

    char* arr;
    arr = malloc(N);



    for (int k = 13; k <= 24; k++)
    {

        printf("\nk is %d: \n\n", k);

        for(int i = 0; i < k; i++) 
        {

            rdtsc();
            *(arr+i) = ' ';
            rdtsc1();

            start = ( ((uint64_t)cycles_high << 32) | cycles_low );
            end = ( ((uint64_t)cycles_high1 << 32) | cycles_low1 );

            printf("Time %d = %lu \n", i, end-start);

            // times[i/(sets*64)] = end-start;

        }

        printf("\n\nPhase 1 done\n\n");

        for(int i = 0; i < k; i++) 
        {

            rdtsc();
            *(arr+i) = ' ';
            rdtsc1();

            start = ( ((uint64_t)cycles_high << 32) | cycles_low );
            end = ( ((uint64_t)cycles_high1 << 32) | cycles_low1 );

            printf("Time %d = %lu \n", i, end-start);

            // times[i/(sets*64)] = end-start;

        }

    }
    

    return 0;
}