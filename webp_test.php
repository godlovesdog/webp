<?php
$opts = getopt('f:');
$blob = file_get_contents("/home/ben/".$opts['f']);
$res = image2webp($blob);
$arr = explode('/',$opts['f']);
file_put_contents("/home/ben/".$arr[count($arr)-1].".webp",$res);
