
res = x | (1 << k):Set the bit at kth position in the binary representation of x.

res = x & (~(1 << k)):Unset the bit at kth position in binary representation of x.

res = x ^ (1 << k):Toggle the bit at kth position in the binary representation of x 
i.e if the bit at kth position is 0 then change it to 1 and vice versa.

res = x & (x - 1):Unsetting the rightmost set bit of x.

res = ~x + 1 (2’s complement): 
  2’s complement of a number is its 1’s complement +1. 
  2’s complement of a number is the same as negative of the number i.e -x.

res = x & (-x):Getting the rightmost set bit of x.


Applications of bit manipulation \n
● Bitwise operations are prominent in embedded systems, control systems, etc where memory(data transmission/data points) is still an issue. \n
● They are also useful in networking where it is important to reduce the amount of data, so booleans are packed together. \n
Packing them together and taking them apart use bitwise operations and shift instructions. \n
● Bitwise operations are also heavily used in the compression and encryption of data. \n
● Useful in graphics programming, older GUIs are heavily dependent on bitwise operations like XOR(^) for selection highlighting and other overlays.
