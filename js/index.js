$(function() {
	$("#nav li a").click(function () {
	    $("html, body").animate({scrollTop: $($(this).attr("href")).offset().top -20+ "px"}, 500);
	    return false;
	});
	$(".backtop").mouseover(function(){
		$(this).children("img").attr("src", "img/toph.png");
	}).mouseleave(function() {
		$(this).children("img").attr("src", "img/top.png");
	})
	var height=$(window).height();
    $(window).scroll(function(){ 
        if ($(window).scrollTop()>height){  
            $(".backtop").fadeIn(500);  
        }else{  
            $(".backtop").fadeOut(500);  
            }  
    });  
	$(".backtop").click(function() {
		$(this).children("img").attr("src", "img/topa.png");
       $("html,body").animate({scrollTop:0}, 500);
  	}); 
    
	/*var video = document.getElementById("cideoPlay");
	video.play();*/

	//滚动元素id，左切换按钮，右切换按钮，切换元素个数id,滚动方式，切换方向，是否自动滚动，滚动距离，滚动时间，滚动间隔，显示个数
	LbMove('BoxUl', 'btnl', 'btnr', 'BoxSwitch', true, 'left', true, 340, 300, 2000, 7);

	$(".pro-cont li").click(function() {
		var _index = $(this).index();
		$(this).addClass("steped");
		$(this).siblings("li").removeClass("steped");
		$(".change").children("img").eq(_index).addClass("show").siblings().removeClass("show");
	})
	
	$(".download").mouseover(function() {
		$(".ewmj").show()
	}).mouseleave(function() {
		$(".ewmj").hide()
	})

	$(".focus").mouseover(function() {
		$(".ewmg").show()
	}).mouseleave(function() {
		$(".ewmg").hide()
	})

	$(".wxin").mouseover(function() {
		$(".weixin").addClass("show")
	}).mouseleave(function() {
		$(".weixin").removeClass("show")
	})

	$(".close").mouseover(function() {
		$(this).attr("src", "img/closeh.png")
	}).mouseleave(function() {
		$(this).attr("src", "img/close.png")
	})
	
	$(".appoint").click(function() {
		$(".infor input").val("");
		$("#mask").addClass("show")
		$("#layer").addClass("show")
	})

	$("#layer .close").click(function() {
		$("#mask").removeClass("show")
		$("#layer").removeClass("show")
	})

	$("#layer2 .close").click(function() {
		$("#mask").removeClass("show")
		$("#layer2").removeClass("show")
	})
	
	var now = new Date();
	var start = now.getTime(); // 将当前时间转换为时间戳
	var val = ''
	var ins1 = laydate.render({
		elem: '#test10',
		type: 'datetime',
		theme: '#3ac57e',
		range: true,
		min: 0,
		format: 'yyyy/MM/dd HH:mm',
		change: function(value, date, endDate) { //控件选择完毕后的回调---点击日期、清空、现在、确定均会触发。
			
			var date1 = date.year + '/' + checkTime(date.month) + '/' + checkTime(date.date) + ' ' + checkTime(date.hours) + ':' + checkTime(date.minutes)
			var date2 = endDate.year + '/' + checkTime(endDate.month) + '/' + checkTime(endDate.date) + ' ' + checkTime(endDate.hours) + ':' + checkTime(endDate.minutes)
			date1 = new Date(date1)
			date2 = new Date(date2)
			
			var s1 = date1.getTime(),
				s2 = date2.getTime();
			var total = (s2 - s1) / 1000;
			var day = parseInt(total / (24 * 60 * 60));
			var afterDay = total - day * 24 * 60 * 60;
			var hour = parseInt(afterDay / (60 * 60));
			var afterHour = total - day * 24 * 60 * 60 - hour * 60 * 60;
			var min = parseInt(afterHour / 60);
			var afterMin = total - day * 24 * 60 * 60 - hour * 60 * 60 - min * 60;
			//  val = day+'天'+hour+'小时'+min+'分钟'
			var hourAll = day * 24 + hour
			val = hourAll + '小时' + min + '分钟'
			ins1.hint(val);
			//$("#text").val(val);
		},
		ready: function() {
			console.log(val)
				//$("#text").val(val);
		},
		done: function(value) {
			console.log(val)
			$("#text").val(val);
		}
	});
	
	var ins2 = laydate.render({
		elem: '#test11',
		type: 'datetime',
		theme: '#3ac57e',
		range: true,
		min: 0,
		format: 'yyyy/MM/dd HH:mm',
		change: function(value, date, endDate) { //控件选择完毕后的回调---点击日期、清空、现在、确定均会触发。
			console.log(value);
			console.log(date);
			var date1 = date.year + '/' + checkTime(date.month) + '/' + checkTime(date.date) + ' ' + checkTime(date.hours) + ':' + checkTime(date.minutes)
			var date2 = endDate.year + '/' + checkTime(endDate.month) + '/' + checkTime(endDate.date) + ' ' + checkTime(endDate.hours) + ':' + checkTime(endDate.minutes)
			date1 = new Date(date1)
			date2 = new Date(date2)
			var s1 = date1.getTime(),
				s2 = date2.getTime();
			var total = (s2 - s1) / 1000;
			var day = parseInt(total / (24 * 60 * 60));
			var afterDay = total - day * 24 * 60 * 60;
			var hour = parseInt(afterDay / (60 * 60));
			var afterHour = total - day * 24 * 60 * 60 - hour * 60 * 60;
			var min = parseInt(afterHour / 60);
			var afterMin = total - day * 24 * 60 * 60 - hour * 60 * 60 - min * 60;
			  val = day+'天'+hour+'小时'+min+'分钟'
			//var hourAll = day * 24 + hour
			//val = hourAll + '小时' + min + '分钟'
			ins2.hint(val);
			//$("#text").val(val);
		},
		ready: function() {
			console.log(val)
				//$("#text").val(val);
		},
		done: function(value) {
			console.log(val)
			$("#text1").val(val);
		}
	});

	function checkTime(i) {
		if(i < 10) {
			i = '0' + i
		}
		return i
	}
	
	
	function yzm(){
		y--;
		if(y>0){
		   $(".getVerity").val(y+"s后再获取");
		   $(".getVerity").attr("disabled", true);
		}else{
		   $(".getVerity").val("获取验证码");
		   $(".getVerity").attr("disabled", false);
		   clearInterval(timer);
		}
	}
	
var timer=null;
$(".re-form .getVerity").click(function(){
	y=61;
	var phone=$(".re-phone").val();
	if(phone==""){
		alert('请输入手机号码！')
	}else{
		if(!(/^1[34578]\d{9}$/.test(phone))){
			alert('请输入正确的手机号码！')
		}else{
			//执行获取验证码函数
			if($(".getVerity").val()=='获取验证码'){
				getVerify(phone);
    			timer=setInterval(yzm, 1000);
			}
			
		}
	}
})

$(".re-form button").click(function(){
	var phone=$(".re-phone").val();
	var verity=$(".re-verity").val();
	if(phone!==""&verity!==""){
		registered(phone,verity);
	}else{
		alert('请填写完整信息！');
	}
})


    function getVerify(phone){
    	$.ajax({
    		type:"POST",
    		url:"https://jia.win-sky.com.cn/SMS/VerificationCode",
			contentType: "application/x-www-form-urlencoded; charset=utf-8",
			data:{"UserPhone":phone,"AppID":'3ddb6f5a2cc1475b80a86ce4baac0a39'},
			success:function(data){
				if(data.state==1){
					
				}else{
					alert(data.errmsg);
				}
			}
    	});
    }
    
    function registered(phone,code){
    	$.ajax({
    		type:"POST",
    		url:"https://jia.win-sky.com.cn/Logon/UserLogin",
			contentType: "application/x-www-form-urlencoded; charset=utf-8",
			data:{"Mobile":phone,"Code":code,"AppID":'3ddb6f5a2cc1475b80a86ce4baac0a39'},
			success:function(data){
				if(data.state==1){
					$("#mask").addClass("show");
					$("#layer2").addClass("show");
				}else{
					alert(data.errmsg);
				}
			}
    	});
    }
	
})