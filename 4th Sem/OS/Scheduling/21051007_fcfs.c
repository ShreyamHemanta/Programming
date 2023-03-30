#include <stdio.h>

struct process {
	int p_1007; //process Number
	int at_1007; //Arrival time
	int bt_1007; //Burst Time
};

int main() {
	int n,ttat_1007=0,twt_1007=0;
	float avg_tat,avg_wt;
	printf("Enter number of processes ");	
	scanf("%d",&n);
	struct process p[n];
	
	//input
	for(int i=0;i<n;i++) {
		printf("Enter process id ");
		scanf("%d",&p[i].p_1007);
		printf("Enter arrival time ");
		scanf("%d",&p[i].at_1007);
		printf("Enter burst time ");
		scanf("%d",&p[i].bt_1007);
	}
	
	//sorting using arrival time
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(p[i].at_1007>p[j].at_1007) {
				struct process temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	
	//calculation of turn around time and completion time
	for(int i=0, ct_1007=p[0].at_1007;i<n;i++) {
		printf("P%d",p[i].p_1007);
		twt_1007 += ct_1007 - p[i].at_1007;
		ct_1007 += p[i].bt_1007;
		ttat_1007 += ct_1007 - p[i].at_1007;
	}
	
	avg_tat = (float)ttat_1007/n;
	avg_wt = (float)twt_1007/n;
	
	printf("\nThe average turn around time is %.2f",avg_tat);
	printf("\nThe average waiting time is %.2f\n",avg_wt);
	
	return 0;
}
	
	
	
	

