
var express = require("express");
var app = new express();
var fs = require('fs');

var options = {
    key: fs.readFileSync('privatekey.pem'),
    cert: fs.readFileSync('certificate.pem'),
    requestCert: false,
    rejectUnauthorized: false
};

var http = require("https").createServer(options, app);
var io = require('socket.io')(http);
io.attach(4567);
var Log = require('log'),
	log = new Log('debug')

var port = process.env.PORT || 3002;

app.use(express.static(__dirname + "/public"));

app.get('/', function(req,res){
	res.redirect('index.html');
	
});
var idcode = 1;
io.on('connection', function(socket){
	socket.join('room1')
	//socket.emit(objToString(socket));
	//socket.on('beep',function(){		
		//socket.emit('boop123');
	//});
	//console.log(idcode);
	//idcode++;
	socket.on('stream1',function(image){		
		//console.log(new Date(), 'got data from stream');
		io.to('room1').emit('stream1',{data:image});
		//console.log(new Date(), 'emit data to stream');
		//socket.broadcast.emit('stream',{data:{data:image}});
		//socket.broadcast.emit('abcdef');
		//var string_send = '{"data":{"data":'+image+'}}';
		//socket.broadcast.emit('stream',image);
	});
	socket.on('stream2',function(image){		
		//console.log(new Date(), 'got data from stream2');
		io.to('room1').emit('stream2',{data:image});
		//console.log(new Date(), 'emit data to stream2');
		//socket.broadcast.emit('stream2',{data:image});
		//socket.broadcast.emit('abcdef');
		//socket.broadcast.emit('stream2',image);
	});
});

http.listen(port, function(){
	//log.info('Server %s',port);
	
	
});

function objToString (obj) {
    var str = '';
    for (var p in obj) {
        if (obj.hasOwnProperty(p)) {
            str += p + '::' + obj[p] + '\n';
        }
    }
    return str;
}