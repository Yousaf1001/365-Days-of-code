	int print2largest(int arr[], int n) {
	    // code here
	    int secondLargest=-1;
	    int largest=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(largest<arr[i])
	        {
	            secondLargest=largest;
	            largest=arr[i];
	        }
	        else if(secondLargest<arr[i] && largest!=arr[i])
	        {
	            secondLargest=arr[i];
	        }
	    }
	    return secondLargest;
	}