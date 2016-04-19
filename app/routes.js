module.exports = function(app) {


	app.get('/api/sum/:x/:y', function(req, res) {
		var x = parseInt(req.params.x);
		var y = parseInt(req.params.y);
		res.send((x + y) + '');
	});


	app.get('/', function(req, res) {
		res.sendFile('index.html');
	});

	app.post('/api/postReserv/', data)
	.success(function(data, status) {
		mongo.db().collection('reservation').insert(data);

	});
};
