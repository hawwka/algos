#include <vector>

using namespace std;

    /* С помощью бинарного поиска нахожу самое ближнее значение к x от которого начну искать соседей
    *  Использую два указателя, чтобы пойти в стороны от x собирая k соседей
    *  Конструирование вывода: 
    *      Каждого соседа не нужно помещать куда-либо, достаточно расширять окно k раз.
    *  
    *  Выводим подмасив от arr[left], до arr[right],   
    */


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int start_position = 0;

    
        if (arr.size() == 1){
            return {arr[0]};
        }
        if (arr[0] > x) {}
        else if (arr[arr.size() - 1] < x) {
            start_position = arr.size() - 1;
        }
        else {
            int left = 0;
            int right = arr.size() - 1;
            int mid = (left + right) / 2;

            while (left <= right) {
                if (arr[mid] == x){
                    start_position = mid;
                    break;
                }
                else if (arr[mid] > x) {
                    right = mid - 1;
                    mid = (left + right) / 2;
                    start_position = mid;
                }
                else {
                    left = mid + 1;
                    mid = (left + right) / 2;
                    start_position = mid;
                }
            }
        }

        int left = start_position;
        int right = start_position;

        int n = arr.size();

        while (right - left < k){
            if (right + 1 < n && left - 1 >= 0){
                if (abs(arr[left - 1] - x) )
                
                if (arr[right + 1] == arr[left - 1]){

                }        
            }
        
        }
    }
};
