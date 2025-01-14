#include <stdio.h>

	
	void sirala(int dizi[],int size){
		
		int i,j;
		
		for(i=0;i<size-1;i++){
			
			for(j=0;j<size-1;j++){
				if(dizi[j]>dizi[j+1]){
					int temp=dizi[j];
					dizi[j]=dizi[j+1];
					dizi[j+1]=temp;
				}
				
				
			}
		}
	}
	
	
	void diziYazdir(int dizi[],int size){
		int i;
		for(i=0;i<size;i++){
			printf("%d",dizi[i]);
		}
	}
	
	
	int main(){
		
		int dizi[]={3,9,6,7,8,2,5,1,4};
		int size=sizeof(dizi)/sizeof(dizi[0]);
		
		sirala(dizi,size);
		diziYazdir(dizi,size);
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	

