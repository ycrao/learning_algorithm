<?php

// 集合的相关操作（使用数组来模拟，故只考虑它们的键值）

$a = ['a', 'b', 'c']; // 集合A
$b = ['b', 'd', 'e']; // 集合B

// 交集 既属于A又属于B ['b']
$c = array_values(array_intersect($a, $b));
var_dump($c);

// 并集 属于A或属于B ['a', 'b', 'c', 'd', 'e']
$d = array_values(array_unique(array_merge($a, $b)));
var_dump($d);

// 差集(补集) 属于B但是不属于A ['d', 'e']
$e = array_values(array_diff($b, $a));
var_dump($e); 

