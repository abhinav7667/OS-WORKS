#include <stdio.h>

struct Process {
    int pid;
    int at;   
    int bt;  
    int rt;   
    int ct;   
    int tat;  
    int wt;   
};

int main() {
    int n, time = 0, completed = 0;
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    
    for(int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Arrival Time and Burst Time for P%d: ", p[i].pid);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].rt = p[i].bt; 
    }

    while(completed < n) {
        int idx = -1;
        int min_rt = 9999;

       
        for(int i = 0; i < n; i++) {
            if(p[i].at <= time && p[i].rt > 0) {
                if(p[i].rt < min_rt) {
                    min_rt = p[i].rt;
                    idx = i;
                }
            }
        }

        if(idx != -1) {
            
            p[idx].rt--;
            time++;

        
            if(p[idx].rt == 0) {
                completed++;
                p[idx].ct = time;
                p[idx].tat = p[idx].ct - p[idx].at;
                p[idx].wt = p[idx].tat - p[idx].bt;

                total_tat += p[idx].tat;
                total_wt += p[idx].wt;
            }
        } else {
            time++; 
        }
    }

    
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].at, p[i].bt,
               p[i].ct, p[i].tat, p[i].wt);
    }

    printf("\nAverage Turnaround Time = %.2f", total_tat / n);
    printf("\nAverage Waiting Time = %.2f\n", total_wt / n);

    return 0;
}


