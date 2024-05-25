Question: find the middle of the linklist
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)We first find the length of the linklist.
  ii)Now devide it 2 (n/2) and add 1 for even and odd.
  iii)Now iterate it till n/2+1 and got the middle node.

  Time complexity 0(n+n/2).
  Space complexity 0(1).
2)optimal Solution:
  we solve the problem by using tortue method 
  i)We make slow and fast(slow pointer one step and fast pointer take two step).
  ii)When we move slow and fast than fast is reach at the end of linklist and slow pointer
  point to middle node of linklist.

  Time complexity 0(n/2)
  Space complexity 0(1)