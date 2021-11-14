#include<iostream>
using namespace std;
#ifdef _OPENMP
#include<omp.h>
#endif

void Hello();

int main(int argc,char* argv[])
{
    int thread_count=strtol(argv[1],NULL,10);
    Hello();
    return 0;


}
void Hello()
{
    int my_rank=omp.get_thread_num();
}
