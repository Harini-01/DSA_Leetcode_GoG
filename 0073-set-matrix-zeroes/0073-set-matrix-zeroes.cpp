class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      
        int firstrow=1, firstcol=1;


        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;


                    if(i==0)
                    {
                        firstcol=0;
                    }

                    if(j==0)
                    {
                        firstrow=0;
                    }


                }

                
            }
        }

        for(int i=1;i<matrix.size();i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    matrix[i][j]=0;
                }
            }
        }

        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=0;i<matrix.size();i++)
                {
                    matrix[i][j]=0;
                }
            }
        }

         if(firstrow==0)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }
        }

        if(firstcol==0)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[0][j]=0;
            }
        }

    }
};