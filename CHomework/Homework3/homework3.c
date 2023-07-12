#include <stdio.h>

int main(){
	int fn = 0; /*Firts Number */
	int sn = 0; /*Second Number */
	int tn = 0; /*Third Number */
	printf("Mutgareq Tiv \n");
	scanf("%d", &fn);
	scanf("%d", &sn);
	scanf("%d", &tn);
	if(fn == sn || fn == tn || sn == tn)
	{
		printf("The condition is met \n");
		if(fn >= sn && fn >= tn){
			printf("%d Thats the biggest numeber \n",fn);
		}
		else if(sn >= fn && sn >= tn){
			printf("%d Thats the biggest number \n",sn);
		}
		else if(tn >= fn && tn >= sn){
			printf("%d Thats the biggest number \n",tn);
		}
	}
	else
	{
		printf("The condition is not satisfied \n");
	}
}
