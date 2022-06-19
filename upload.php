<?php
  $result = escapeshellcmd('python3 bionic.py');
  $output = shell_exec($result);
  echo $output;

?>
