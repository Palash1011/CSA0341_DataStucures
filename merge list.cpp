#include<stdio.h>
int main(){
	int a[100],b[100],c[100],i,k,m,n;
	printf("enter m value:");
	scanf("%d",&m);
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		scanf("%d ",&a[i]);
		c[i]=a[i];
	}
	k=i;
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	for(i=0;i<m+n;i++){
		printf("%d,",c[i]);
	}
	return 0;
}
