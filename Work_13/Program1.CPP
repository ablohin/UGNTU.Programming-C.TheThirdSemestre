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
		 printf("�६� T1 = %i:%i:%i\n",t1.hour,t1.minute,t1.second);
		 printf("�६� T2 = %i:%i:%i\n",t2.hour,t2.minute,t2.second);
		 sec=t2.hour*3600+t2.minute*60+t2.second-t1.hour*3600-t1.minute*60-t1.second;
		 printf("�६� ����� t1 � t2 � ᥪ㭤��: %i",sec);
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
		 printf("��諮 ���� = %i",t2.day);
		 printf("\n��砫쭮� �६� = %i:%i:%i",t1.hour,t1.minute,t1.second);
		 printf("\n�६� ��᫥ N ᥪ㭤 = ");
		 printf("%d:%d:%d",t2.hour,t2.minute,t2.second);
		 }

void main(){
		 clrscr();
		 printf("������ �६� t1 � t2 \n");
		 scanf("%d:%d:%d %d:%d:%d",&t1.hour,&t1.minute,&t1.second,&t2.hour,&t2.minute,&t2.second);
		 if((t1.hour>24)||(t1.minute>60)||(t1.second>60)||(t2.hour>24)||(t2.minute>60)||(t2.second>60))
		 printf("\n �訡��");
				else {clrscr();
				printf("�롥�� �㦭�� ������:\n1-���ࢠ� ����� t1 � t2\n2-�६� �१ N ᥪ㭤\n");
				scanf("%d",&V);
				switch(V) {
							 case 1:interv(t1,t2);break;
							 case 2:printf("������ ������⢮ ᥪ㭤 N=");cin>>N;Mom2(t1,N);break;
							 default:printf("�� �� ��ࠫ� ������,��� ��室� ������ <Enter>");break;
									}
							}
		 getchar();
		 getchar();
		 }
