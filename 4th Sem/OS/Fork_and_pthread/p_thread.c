#include <stdio.h>
#include <pthread.h>

void *thread_func(void *arg) {
    printf("Hello from the thread!\n");
    pthread_exit(NULL);
}

int main() {
    pthread_t tid;
    int rc;
    void *status;

    rc = pthread_create(&tid, NULL, (void *(*)(void *))thread_func, NULL);
    if (rc != 0) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }

    printf("Hello from the main thread!\n");

    rc = pthread_join(tid, &status);
    if (rc != 0) {
        fprintf(stderr, "Error joining thread\n");
        return 1;
    }

    pthread_exit(NULL);
}
