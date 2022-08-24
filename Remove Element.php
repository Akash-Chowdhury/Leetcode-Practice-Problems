<?php
class Solution {

/**
 * @param Integer[] $nums
 * @param Integer $val
 * @return Integer
 */
function removeElement(&$nums, $val) {
    $n=count($nums);
    $c=0;
    //echo count($nums);
    //echo "[";
    for($a=0; $a<$n; $a++)
    {
        if($nums[$a]==$val)
        {
            $c++;
        }
        else
        {
            $nums[$a-$c]=$nums[$a];
        }
    }
    return $n-$c;
}
};
?>