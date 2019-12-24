<?php
$z[0]=Array("global","",254,280);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",321,348);
$z[1][4]['name']="cfg_keywords";
$z[2]=Array("global","",388,418);
$z[2][4]['name']="cfg_description";
$z[3]=Array("include","",542,578);
$z[3][4]['filename']="head.htm";
$z[4]=Array("sql","[field:img1/]",640,719);
$z[4][4]['sql']="Select * from dede_addon18 where aid=3";
$z[5]=Array("sql","[field:content/]",889,978);
$z[5][4]['sql']="Select * from dede_addon_suipian where aid=53";
$z[6]=Array("sql","[field:content/]",1009,1098);
$z[6][4]['sql']="Select * from dede_addon_suipian where aid=54";
$z[7]=Array("sql","[field:content/]",1159,1248);
$z[7][4]['sql']="Select * from dede_addon_suipian where aid=55";
$z[8]=Array("sql","[field:content/]",1325,1414);
$z[8][4]['sql']="Select * from dede_addon_suipian where aid=56";
$z[9]=Array("sql","[field:content/]",1473,1562);
$z[9][4]['sql']="Select * from dede_addon_suipian where aid=57";
$z[10]=Array("sql","[field:content/]",1629,1718);
$z[10][4]['sql']="Select * from dede_addon_suipian where aid=58";
$z[11]=Array("channelartlist","\r\n<div class=\"new_list\" style=\"{dede:global name=itemindex runphp='yes'}\$a=\"margin-right:0px;\"; \$b=\"\";if (@me==3) @me=\$a; else @me=\$b;{/dede:global}\">\r\n    <div class=\"taitou\">\r\n	  <div class=\"title\">{dede:field.typename/}</div>\r\n	  <div class=\"more\"><a href=\"{dede:field.typedir/}\" target=\"_blank\">更多</a></div>\r\n	  <div class=\"clear\"></div>\r\n	</div>\r\n	<div class=\"h10\"></div>\r\n	<div class=\"list\">\r\n  \r\n  \r\n  {dede:arclist typeid='' att=''  limit='0,10'  titlelen='120' infolen=''  orderby='pubdate' }\r\n<div class=\"index_list_article_div\" >\r\n		 <div class=\"index_list_article_l\"><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\">[field:title function=\"cn_substr(@me,50)\"/]</a></div>\r\n		 <div class=\"index_list_article_r\">[field:stime/]</div>\r\n  </div>\r\n{/dede:arclist}\r\n  \r\n  \r\n</div>\r\n  </div>\r\n",4444,5320);
$z[11][4]['typeid']="12,13,14";
$z[12]=Array("include","",5394,5432);
$z[12][4]['filename']="footer.htm";

?>