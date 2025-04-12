# include<iostream>
using namespace std;
void lower(char *, char);

int main(){
	int i,length;
	i=length=0;
	char phrase[]="nice";
	while(phrase[i] !='\0'){
		length++;
		i++;
	}
	
	
	lower(phrase,phrase[length]);
//	 cout<<"the phrase after conversion is : "<<phrase<<endl;
	
	
	
	return 0;
}
void lower(char * sptr,char phrase[]){
//	while(*sptr !='\0'){
//		cout<<*sptr;
//		sptr++;
//	}
	
	
while(*sptr !='\0'){
	if(islower(*sptr))
		*sptr=toupper(*sptr);
		
	
	++sptr;
}
cout<<"the phrase after conversion is : "<<*sptr<<endl;
 

	
}
