#include<stdio.h>
int main(){
	int N,M,d,j,k,l,SSR,SR,R,C;
	scanf("%d",&N);
	scanf("%d",&M);
	d=N-M;
	j=d%10;
	k=j%5;
	l=k%2;
	if(d<0){
		printf("NEED MORE GEMS!");
	}
	
	if(d==0){
	    printf("You get a SCEPTER!\n");
		printf("SSR : %d\n",d);
		printf("SR : %d\n",d);
		printf("R : %d\n",d);
		printf("C : %d",d);
	}
	if(d>0){
	    if(d==10){
	        SSR=1;
	        SR=R=C=0;
	        printf("You get a SCEPTER!\n");
            printf("SSR : %d\n",SSR);
            printf("SR : %d\n",SR);
            printf("R : %d\n",R);
            printf("C : %d",C);
	    }
	    if(d>10||d<10){
	         if(j==5||j%10==0){
	             SSR=d/10;
	             SR=1;
	             R=C=0;
	             printf("You get a SCEPTER!\n");
                 printf("SSR : %d\n",SSR);
                 printf("SR : %d\n",SR);
                 printf("R : %d\n",R);
                 printf("C : %d",C);
	         }
	         if(j>5||j<5){
	             if(k==2||k%2==0){
	                 SSR=d/10;
	                 SR=j/5;
	                 R=k/2;
	                 C=0;
	                 printf("You get a SCEPTER!\n");
                     printf("SSR : %d\n",SSR);
                     printf("SR : %d\n",SR);
                     printf("R : %d\n",R);
                     printf("C : %d",C);
	             }
	             if(k>2||k<2){
	                 if(l==1){
	                    SSR=d/10;
	                    SR=j/5;
	                    R=k/2;
	                    C=1;
	                    printf("You get a SCEPTER!\n");
                        printf("SSR : %d\n",SSR);
                        printf("SR : %d\n",SR);
                        printf("R : %d\n",R);
                        printf("C : %d",C);
	                 }
	             }
	         }
	    }     
	}
}
