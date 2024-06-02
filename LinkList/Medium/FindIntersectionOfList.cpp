Question: Find Intersect of the List
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)find length of the linklists.
  ii)if any linklist length is greater then find differnce of length between two linklists.
  iii)Move smallest length linklist to differnce for same starting pointing.
  iv)Now start Moving both linklist if any node is equal then Intersection otherwise not.

  Time complexity 0(N+M+(N-M)).
  here n is size of largest linklist and m is size of the small linklist.
  Space complexity 0(1).


2)optimal Solution:
  we solve the problem by moving pointers on both linklist when reached end change it path.
  i)First Move one pointer one linklist and second pointer on linklist.
  ii)When any reached at end than change a path.
  iii)On second Round they will compulsory meet at Intersect point.

  Time complexity 0(2n+2m)
  n is no of node of first linklist and m is the no of node of second linklist.
  Space complexity 0(1).