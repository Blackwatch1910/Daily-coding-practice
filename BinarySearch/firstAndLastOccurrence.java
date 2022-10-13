import java.util.* ;
import java.io.*; 
public class Solution {
    
    static int firstOcc(ArrayList<Integer> arr, int size, int key) {
        int low = 0;
        int high = size - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low)/2;

            if (arr.get(mid) == key) {
                ans = mid;
                high = mid - 1;
            }

            else if (arr.get(mid) < key) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    static int lastOcc(ArrayList<Integer> arr, int size, int key) {
        int low = 0;
        int high = size - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low)/2;

            if (arr.get(mid) == key) {
                ans = mid;
                low = mid + 1;
            }

            else if (arr.get(mid) < key) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    public static int[] firstAndLastPosition(ArrayList<Integer> arr, int n, int k) {
        // Write your code here.
        int res[] = new int[2];
        res[0] = firstOcc(arr, n, k);
        res[1] = lastOcc(arr, n, k);
        
        return res;
    }

};
