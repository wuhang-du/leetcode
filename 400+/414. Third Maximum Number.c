int thirdMax(int* nums, int numsSize) {

    int state[4] = {0};
    int answer[4] = {0};
    for(int i = 0; i < numsSize; i++){
        int temp = nums[i];
        for(int j =0; j < 3; j++){
            if(state[j] == 0){
                answer[j] = temp;
                state[j] = 1;
                break;
            }else{
                if(temp == answer[j]) break;
                if(temp > answer[j]){
                    int a = answer[j];
                    answer[j] = temp;
                    temp = a;
                }
            }
        }
    }  
    if(state[2] == 1) return answer[2];
    else return answer[0];
}
