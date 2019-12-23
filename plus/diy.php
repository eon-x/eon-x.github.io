<?php

header('Content-Type:text/html;Charset=utf-8');
require 'phpmailer/PHPMailerAutoload.php';

$action = $_POST["action"];
$action = 
$do = $_POST["do"];

// foreach ($_POST AS $key=>$value)
// {
//     echo $key;
//     echo "\n123";
//     echo $value;
// }

$cp = "";
$name = "";
$phone = "";
$address = "";
$qqMessage = "";

if (isset($_POST["cp"])) {
    $cp = $_POST["cp"]; 
}

if (isset($_POST["xingming"])) {
    $name = $_POST["xingming"];
    if(empty($name)) {
        showStr('姓名不能为空!');
    }
}

if (isset($_POST["dianhua"])) {
    $phone = $_POST["dianhua"]; 
    if(empty($phone)) {
        showStr('电话不能为空!');
    }elseif (strlen($phone) != 11) {
        showStr('电话号码不是11位！');
    }
}

if (isset($_POST["liuyan"])) {
    $qqMessage = $_POST["liuyan"]; 
}

if (isset($_POST["dizhi"])) {
    $address = $_POST["dizhi"]; 
    if(empty($address)) {
        showStr('地址不能为空!');
    }
}

$mailString = "<p>产品：".$cp."</p><p>姓名：".$name."</p><p>电话：".$phone."</p><p>地址：".$address."</p><p>留言：".$qqMessage."</p>";
sendMail($mailString);

function showStr($str){
    // echo "<script>alert('姓名不能为空!')</script>";
    $content=urlencode($str);
    $content=urldecode(json_encode($content));
    echo "<script>alert($content);history.back()</script>";
    exit();
}

function sendMail($str){
    $mail = new PHPMailer();
    //是否启用smtp的debug进行调试 开发环境建议开启 生产环境注释掉即可 默认关闭debug调试模式
    $mail->SMTPDebug = 2;
    $mail->isSMTP();
    $mail->SMTPAuth=true;
    $mail->Host = 'smtp.163.com';
    // $mail->SMTPSecure = 'ssl';
    $mail->Port = 25;
    $mail->CharSet = 'UTF-8';
    $mail->FromName = 'X';
    $mail->Username ='13184388190@163.com';
    $mail->Password = 'xzxz123123';
    $mail->From = '13184388190@163.com'; 
    // $mail->addAddress('656624075@qq.com');
    $mail->addAddress('819074596@qq.com');
    $mail->Subject = '订单邮件';
    $mail->isHTML(true);
    $mail->Body = $str;
    $status = $mail->send();
    if($status) {
        // showStr('提交成功，请等待管理员处理!');
        echo '发送成功';
    }else{
        // showStr('发送失败，请检查网络重新提交！');
        echo '发送失败，错误信息：'.$mail->ErrorInfo;
    }
}

?>


