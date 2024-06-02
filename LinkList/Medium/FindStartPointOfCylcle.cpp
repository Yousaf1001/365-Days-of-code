Question: Find start point of Cycle
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)We use hash map for map complete node of linklist.
  ii)We pick one by one node and check is it already present in stack or not.
  iii)If it's not present then put and if present then that is the starting point of cycle.
  iv) if not cycle than ultimate it's reached at Null

  Time complexity 0((N).
  here n is size of the linklist
  Space complexity 0((N)).
  
2)optimal Solution:
  we solve the problem by using slow and fast pointer and entrypointer
  i)We first find cycle by using slow and fast pointer and moving both simultanously.
  ii)After we use entry pointer that move from start and slow pointer from collission point by one step.
  iii)When they both collission that is our cycle starting point.

  Time complexity 0(N)
  N is size of linklist(no of the node in linklist)
  Space complexity 0(1)