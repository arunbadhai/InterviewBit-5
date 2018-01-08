/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** generateMatrix(int A, int *len1, int *len2) {
   
  //  vector<vector<int> > B = spiral(sqrt(A), sqrt(A));
    int r = A;
    int c = A;
    int i, j;
    *len1 = A;
    *len2 = A;
    
    int **a = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         a[i] = (int *)malloc(c * sizeof(int));
    for( i = 0; i < r; i++){
        for( j = 0; j < c; j++)
            a[i][j] = 0;
    }
    
    int start = 0, end = c;
    int cons, k =1;
    while(start < end){
        //right traversal
        cons = start;
        end = c;
        for( i = start; i < end; i++){
                a[cons][i] = k;
                k++;
            }
        //down traversal
        cons = c-1;
        end = r;
        for( i = start+1; i < end; i++){
            a[i][cons] = k;
            k++;
        }
        //left traversal
        cons = r-1;
        end = c-1;
        for( i = end-1; i >= start; i--){
            a[cons][i] = k;
            k++;
        }
        //up traversal
        cons = start;
        end = r-1;
        for( i = end-1; i > start; i--){
            a[i][cons] = k;
            k++;
        }
        //start is modified only here
        start++;
        r--;
        c--;
    }
    
    return a;
}

