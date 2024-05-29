Question: Reverse the linklist
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)We use a data structure to store a node of linklist and we use stack.
  ii)First we push all node and after remove it one by one and link it.
  iii)At last we have reverse linklist

  Time complexity 0(2n).
  Space complexity 0(n).

2)optimal Solution:
  we solve the problem by using three pointer
  i)We have reverse the link and place null at first Node
  ii)We do this by using three pointer(Prev,head,next)pointers.
 
  Time complexity 0(n)
  Space complexity 0(1)

3)We can also solve it by using recursion.