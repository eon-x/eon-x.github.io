<?php

// phpinfo();


$conn=mysqli_connect("localhost","root","Admin@123");
if(!$conn){ 
	die('Could not connect:'.mysqli_connect_error());
} 
else 
	echo("it done well.It has been connected well");

?>