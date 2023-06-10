void shortest_distance(vector<vector<int>>&matrix){
	    
	    int n= matrix[0].size();
  
  //replacing -1
	    for(int i=0 ; i<n ; i++)
	    {
	        for(int j=0 ; j<n ; j++)
	        {
	            if(matrix[i][j]==-1)
	               matrix[i][j]=INT_MAX/2 ;

	        }
	    }
	    
	    for(int k=0 ; k<n ; k++)
	    {
	        for(int i=0 ; i<n ; i++)
	        {
	            for(int j =0 ; j<n ; j++)
	            matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	        }
	    }
	   
//    transforming back to same matrix
  
	    for(int i=0 ; i<n ; i++)
	    {
	        for(int j=0 ; j<n ; j++)
	        {
	            if(matrix[i][j]==INT_MAX/2)
	                 matrix[i][j]=-1;
	            
	        }
	    }
}
