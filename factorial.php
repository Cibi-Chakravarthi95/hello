<?php 
$fhandle = fopen ("php://stdin","r");
$number = fgets($fhandle);
$fact = 1;
for ($i = 1; $i <= $number; $i++)
{
$fact = $fact * $i;
		}
	
 echo $fact;
?
