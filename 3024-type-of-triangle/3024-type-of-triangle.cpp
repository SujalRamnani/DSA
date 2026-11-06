class Solution {
public:
    string triangleType(vector<int>& arr) {
        
        // Triangle validity
        if (arr[0] + arr[1] <= arr[2] ||
            arr[1] + arr[2] <= arr[0] ||
            arr[0] + arr[2] <= arr[1]) {
            return "none";
        }

        // Equilateral
        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            return "equilateral";
        }

        // Isosceles
        else if (arr[0] == arr[1] ||
                 arr[1] == arr[2] ||
                 arr[0] == arr[2]) {
            return "isosceles";
        }

        // Scalene
        else {
            return "scalene";
        }
    }
};