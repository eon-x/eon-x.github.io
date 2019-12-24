<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",341,368);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",408,438);
$z[3][4]['name']="cfg_description";
$z[4]=Array("include","",563,599);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\";if(\$relID == 0) {@me = \$row[arcpic];}else{\$sql = \"SELECT `arcpic` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[arcpic];}",661,1038);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("field","",1281,1303);
$z[6][4]['name']="typename";
$z[7]=Array("field","",1335,1356);
$z[7][4]['name']="content";
$z[8]=Array("include","",3999,4037);
$z[8][4]['filename']="footer.htm";

?>