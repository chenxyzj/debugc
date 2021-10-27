1. 解决vscode debug时看不到printf语句输出的结果：
    原因：应该是vscode和扩展的bug?
    解决办法：
    将launch.json的 "externalConsole": false,修改为：
     "externalConsole": true,
    这样在调试时，vscode会在win10中开启一个单独的命令行界面，显示结果。尽管不是显示在VSCODE集成的terminal中或者OUTPUT中或者DEBUG CONSOLE中，但勉强作为一个解决方法。
2. 解决推送到github.com报错：
> git push -u origin master
fatal: unable to access 'https://github.com/chenxyzj/debugc.git/': OpenSSL SSL_read: SSL_ERROR_SYSCALL, errno 10054

产生原因：一般是这是因为服务器的SSL证书没有经过第三方机构的签署，所以才报错

参考网上解决办法：解除ssl验证后，再次git即可

git config --global http.sslVerify "false"

参考：https://blog.csdn.net/qq_40999917/article/details/116213557