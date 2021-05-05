?php
$min = $_POST["min"];
$max = $_POST["max"];
$id = $_POST["user"];
$today = date("Y-m-d H:i:s");
$ip = $_SERVER["REMOTE_ADDR"];

$rec = $today . ',' . $min . ',' . $max . ',' . $id. ',' . $ip . "\n";

$filename = "appdevAB.log";
if(file_exists($filename))
        $fp = fopen($filename, "a");
else
        $fp = fopen($filename, "w");
fwrite($fp, $rec);
fclose($fp);
echo "data is recorded\n";
?>