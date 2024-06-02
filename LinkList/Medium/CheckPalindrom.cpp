Question: Check Palindrom 
solution:
There are only brute and optimal solution of problem
1)Brute Solution:
  i)Store all element of the linklist in array.
  ii)now Compare element of the array element and linklist.


  Time complexity 0((n)+(n/2)).
  here n is the no of the node of linklist.
  Space complexity 0(N).


2)optimal Solution:
  we solve the problem by cutting linklist into portion and compare it.
  i)Find the middle of the linklist.
  ii)Now Reverse the right half of the linklist.
  iii)Compare left half and right,if any nodes value is not equal than not Palindrom
  iv)Otherwise it's palindrom

  Time complexity 0(n/2+n/2+n/2)
  Space complexity 0(1)