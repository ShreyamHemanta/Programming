#include <stdio.h>
#include <stdbool.h>

struct Process 
{
    int pid;
    int at;
    int bt;
    int ct;
    int wt;
    int tat;
    int rt;
};

void sort_processes_by_arrival_time(struct Process p[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (p[j].at > p[j+1].at)
            {
                struct Process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

bool all_processes_completed(bool completed[], int n)
{
    for (int i = 0; i < n; i++) {
        if (!completed[i]) {
            return false;
        }
    }
    return true;
}

int find_shortest_remaining_time_process(struct Process p[], bool completed[], int n, int current_time)
{
    int shortest_remaining_time = __INT_MAX__;
    int shortest_remaining_time_process_index = -1;
    for (int i = 0; i < n; i++) {
        if (!completed[i] && p[i].at <= current_time && p[i].rt < shortest_remaining_time) {
            shortest_remaining_time = p[i].rt;
            shortest_remaining_time_process_index = i;
        }
    }
    return shortest_remaining_time_process_index;
}

int main() 
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i+1;
        printf("Enter the arrival time and burst time for process %d: ", i+1);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].rt = p[i].bt;
    }

    sort_processes_by_arrival_time(p, n);

    int current_time = 0;
    bool completed[n];
    for (int i = 0; i < n; i++) {
        completed[i] = false;
    }
    while (!all_processes_completed(completed, n)) {
        int process_index = find_shortest_remaining_time_process(p, completed, n, current_time);
        if (process_index != -1) {
            p[process_index].rt--;
            current_time++;
            if (p[process_index].rt == 0) {
                completed[process_index] = true;
                p[process_index].ct = current_time;
                p[process_index].tat = p[process_index].ct - p[process_index].at;
                p[process_index].wt = p[process_index].tat - p[process_index].bt;
            }
        } else {
            current_time++;
        }
    }

    int twt = 0;
    int ttat = 0;
    printf("Process\tArrival\tBurst\tCompletion\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].wt, p[i].tat);
        twt += p[i].wt;
        ttat += p[i].tat;
    }
    float awt = twt/n;
    float atat = ttat/n;
    
    printf("Average waiting time = %f\n", awt);
    printf("Average turnaround time = %f\n", atat);
    
    return 0;
}