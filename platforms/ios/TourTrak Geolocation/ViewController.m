//
//  ViewController.m
//  TourTrak Geolocation
//
//  Created by Rob on 10/14/13.
//  Copyright (c) 2013 Rob. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

@synthesize CLController;



- (void)viewDidLoad {
    [super viewDidLoad];
    
	CLController = [[LocationController alloc] init];
	CLController.delegate = self;
	[CLController.locMgr startUpdatingLocation];
}

- (void)locationUpdate:(CLLocation *)location {
    [[UIDevice currentDevice] setBatteryMonitoringEnabled:YES];
    float batteryLevel = [[UIDevice currentDevice] batteryLevel];
    NSString *dateString = [NSDateFormatter localizedStringFromDate:location.timestamp
                                                          dateStyle:NSDateFormatterShortStyle
                                                          timeStyle:NSDateFormatterFullStyle];
    timeLabel.text = [NSString stringWithFormat:@"TIME: %@", dateString];
	latitudeLabel.text = [NSString stringWithFormat:@"LATITUDE: %f", location.coordinate.latitude];
	longitudeLabel.text = [NSString stringWithFormat:@"LONGITUDE: %f", location.coordinate.longitude];
	accuracyLabel.text = [NSString stringWithFormat:@"ACCURACY: %f", [location horizontalAccuracy]];
    speedLabel.text = [NSString stringWithFormat:@"SPEED: %f", [location speed]];
    bearingLabel.text = [NSString stringWithFormat:@"BEARING: %f", [location course]];
    batteryLabel.text = [NSString stringWithFormat:@"BATTERY: %f", batteryLevel];
    
}

- (void)locationError:(NSError *)error {
	latitudeLabel.text = [error description];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
