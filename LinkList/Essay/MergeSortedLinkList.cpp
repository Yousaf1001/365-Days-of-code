Question: Merge Sorted LinkList
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)We have to create array to stored value of both linklists.
  ii)Now we have to sort it by using any sorted algorithem.
  iii)We aslo have create a new linklists that nodes is (N1+N2)
   and we pick one by one nodes from array and connect it.

  Time complexity 0((N1+N1)+NlogN+N).
  here n is sum of size of both linklists.
  Space complexity 0((N1+N2)+(N1+N2)).


2)optimal Solution:
  we solve the problem by flip the link of linklists
  i)We create a dummy node that would head of mergelist.
  ii)We compare two element (one from linklist1 and one from linklist2)
   and get small one.
  iii)Connect it with mergelist pointer,

  Time complexity 0(n1+n2)
  Space complexity 0(1)