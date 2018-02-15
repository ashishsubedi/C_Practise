/*
	Author: Ashish Subedi
	Department : CE 2017
	Just go with the flow. ashishsubedi10@gmail.com for any queries. :)

*/

#include<stdio.h>
int main(){

	
	int n, k, i, count = 0,j=1, p=2;// n for number, k for which number at that position.  others idk.. just go with the flow.
	int even[5000]= {0}, order[10000] = {0};// even to carry even integers, order to store both odd and even in order as valodiya. initializing them to 0.
	
	
	printf("Enter the number and what position you want to see\n");
	scanf("%d %d",&n,&k);// take example n= 10, k = 3
	for(i = 1; i <= n; i++){//i starts from 1 till the number
		if(i%2==1){//if odd do this
			order[i-j] = i;//i increases every time, j increases once in two iteration. so i-j increases by 1 slowly.
			
			count = (i-j);// i think storing count as last index of order. Final value will be count =5
			j++;//j increases when i is odd
		}else{
			even[i-p] = i;// i-p increases by 1. p is initialized at 2 to make i-p = 0 at first iteration i = 2
			
			p++;//same as j;
		}
	}
	

	j= count+1;//count is index of last element of order. so count+1 increases index by 1. It can be used as starting index to store even number. final is 5. so j= 6
	for(i = count; i < n;i++){//starting i as count. i = 5.
		
		order[j] = even[i-count];//order[6] which is 0. Storing even[0] = 2 at that index ( order[6]). Do math yourself
			
		j++;//Obvious.
				
	}
	count = 0;//Reseting count to reuse it somewhere. Saving memory. Good practise. :)

	for(i =0; i<n; i++){//Starting from 0 because order[0] = 1. always btw if n>1. Just ignore if you are confused.
		printf("%d ", order[i]);
		if(i<k)// if the value of i == k that means we have already passed k th term
			count = order[i];//setting count as that term. Remember index starts from 0. So if the element at kth position is k-1 index.
		
	}
	printf("The element at %d position is %d ", k,count);
	
	
}
