App.controller('outgoingctrl', function($scope, mainSrv){
	x= mainSrv.getx();
	temp = mainSrv.get();
	x.depatutreDate=moment(x.depatutreDate).format('L');
	$scope.flights = temp.outgoingFlights;
	console.log($scope.flights);
	$scope.from = x.from;
	$scope.to = x.to;

	$scope.array=[];

	

	
	$scope.choose=function(flight){

		//get cost 
		// x.cost=flight.cost;
		x.outgoingFlightId=flight._id;

		$scope.array[0]=flight;
		// x.aircraftType=flight.aircraftType;
		// x.aircraftModel=flight.aircraftModel;
		// x.duration=flight.duration;
		// x.cost= flight.cost;
		
		// x.flightNumber=flight.flightNumber;
		x.Flights=$scope.array;

		console.log(mainSrv.getx());
		//get OutgoingId
		//set them in mainSrv
	}


	
});