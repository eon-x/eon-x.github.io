<div class="new_list" style="{dede:global name=itemindex runphp='yes'}$a="margin-right:0px;"; $b="";if (@me==3) @me=$a; else @me=$b;{/dede:global}">
    <div class="taitou" style="background:#ffffff">
	  <div class="title" style="background:#ffffff">{dede:field.typename/}</div>
	  <div class="more"><a href="{dede:field.typedir/}" target="_blank">更多</a></div>
	  <div class="clear" style="background:#ffffff"></div>
	</div>
	<div class="h10" style="background:#ffffff"></div>
	<div class="list" style="background:#ffffff">
  
  
  {dede:arclist typeid='' att=''  limit='0,10'  titlelen='120' infolen=''  orderby='pubdate' }
<div class="index_list_article_div" style="background:#ffffff" >
		 <div class="index_list_article_l" style="background:#ffffff"><a href="[field:arcurl/]" target="_blank" title="[field:title/]">[field:title function="cn_substr(@me,50)"/]</a></div>
		 <div class="index_list_article_r" style="background:#ffffff">[field:stime/]</div>
  </div>
{/dede:arclist}
  
  
</div>
  </div>