## Solution
To represent x as a sum of y distinct positive odd integers, the following conditions must be true:

1. x &ge; y<sup>2</sup> 
2. x and y must have the same parity (i.e. either both must be odd or both must be even)


## Explanation

The smallest possible numbers we can try to use for building a solution are the first y positive odd integers.
The sum of these integers is y<sup>2</sup>. So, for a solution to exist we must have x &ge; y<sup>2</sup>.


We can attempt to construct a solution in the following way:
{ 1, 3, 5, ...,2(y-1)-1, z } ( where z = x - (y-1)<sup>2</sup> )

### Claim

z &gt; 2(y-1)-1  

### Proof

1 + 3 + 5 ... + 2(y-1)-1 = (y-1)<sup>2</sup> 

Now, we have (y-1)<sup>2</sup> + z = x

=> z = ( x - y<sup>2</sup> ) + 2y - 1

=> z = ( x - y<sup>2</sup> ) + {2(y-1) - 1} + 2

We have already shown x &ge; y<sup>2</sup>, so we must have z &gt; 2(y-1)-1.

Also, since z is greater than all the other numbers in the sequence, it must be distinct.

### Parity Explanation

Observe that the sum of an odd number of odd values is odd. Similarly, sum of an even number of odd values is even.

Since we are trying to represent x as the sum of y odd values, y must have the same parity as x for a solution to exist.