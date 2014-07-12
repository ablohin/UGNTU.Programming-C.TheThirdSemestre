#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>

typedef struct {
			 int day;
			 int hour;
			 int minute;
			 int second;
			 } Time;

Time t1,t2;
long N,V;

long interv(Time t1,Time t2){
		 long sec;
		 printf("Время T1 = %i:%i:%i\n",t1.hour,t1.minute,t1.second);
		 printf("Время T2 = %i:%i:%i\n",t2.hour,t2.minute,t2.second);
		 sec=t2.hour*3600+t2.minute*60+t2.second-t1.hour*3600-t1.minute*60-t1.second;
		 printf("Время между t1 и t2 в секундах: %i",sec);
		 }

Time Mom2(Time t1,long N){
		 t2.day=N/86400;
		 t2.hour=(N-t2.day*86400)/3600;
		 t2.minute=(N-t2.day*86400-t2.hour*3600)/60;
		 t2.second=(N-t2.day*86400-t2.hour*3600-t2.minute*60);
		 t2.hour=t1.hour+t2.hour;
		 t2.minute=t1.minute+t2.minute;
		 t2.second=t1.second+t2.second;
		 if(t2.hour>=24) {t2.day=t2.day+t2.hour/24;t2.hour=t2.hour%24;}
		 if(t2.minute>=60) {t2.hour=t2.hour+t2.minute/60;t2.minute=t2.minute%60;}
		 if(t2.second>=60) {t2.minute=t2.minute+t2.second/60;t2.second=t2.second%60;}
		 printf("Прошло дней = %i",t2.day);
		 printf("\nНачальное время = %i:%i:%i",t1.hour,t1.minute,t1.second);
		 printf("\nВремя после N секунд = ");
		 printf("%d:%d:%d",t2.hour,t2.minute,t2.second);
		 }

void main(){
		 clrscr();
		 printf("Введите время t1 и t2 \n");
		 scanf("%d:%d:%d %d:%d:%d",&t1.hour,&t1.minute,&t1.second,&t2.hour,&t2.minute,&t2.second);
		 if((t1.hour>24)||(t1.minute>60)||(t1.second>60)||(t2.hour>24)||(t2.minute>60)||(t2.second>60))
		 printf("\n Ошибка");
				else {clrscr();
				printf("Выберите нужную операцию:\n1-интервал между t1 и t2\n2-время через N секунд\n");
				scanf("%d",&V);
				switch(V) {
							 case 1:interv(t1,t2);break;
							 case 2:printf("Введите количество секунд N=");cin>>N;Mom2(t1,N);break;
							 default:printf("Вы не выбрали операцию,для выхода нажмите <Enter>");break;
									}
							}
		 getchar();
		 getchar();
		 }
