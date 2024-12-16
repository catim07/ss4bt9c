#include<stdio.h>
int main(){
	int day,month,year;
		printf("moi ban nhap ngay: ");
		scanf("%d",&day);
			printf("moi ban nhap thang: ");
		scanf("%d",&month);
			printf("moi ban nhap nam: ");
		scanf("%d",&year);
		if(month>12||month<0){
			printf("thang khong hop le.");
		}else if(day>31||day<0){
			printf("ngay khong hop le.");
		}else if(year<0){
			printf("nam khong hop le.");
    	}
    	if(month==2){
    		if((year%4==0 && year%100!=0) || (year%400==0)){
    			if(day<30){
    				printf("hop le");
				}else{
					printf("khong hop le");
				}
		}else{
			if(day<29){
					printf("hop le");
				}else{
					printf("khong hop le");
				}
		}
	}else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
    		if(day<=31){
    			printf("hop le");
			}else{
				printf("khong hop le");
			}
		}else if(day<=30){
				printf("hop le");
			}else{
				printf("khong hop le");
			}
		
		return 0;

}
