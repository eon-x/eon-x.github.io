<?php
/**
 *
 * 自定义表单
 *
 * @version        $Id: diy.php 1 15:38 2010年7月8日Z tianya $
 * @package        DedeCMS.Site
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
// require_once(dirname(__FILE__)."/../include/common.inc.php");
// require_once("phpmailer/PHPMailerAutoload.php"); 
// require_once("phpmailer/class.phpmailer.php"); 

$diyid = isset($diyid) && is_numeric($diyid) ? $diyid : 0;
$action = isset($action) && in_array($action, array('post', 'list', 'view')) ? $action : 'post';
$id = isset($id) && is_numeric($id) ? $id : 0;

if(empty($diyid))
{
    showMsg('非法操作!', 'javascript:;');
    exit();
}

// require_once DEDEINC.'/diyform.cls.php';
$diy = new diyform($diyid);

/*----------------------------
function Post(){ }
---------------------------*/
if($action == 'post')
{
    if($do == 2)
    {
        $cp = "";
        $name = "";
        $phone = "";
        $address = "";
        $qqMessage = "";

        if (isset($_POST["cp"])) {
            $cp = $_POST["cp"]; 
        }

        if (isset($_POST["xingming"])) 
        {
            $name = $_POST["xingming"]; 
            if(empty($name))
            {
                showMsg('姓名不能为空!', '-1');
                exit();
            }
        }

        if (isset($_POST["dianhua"])) 
        {
            $phone = $_POST["dianhua"]; 
            if(empty($phone))
            {
                showMsg('电话不能为空!', '-1');
                exit();
            }elseif (strlen($phone) != 11) {
                showMsg('电话号码不是11位！', '-1');
                exit();
            }
        }

        if (isset($_POST["liuyan"])) 
        {
            $qqMessage = $_POST["liuyan"]; 
        }

        if (isset($_POST["dizhi"])) 
        {
            $address = $_POST["dizhi"]; 
            if(empty($address))
            {
                showMsg('地址不能为空!', '-1');
                exit();
            }
        }

        if($dsql->ExecuteNoneQuery($query))
        {
            $id = $dsql->GetLastID();
            if($diy->public == 2)
            {
                //diy.php?action=view&diyid={$diy->diyid}&id=$id
                $goto = "diy.php?action=list&diyid={$diy->diyid}";
                $bkmsg = '发布成功，现在转向表单列表页...';
            }
            else
            {
                $goto = !empty($cfg_cmspath) ? $cfg_cmspath : '/';
                $bkmsg = '发布成功，请等待管理员处理。。。';

                // if (strlen($phone) == 11) {
                //     $mail = new PHPMailer();
                //     //是否启用smtp的debug进行调试 开发环境建议开启 生产环境注释掉即可 默认关闭debug调试模式
                //     //$mail->SMTPDebug = 2;
                //     $mail->isSMTP();
                //     $mail->SMTPAuth=true;
                //     $mail->Host = 'smtp.163.com';
                //     // $mail->SMTPSecure = 'ssl';
                //     $mail->Port = 25;
                //     $mail->CharSet = 'UTF-8';
                //     $mail->FromName = 'X';
                //     $mail->Username ='13184388190@163.com';
                //     $mail->Password = 'xzxz123123';
                //     $mail->From = '13184388190@163.com'; 
                //     $mail->addAddress('656624075@qq.com');
                //     $mail->Subject = '订单邮件';
                //     $mail->isHTML(true);
                //     $mail->Body = "<p>产品：".$cp."</p><p>姓名：".$name."</p><p>电话：".$phone."</p><p>地址：".$address."</p><p>留言：".$qqMessage."</p>";
                //     $status = $mail->send();
                //     // if($status) {
                //     //     echo '发送成功';
                //     // }else{
                //     //     echo '发送失败，错误信息：'.$mail->ErrorInfo;
                //     // }
                // }             
            }
            showmsg($bkmsg, $goto);
        }
    }
}