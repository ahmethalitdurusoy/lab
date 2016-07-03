<?php
	
	if (isset($_POST['tc_no'])){
		
		## $tc_no değişkeni vereisi 11 basamak mı ? veya Sayımı ? Kontrol ##
		$tc_no = $_POST['tc_no'];
		if(strlen($tc_no) !== 11 || !is_numeric($tc_no)){
			echo '<b>"T.C. Kimlik </b>" yanlış yazıldı. <br />';
			echo '<button onclick="window.history.back()">Geri</button>';
			exit();
		}
		
		## For döngüsü ile $tc_no verisine ait ilk 10 sayıyı toplayalım ##
		$topla = 0;
		for($i = 0; $i <= 9; $i++){
			$topla += $tc_no[$i];
		}
		
		/* subtr ile $topla ve $tc_no değişkenlerinin taşındığı son basamak sayılarını
		   eldeederek karşılaştıralım, her ikiside aynı ise sonuç doğru	*/
		if(substr($topla,-1) == substr($tc_no,-1)){
			echo 'T.C. Kimlik Numaranız Doğru.';
		}else{
			echo 'T.C. Kimlik Numaranız Yalnış.';
		}
	}
?>
<h4> T. C. Kimlik Numaranızı Yazın</h4>
 <form method="POST" action="kimlik.php">
  <input type="text" name="tc_no" value="" />
  <input type="submit" value="Doğrula" />
 </form>