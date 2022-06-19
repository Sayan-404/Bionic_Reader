<?php


 if($_POST["upload"])
 {
   $command = escapeshellcmd('python3 /usr/custom/test.py');
   $output = shell_exec($command);
   echo $output;
 }
  else
  {
 $string = $_POST["input_values"];
 $token = strtok($string, " ");
 while($token !== false)
 {
   $len = strlen($token);
   $midpoint;
   if($len%2 == 0){
   $midpoint = $len/2;
   }
   else {
     $midpoint = ($len+1)/2;
   }
   $subs = substr($token , 0 , $midpoint);
   $else = substr($token , $midpoint);
   echo "<strong>$subs</strong>".$else."  ";
   $token = strtok(" ");

 }
}

?>
