#include<iostream>
using namespace std;

int main() {
    
    int gallons_used, starting_mileage, ending_mileage, distance_drive, average_miles_per_gallon;
    
    cout<<"Enter gallons used: ";
    cin>> gallons_used; //get value for gallons used
    cout<<"Enter starting mileage: ";
    cin>> starting_mileage; // get value for starting mileage
    cout<<"Enter ending mileage: ";
    cin>>ending_mileage; // get value for ending mileage
    
    distance_drive = ending_mileage - starting_mileage; //set value for distance driven
    
    average_miles_per_gallon = distance_drive / gallons_used; //set value for average miles per gallon
    
cout<<"The average miles per gallon is " ; average_miles_per_gallon; //print the value of average miles per gallon 

if (average_miles_per_gallon > 25){ //if average miles per gallon is greater than 25 gallons
    cout<<"You are getting good gas mileage"; //print the message you are getting good gas mileage
}    
else
    cout<< "You are NOT getting good gas mileage"; //print the message you are not getting good gas mileage
    
    return 0;
    
}
