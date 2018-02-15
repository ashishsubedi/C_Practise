#include <stdio.h>
#define SIZE 5
#include <stdlib.h>

int main()



{
	//EDITED BY ME
//-----------------------------
	int flag = 0;
//-----------------------------
    int i,j,n,array[SIZE];
    int low=0;
    int high=SIZE-1;
    int mid = (high+low)/2;


    for(i=0;i<SIZE;i++){

scanf("%d",&array[i]);
}

printf("The ascending series is\n");
for(j=0;j<SIZE;j++){

 printf("%d ",array[j]);

}

        scanf("%d",&n);
while(low!=high){

	 mid = (high+low)/2;
//while(array[mid]!=n){

  /*Edited my me*/
  //---------------------------//
  	if(array[mid] == n){
  		flag = 1;
  		break;
  	}
	
	//-----------------------------//
   if(array[mid]<n)
  {
  	  /*Edited my me*/
//---------------------------//
  		low= ++mid;
	
//-----------------------------//

	//Your code
	/*	if(n-array[mid]!=1){// I cannot understand why you're doing this
			mid=(mid+high)/2;
			mid++;
		}
	}*/
	}		
    else
   {
   		high = --mid;
   	
	//Your code
	/*
    if(array[mid]-n!=1)
        {mid=(mid+low)/2;
        mid--;}

   }*/
	}
}
	//EDITED BY ME
//-----------------------------
	if(flag == 1){
	    printf("The location is %d position in array\n",mid);
	}
	else {
	    printf("Not Found\n");
	}
//-----------------------------

return 0;

}
