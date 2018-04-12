var https = require('https');
var fs = require('fs');
var express = require('express');

var options = {
    key: fs.readFileSync('privatekey.pem'),
    cert: fs.readFileSync('certificate.pem'),
    requestCert: false,
    rejectUnauthorized: false
};


var app = express();

var io = require('socket.io')(https);

app.use(express.static(__dirname + "/public"));

app.get('/', function(req,res){
	res.redirect('index.html');
	
});

io.on('connection', function(socket){
	//socket.emit(objToString(socket));
	//socket.on('beep',function(){		
		//socket.emit('boop123');
	//});
	socket.on('stream',function(image){		
		socket.broadcast.emit('stream',{data:image});
		//socket.broadcast.emit('abcdef');
		//socket.broadcast.emit('stream',image);
	});
	
});

var server = https.createServer(options, app).listen(3008, function(){
    console.log("server started at port 3000");
});