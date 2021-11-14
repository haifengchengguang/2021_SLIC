#include <omp.h>
// 头文件:omp.h
#include <stdio.h>
int main()
 // OpenMP 编译指导标识符 #pragma omp
{
int nthreads, tid;
#pragma omp parallel private(nthreads,tid)
{
tid=omp_get_thread_num(); // 获取线程号
printf("Hello world from OpenMP thread %d\n", tid);
if (tid==0)
{
nthreads=omp_get_num_threads(); // 获取线程个数
printf("Number of threads %d\n", nthreads);
}
}
// 编译
return 0;
//gcc –fopenmp openmp_hello.c
//g++ -fopenmp openmp_hello.cpp -o  openmp_hello
}