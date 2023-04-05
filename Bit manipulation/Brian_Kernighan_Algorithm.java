/**
To find out the no set bits in a binary representation of a number
**/

int n;
int c = 0;
while (n>0) {
  n = n&(n-1);
  c++;
}

/**

For example: 
x = 5 (101)2 
Step 1: x = 5 (101)2 
x-1 = 4 (100)2
x & (x-1) = (100)2 = 4, 

update x to 4. 
Step 2: x = 4 (100)2 
x-1 = 3 (011)2, 
x & (x-1) = (000)2 = 0 

So, the number of set bits are 2 in x. 
The above algorithm described is known as 
Brian Kernighan’s Algorithm. The time complexity 
of the algorithm is dependent on the number of 1s in the binary representation of the number, 
however in the worst case still the time complexity will be O(log2N) as all bits of the number may be set, 
where N is the number.

**/
