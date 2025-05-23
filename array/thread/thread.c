
#include <stdio.h>
#include <pthread.h>


struct add {
    int a;
    int b;
};

//void* do(void *args){
//    printf("doing something\n");
//}



//void* print(int  arr[])
void* print(void * args)
{
    int* arr = (int*)args;
    for(int i=0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
}

void* sum( void * args)
{
    int* ptr = (int*)args;
    int sum =0;
    for (int i=0; i<5; i ++)
    {
        sum = sum + ptr[i];
    }
    printf("sum from the thread : %d\n",sum);
    //return sum ;
}

//
//int sum( int * ptr)
//{
//    int sum =0;
//    for (int i=0; i<5; i ++)
//    {
//        sum = sum + ptr[i];
//    }
//    return sum ;
//}

void * addition(void * args)
{
    struct add * my_data = (struct add *)args;
    int sum2 = my_data->a + my_data-> b;
    printf("sum of the two number inside the thread %d\n",sum2);
}

void* my_thread(void * args)
{
    printf("Hello from the thread\n");
    return NULL;
}


int main() {
    // Write C code here
    int arr[5];
    pthread_t  thread_id;
    pthread_t  print_id;
    pthread_t sum_id;
    pthread_t addition_id;
    struct add new;  
    printf("Enter the elements of the array\n");
    for(int i=0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the two number for the addition\n");
    scanf("%d %d",&new.a, & new.b);
    
    
    //print(arr);
    int * ptr =arr;
    //printf("Try programiz.pro");
    //int sum1 = sum(ptr);
    //printf("sum = %d\n", sum1);
    if (pthread_create(&thread_id, NULL, my_thread, NULL) != 0) {
        perror("pthread_create failed");
        return 1;
    }
    
    if (pthread_create(&print_id, NULL, (void *) print, (void *) arr ) != 0) {
        perror("pthread_create failed");
        return 1;
    }
    
    if (pthread_create(&sum_id, NULL, (void *) sum, (void *)ptr ) != 0) {
        perror("pthread_create failed");
        return 1;
    }
    
    struct add  * add1 = &new;
    pthread_create(&addition_id, NULL, (void *) addition, (void *)add1);
    
    pthread_join(thread_id, NULL);
    pthread_join(print_id, NULL);
    pthread_join(sum_id, NULL);
    pthread_join(addition_id, NULL);
    
    
    
    printf("Thread finished. Back in main.\n");
    //pthread_create(&threadPressureUnits, NULL, (void *)monitorPressureUnits, NULL);
    
    return 0;
}