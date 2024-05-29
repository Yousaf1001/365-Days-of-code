Question: Remove Nth Node from Back
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)find the length of the linklist.
  ii)Find position of Node by Using (L-N+1).
  iii)Now traverse list till(L-N+1) and remove that nodes.

  Time complexity 0(2L).
  Space complexity 0(1).

2)optimal Solution:
  we solve the problem by using fast and slow pointer concept
  i)First We move fast pointer till n.
  ii)Now start moving both slow and fast pointer by one step.
  iii)When n is reach at (lastNode) than slow pointer is the at Nth Node position.
  iii)Now remove it.

  Time complexity 0(n)
  Space complexity 0(1)