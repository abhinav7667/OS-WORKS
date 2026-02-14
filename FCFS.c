//For zero arrival time
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int burst[n], waiting[n], turnaround[n];

    for (int i = 0; i < n; i++) {
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burst[i]);
    }
    waiting[0] = 0;

    for (int i = 1; i < n; i++) {
        waiting[i] = waiting[i - 1] + burst[i - 1];
    }

    for (int i = 0; i < n; i++) {
        turnaround[i] = waiting[i] + burst[i];
    }
    float avg_wait = 0, avg_turn = 0;
    for (int i = 0; i < n; i++) {
        avg_wait += waiting[i];
        avg_turn += turnaround[i];
    }
    avg_wait /= n;
    avg_turn /= n;

    printf("\nProcess\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", i + 1, burst[i], waiting[i], turnaround[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avg_wait);
    printf("\nAverage Turnaround Time = %.2f\n", avg_turn);
    return 0;
}


