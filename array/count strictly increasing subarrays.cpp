/* Count increasing Subarrays 

Given an array of N integers Arr1, Arr2, ….ArrN, count number of subarrays of Arr which are strictly increasing. 
A subarray Arr[i, j] is the array where 1 <= i < j <= N is a sequence of integers of Arri, Arri+1, ….Arrj. A subarray Arr[i, j] is strictly increasing if Arri < Arri+1 < Arri+2 < ……. < Arrj.

Example 1:

Input: 
N = 6
Arr[] = {1, 3, 3, 2, 3, 5}
Output: 4
Explanation:
(1,3), (2, 3), (3, 5) and (2, 3, 5)
are the only increasing subarrays.
Example 2:

Input: 
N = 2
Arr[] = {1 5} 
Output: 1
Explanation:(1, 5) is the only increasing
subarray.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function countIncreasing() which takes the array of integers arr[] and n as parameters and returns a integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1) */
int countIncreasing(int arr[], int n) {
	    // code here
	    int sum=0,pos=0,cal,i;
	     for(i=1;i<n;i++){
	         if(arr[i]>arr[i-1])
	           continue;
	         else{
	            cal=i-pos;
	            sum+=cal*(cal-1)/2;
	            pos=i;
	         }        
	     }
	     cal=i-pos;
	     sum+=cal*(cal-1)/2;
	     return sum;
	}
