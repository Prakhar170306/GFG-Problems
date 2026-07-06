void twoDimensional(int n, int **mat) {
   for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
            cout<<mat[i][j];
        if(j!=n-1){
            cout<<" ";
        }
        }
        cout<<endl;
    }


}