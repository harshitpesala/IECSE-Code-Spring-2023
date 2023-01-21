A given pair of integers, say (a,b), is relatively prime if gcd(a,b) = 1.

If a pair of neighboring integers in the sequence is not relatively prime, we can insert 1 between them [since gcd(a,1)=1 and gcd(1,b)=1].

Performing this operation for all pairs of neighboring integers that are not relatively prime will make the given sequence perfect in the least possible number of operations.