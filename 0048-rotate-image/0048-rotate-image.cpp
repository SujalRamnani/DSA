class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
int m=arr.size();
int n=arr[0].size();

///pehle transpose fir reverse each row

//transpose
for(int i=0;i<m;i++){
    for(int j=0;j<i;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
//abb reverse each row
for(int i=0;i<m;i++){
    int a=0,b=n-1;
    while(a<=b)
    {
     int temp=arr[i][a];
     arr[i][a]=arr[i][b];
     arr[i][b]=temp;
     a++;
     b--;
    }

}

    }
};