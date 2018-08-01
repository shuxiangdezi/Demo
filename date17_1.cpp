#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100
typedef struct{
	int data[Maxsize];
	int length;	
}sqlist;
bool del_min(sqlist &L,int &value)
{       if(L.length==0)
	return false;
	int min=L.data[0];
	int pos=0;
	for(int i=1;i<L.length;i++){
	if(L.data[i]<min){
	min=L.data[i];
	pos=i;
	}	
	}
	L.data[pos]=L.data[L.length-1];
	L.length--;
	value=min;
	return true;	
}
int main(void){
sqlist L;// = {{1,0,2,3,4,6,5,7,8,9},10};
printf("请输入顺序表元素个数：");
scanf("%d",&L.length);
for(int i=0;i<L.length;i++){
printf("请输入第%d个元素:",i+1);
scanf("%d",&L.data[i]);
}
printf("顺序表的长度:%d\n",L.length);
int min;
del_min(L,min);
printf("顺序表中min:%d\n",min);
for(int i=0;i<L.length;i++)
printf("%d\n",L.data[i]);
exit(0);
}
