<div class="list_article_div" >
		 <div class="list_article_l"><a href="[field:arcurl/]" title="[field:title/]" target="_blank">[field:title/]</a></div>
		 <div class="list_article_r">[field:pubdate function="GetDateMK(@me)"/]</div>
  </div>
  [field:global runphp='yes' name=autoindex]
$a="<div class='jiange'></div>";
$b="";
if ((@me%5)==0) @me=$a;
else @me=$b;
[/field:global]