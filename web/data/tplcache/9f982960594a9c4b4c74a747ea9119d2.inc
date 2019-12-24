<div class="new_list" style="{dede:global name=itemindex runphp='yes'}$a="margin-right:0px;"; $b="";if (@me==3) @me=$a; else @me=$b;{/dede:global}">
    <div class="taitou">
	  <div class="title">{dede:field.typename/}</div>
	  <div class="more"><a href="{dede:field.typedir/}" target="_blank">更多</a></div>
	  <div class="clear"></div>
	</div>
	<div class="h10"></div>
	<div class="list">
  
  
  {dede:arclist typeid='' att=''  limit='0,10'  titlelen='120' infolen=''  orderby='pubdate' }
<div class="index_list_article_div" >
		 <div class="index_list_article_l"><a href="[field:arcurl/]" target="_blank" title="[field:title/]">[field:title function="cn_substr(@me,50)"/]</a></div>
		 <div class="index_list_article_r">[field:stime/]</div>
  </div>
{/dede:arclist}
  
  
</div>
  </div>