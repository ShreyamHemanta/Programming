#include <stdio.h>

struct Process 
{
    int pid;
    int at;
    int bt;
    int ct;
    int wt;
    int tat;
    int remaining_bt;
};

void round_robin(struct Process p[], int n, int time_quantum)
{
    int current_time = 0;
    int completed_processes = 0;
    int total_wt = 0;
    int total_tat = 0;
    
    while (completed_processes < n) {
        for (int i = 0; i < n; i++) {
            if (p[i].remaining_bt > 0) {
                if (p[i].remaining_bt <= time_quantum) {
                    current_time += p[i].remaining_bt;
                    p[i].remaining_bt = 0;
                    p[i].ct = current_time;
                    p[i].tat = p[i].ct - p[i].at;
                    p[i].wt = p[i].tat - p[i].bt;
                    total_tat += p[i].tat;
                    total_wt += p[i].wt;
                    completed_processes++;
                } else {
                    current_time += time_quantum;
                    p[i].remaining_bt -= time_quantum;
                }
            }
        }
    }
    
    float avg_wt = (float) total_wt / n;
    float avg_tat = (float) total_tat / n;
    
    printf("Process\tArrival\tBurst\tCompletion\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].wt, p[i].tat);
    }
    
    printf("Average Waiting Time: %f\n", avg_wt);
    printf("Average Turnaround Time: %f\n", avg_tat);
}

int main() 
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process p[n];
    for (int i = 0; i < n; i++) {
        p[i].pid = i+1;
        printf("Enter the arrival time and burst time for process %d: ", i+1);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].remaining_bt = p[i].bt;
    }
    
    int time_quantum;
    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);
    
    round_robin(p, n, time_quantum);
    
    return 0;
}