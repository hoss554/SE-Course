var app   = require('./app/app');
var db    = require('./app/db');
var dbURL = 'mongodb://127.0.0.1:27017/balabezoo'

db.init(dbURL, function() {
	app.listen('3000', function() {
		console.log('[OK] => HTTP Server listening on http://localhost:3000');		
	})
})
/*// var server = app.listen(process.env.PORT, function(){
//   console.log('[OK] => HTTP Server listening on http://localhost:3000');
// db.init(dbURL);
// });
=======
 var app= require('./app/app.js');
var db= require('./app/db.js');
 var dbURL= 'mongodb://localhost:27017/balabezoovar app   = require('./app/app');
var db    = require('./db');
var dbURL = 'mongodb://127.0.0.1:27017/alll'


db.init(dbURL, function() {
	app.listen('3000', function() {
		console.log('[OK] => HTTP Server listening on http://localhost:3000');		
	})
})
db.init(dbURL,function(){
  app.listen('3000',function(){

console.log('OK');

  })


})

>>>>>>> df63eaa73c2cdec37a1d5425ae2dfd7a153f9835
*/