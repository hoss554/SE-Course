//  App.factory("landingServ",function(){
//   var state =  [	
//   	"Mumbai",
// 	"Cairo",
// 	"Hong Kong",
// 	"Johannesburg",
// 	"Riyadh",
// 	"London Heathrew",
// 	"Las Vegas",
// 	"Las Angeles",
// 	"Frankfurt",
// 	"Rome",
// 	"Delhi",
// 	"Jeddah",
// 	"Taiwan",
// 	"Cape Town",
// 	"New York-John F. Kennedy",
// 	"San Francisco",
// 	"Berlin",
// 	"Milan"
// ];
//   return state;

//  });

 App.factory("landingServ",function($http){
 	var state = [];
 	$http.get('/api/Airports')
 	.then(function(response){ 
 		// var state= response.data.iata;
 		for (var i = response.data.length - 1; i >= 0; i--) {
 			state[i]= (response.data)[i].iata;

 		} 
 	});
 	return state;
 });