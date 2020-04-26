#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{   
    printf("Size of Data Types in C\n");
    printf("=======================\n");
    printf("Size of char = %lu Byte\n", sizeof(char));
    printf("Size of short = %lu Bytes\n", sizeof(short));
    printf("Size of int = %lu Bytes\n", sizeof(int));
    printf("Size of long = %lu Bytes\n", sizeof(long));
    printf("Size of float = %lu Bytes\n", sizeof(float));
    printf("Size of double = %lu Bytes\n", sizeof(double));
    printf("\n");

    printf("The Range of Data Types in C\n");
    printf("=======================\n");
    printf("Range of signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char 0 to %d\n\n", UCHAR_MAX);

    printf("Range of signed short int %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int 0 to %d\n\n", USHRT_MAX);

    printf("Range of signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int 0 to %u\n\n", UINT_MAX);

    printf("Range of signed long int %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int 0 to %lu\n\n", ULONG_MAX);

    printf("Range of signed long long int %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX); 
    printf("Range of unsigned long long int 0 to %llu\n\n", ULONG_LONG_MAX); 

    printf("Range of float %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    printf("\n");
}