Stack CreateStack( int MaxSize ){
    Stack S=NULL;
S=(Stack*)malloc(sizeof(Stack));
S->Data=(ElementType *)malloc(MaxSize*sizeof(ElementType));
S->Top1=-1;
S->Top2=MaxSize;
S->MaxSize=MaxSize;
return S;
} 
bool Push( Stack S, ElementType X, int Tag ){
if(S->Top2-S->Top1==1){
    printf("Stack Full\n");
return false;
}else{
if(Tag==1){
S->Data[++(S->Top1)]=X;
}else{	
S->Data[--(S->Top2)]=X;
return true;
}
}
}
ElementType Pop( Stack S, int Tag ){
	if(Tag==1){
		if(S->Top1==-1){
			printf("Stack %d Empty\n",Tag);
			return ERROR;
		}else{
			return (S->Data[(S->Top1)--]);
		}
	}else if(Tag==2){
		if(S->Top2==S->MaxSize){
			printf("Stack %d Empty\n",Tag);
			return ERROR;
		}else{
			return (S->Data[(S->Top2)++]);
		}
	}
}
