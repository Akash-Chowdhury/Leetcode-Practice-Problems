<?php
class Solution {

/**
 * @param Integer[] $nums
 * @return Integer
 */
function removeDuplicates(&$nums) {
    $n=count($nums);
    $c=0;
    $a=1;
    if($n <= 1){
        return $n;
    }

    else
    {
        for($a=1; $a<$n; $a++){
            if($nums[$a] > $nums[$c]){
                $c++;
                $nums[$c] = $nums[$a];
            }
        }
    }

    return $c+1;
}

};
?>