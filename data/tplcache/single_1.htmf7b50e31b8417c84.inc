<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",341,368);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",408,438);
$z[3][4]['name']="cfg_description";
$z[4]=Array("include","",565,601);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\";if(\$relID == 0) {@me = \$row[arcpic];}else{\$sql = \"SELECT `arcpic` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[arcpic];}",663,1040);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("field","",1239,1260);
$z[6][4]['name']="content";
$z[7]=Array("channelartlist","\r\n<div class=\"new_list\" style=\"{dede:global name=itemindex runphp='yes'}\$a=\"margin-right:0px;\"; \$b=\"\";if (@me==3) @me=\$a; else @me=\$b;{/dede:global}\">\r\n    <div class=\"taitou\" style=\"background:#ffffff\">\r\n	  <div class=\"title\" style=\"background:#ffffff\">{dede:field.typename/}</div>\r\n	  <div class=\"more\"><a href=\"{dede:field.typedir/}\" target=\"_blank\">更多</a></div>\r\n	  <div class=\"clear\" style=\"background:#ffffff\"></div>\r\n	</div>\r\n	<div class=\"h10\" style=\"background:#ffffff\"></div>\r\n	<div class=\"list\" style=\"background:#ffffff\">\r\n  \r\n  \r\n  {dede:arclist typeid='' att=''  limit='0,10'  titlelen='120' infolen=''  orderby='pubdate' }\r\n<div class=\"index_list_article_div\" style=\"background:#ffffff\" >\r\n		 <div class=\"index_list_article_l\" style=\"background:#ffffff\"><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\">[field:title function=\"cn_substr(@me,50)\"/]</a></div>\r\n		 <div class=\"index_list_article_r\" style=\"background:#ffffff\">[field:stime/]</div>\r\n  </div>\r\n{/dede:arclist}\r\n  \r\n  \r\n</div>\r\n  </div>\r\n",3990,5082);
$z[7][4]['typeid']="12,13,14";
$z[8]=Array("include","",5183,5221);
$z[8][4]['filename']="footer.htm";

?>