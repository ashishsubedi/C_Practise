num = i = flag=1;
num = int(input("Enter a number to find whether it is prime\
or not:  "))
for i in range(2,int(num/2)):
	if ( num%i == 0):
		flag = 0
		break
if (flag == 1): print("\nThe number is prime")
else: print("\nThe number is composite")

