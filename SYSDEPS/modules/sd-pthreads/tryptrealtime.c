#include <pthread.h>
#include <errno.h>
#include <stdio.h>

#define NUM_THREADS 5

pthread_attr_t attr;
pthread_t threads[NUM_THREADS];
unsigned int ids[NUM_THREADS];
 
void *hello(void *threadid)
{
  printf("[%u]: hello!\n", *(unsigned int *) threadid);
  pthread_exit(0);
}

int main(void)
{
  unsigned int ind;
  int rc;
  int policy;

  for (ind = 0; ind < NUM_THREADS; ind++) {
    printf("[%u] thread create\n", ind);
    ids[ind] = ind;
    rc = pthread_create(&threads[ind], 0, hello, &ids[ind]);
    if (rc) {
      printf("[%u] error: return %d\n", ind, rc);
      return 1;
    }
  }

  rc = pthread_attr_init(&attr);
  if (rc != 0) {
    printf("error: attr_init: %s\n", strerror(rc));
    return 1;
  }

  rc = pthread_attr_getschedpolicy(&attr, &policy);
  if (rc != 0) {
    printf("error: getschedpolicy: %s\n", strerror(rc));
    return 1;
  }

  pthread_exit(0);
  return 0;
}
