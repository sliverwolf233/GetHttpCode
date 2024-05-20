<div align='center'><strong> Get HttpCode </strong></div> <br>
原理：通过Post/Get去访问域名/IP 通过返回信息头中的status 进行判断.在这里使用了Httplib,视情况,您也许会喜欢其他网络驱动库,包括但不限于boost/asio或者curlpp,但是原理是一样的<br>
生成:三文件;你可以通过msvc/或者自己配置cmake参数进行生成.但是HPP文件并不是必要的,您可以修改源文件<br>
我该如何更改它:如果你想要生成为可执行文件或者.h文件 可以直接通过main或者public选择或者调用GetHttpCode这个函数.<br>
我在调用的时候需要使用什么: 你需要输入URL 将会返回httpstatus和这个status代表什么<br>
e.g 输入 Github.com Get 返回:"200 OK"<br>
如果您觉得这个项目不错可以进行打赏<br>
Https://afdian.net/a/sliverwolf233
