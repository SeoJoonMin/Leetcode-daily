class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> output;

        for(int i=0; i<nums.size(); i++){
            output.emplace_back(i);
            for(int j=0; j<nums.size(); j++){
                if(i == j){ // 더하기 계산하려는 숫자가 같은 인덱스의 숫자일때는 건너뛰기
                    continue;
                }

                if((nums[i]+nums[j]) == target){ // target 숫자와 일치하는 조합이 나오면 결과 배열에 더할 값 저장 후 반복문 종료
                    output.emplace_back(j);
                    break;
                }
            }

            if(output.size() == 2){ // target 숫자와 일치하는 조합이 나오면 반복문 종료
                break;
            } else {
                output.pop_back();
            }
        }

        return output;
    }
};