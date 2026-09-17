class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        ///pehle transpose for square matrix than reverse each row
int m=arr.size();
int n=arr[0].size();

for(int i=0;i<m;i++){

    for(int j=0;j<i;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
for(int i=0;i<m;i++){
    int a=0,b=n-1;
    while(a<=b){
        int temp=arr[i][a];
        arr[i][a]=arr[i][b];
        arr[i][b]=temp;
        a++;b--;
    }
}

    }
};