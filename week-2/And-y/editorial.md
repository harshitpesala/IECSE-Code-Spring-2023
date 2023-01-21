Let p = x & (x-1) & (x-2) & ... (y).
Let k represent the location of the leftmost set bit in x (assuming zero-based indexing for bits).

The largest value of y for which the k<sup>th</sup> bit of p will be 0 is y = 2<sup>k</sup> - 1. This is because 2<sup>k</sup>-1 can be represented in binary as k ones (so it's the largest number &lt; x whose k<sup>th</sup> bit = 0) and 2<sup>k</sup> can be represented as 1 followed by k zeros. 

So, 2<sup>k</sup> & (2<sup>k</sup>-1) = 0. Now, we have p = x & (x-1) & ... (0). Hence, p=0.