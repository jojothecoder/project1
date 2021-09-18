/*
Which row is bigger? (100 Marks)
For this challenge, you need to take a matrix as an input from the stdin, identify which row has the maximum sum of the digits.For example, in the below matrix
1 2 3
4 5 6
7 8 9
Row 1 is 1,2,3
Row 2 is 4,5,6
Row 3 is 7,8,9

Input Format
The first line contains two integers N, M denoting the number of rows and columns respectively.
Each of the 'N' Next line contains M integers each.

Constraints
1 < (n,m) < 100

Output Format
If the sum of the digits of row 1 found to be greater than that of row 2 and row 3, then print 'Row 1' to the stdout. If the sum of all the rows found to be equal, then print 'Equal' to the stdout. 

Sample TestCase 1
Input
3 4
2 3 4 2
1 4 6 5
4 8 9 6
Output
Row 3
*/

#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c],sum1=0,sum2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
	int sum[r-1];
    for(int i=0;i<r;i++){
		sum[i]=0;
        for(int j=0;j<c;j++){
          sum[i] += arr[i][j];
        }
    }
	// checking sum of rows 

	// for (int i=0;i<r;i++){
	// 	printf("%d ",sum[i]);
	// }
	int max = sum[0],index=0;
    // compare every element with current max 
    for (int i = 1; i < r; i++){
        if (sum[i] > max);{
            max = sum[i];
			index=i;
		}	
	}
	printf("Row %d",index+1);
    return 0;
}
