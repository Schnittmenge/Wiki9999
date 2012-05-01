<?php
require("GTranslate.php");

/**
* Example using RequestHTTP
*/
$translate_string = "Das ist wunderschön";
 try{
       $gt = new Gtranslate;
	echo "[HTTP] Translating [$translate_string] German to English => ".$gt->german_to_english($translate_string)."\n";

	/**
	* Lets switch the request type to CURL
	*/
	$gt->setRequestType('curl');
	echo "[CURL] Translating [$translate_string] German to English => ".$gt->german_to_english($translate_string)."\n";
	$translate_string	=	'hello';
	echo "[CURL] Translating [$translate_string] English to German=> ".$gt->english_to_german($translate_string)."\n";

} catch (GTranslateException $ge)
 {
       echo $ge->getMessage();
 }

?>
