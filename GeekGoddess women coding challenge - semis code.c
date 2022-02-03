/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<stdbool.h>

static bool isSafe(int M[100][100], int row, int col, bool visited[100][100],int ROW,int COL);
static void DFS(int M[100][100], int row, int col, bool visited [100][100], int ROW, int COL);
static int largestRegion(int M[100][100], int i, int j);

static int count;


int main(int argc, char *a[])
{
	int iR, iC, iReadRows[100][100], iresult=0;

	scanf("%d %d", &iR, &iC);

	//printf("%d %d",iR, iC);

	for (int i=0; i <iR ; i++)
	{
		for (int j=0; j < iC; j++) 
		{
			scanf ("%d ", &iReadRows[i][j]);
		}	
	}

    //printf("%d",iReadRows[100][100]);

    iresult = largestRegion(iReadRows, iR, iC);

	printf("%d",iresult);
}

    // A function to check if a given cell
    // (row, col) can be included in DFS
    static bool isSafe(int M[100][100], int row, int col, bool visited[100][100],int ROW,int COL)
    {
        // row number is in range, column number is in
        // range and value is 1 and not yet visited
        return (
            (row >= 0) && (row < ROW) && (col >= 0)
            && (col < COL)
            && (M[row][col] == 1 && !visited[row][col]));
    }
	
    static void DFS(int M[100][100], int row, int col, bool visited [100][100], int ROW, int COL)
    {
        // These arrays are used to get row and column
        // numbers of 8 neighbours of a given cell
        int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
        int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
 
        // Mark this cell as visited
        visited[row][col] = true;
 
        // Recur for all connected neighbours
        for (int k = 0; k < 8; k++) 
        {
            if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited, ROW, COL)) 
            {
                count++; // increment region length by one
                DFS(M, row + rowNbr[k], col + colNbr[k], visited, ROW, COL);
            }
        }
    }
	
    // The main function that returns
    // largest length region of
    // a given bool 2D matrix
    static int largestRegion(int M[100][100], int ROW, int COL)
    {
        // Make a bool array to mark visited cells.
        // Initially all cells are unvisited
        bool visited[100][100] ; //= new bool[ROW, COL];
 
        // Initialize result as 0 and traverse
        // through the all cells of given matrix
        int result = 0;
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++) 
            {
                // If a cell with value 1 is not
                if (M[i][j] == 1 && !visited[i][j]) 
                {
                    // visited yet,
                    // then new region found
                    count = 1;
                    DFS(M, i, j, visited, ROW, COL);
                    
                    // maximum region
                    result = (result > count) ? result : count ;
                }
            }
        }

        return result;
    }
	
