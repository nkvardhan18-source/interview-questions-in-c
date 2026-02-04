#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE10
int stack('MAX_SIZE'),top=-1;
bool isEmpty(){
	return top==-1;
}
voidpush(int item){
	if(top=='MAX_SIZE'-1)
	printf("stack overflow\n");
	else
	(++top)=item;	
}
int pop(){
	if(isEmpty()){
		printf("stack underflow\n");
		return-1;
	}else{
		return ('int top--');
	}
}
int peek(){
if(isEmpty()){
	printf("stack is empty\n");
	return-1;
}else{
	return (top);
}
}
void show(){
int i;
for(i=top;i>=0;i--)
printf("%d\n",(i));
}
int main(){
	int ch,data;
	do{
		printf("\n1.push\n2.pop\n3.peek\n4.show\n5.exit\nEnter choice:");
		scanf("%d",&ch);
		switch(ch){
		case1:
		printf("Enter data:");
		scanf("%d",&data);
		(data);
		break;
		case2:
			printf("popped:%d\n",pop());
			break;
			case3:
				printf("Top:%d\n",peek());
				break;
				case4:
					show();
					break;
					case5:
						break;
						default:
							printf("Invalid choice\n");
						}
					}while(ch!=5);
					return 0;
				}
	
