#include <stdio.h>
#include <stdlib.h>
void copy(int a[10], int z[15]){
	for( int i=0; i<10; i++){
		z[i]=a[i];	
	}	
}

void vypisz(int z[15]){
 	for(int i=0; i<15; i++ ){
		printf("%d ", z[i]);
	}	
}
aaaaaaaaaaaaaa
void vypisp(int p[5]){
 	for(int i=0; i<5; i++ ){
		printf("%d ", p[i]);
	}	
}
dddddddddddddd
void zjedn(int a[10], int b[5]){
	int z[15]={};int z_index=10; int k=0;
copy(a,z);
	for(int i=0; i<5; i++){
		for( int j=0; j<10; j++)
			 if(b[i]!=a[j]) k++;
			if(k==10){
				z[z_index]=b[i];
				z_index++;
				}
			k=0;
		}
		vypisz(z);
}


void prien(int a[10], int b[5]){
	int p[5]={}; int p_index=0;
		for( int j=0; j<10; j++)
		for(int i=0; i<5; i++)	
			if(b[i]==a[j]){
			p[p_index]=b[i];
			p_index++;
				}
	vypisp(p);	
}

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10}, b[5]={4,5,12,20,32};
	puts("Zjednotenie:  ");
	zjedn(a,b);
	puts("\n Prienik:  ");
	prien(a,b);
}


git mv du1.c du11.c
git commit -m "Premenovanie suboru du1.c na du11.c"
