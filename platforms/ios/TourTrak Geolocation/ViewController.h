//
//  ViewController.h
//  TourTrak Geolocation
//
//  Created by Rob on 10/14/13.
//  Copyright (c) 2013 Rob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationController.h"

@interface ViewController : UIViewController <LocationControllerDelegate> {
	LocationController *CLController;
    IBOutlet UILabel *timeLabel;
	IBOutlet UILabel *latitudeLabel;
	IBOutlet UILabel *longitudeLabel;
    IBOutlet UILabel *accuracyLabel;
	IBOutlet UILabel *speedLabel;
    IBOutlet UILabel *bearingLabel;
    IBOutlet UILabel *batteryLabel;
}

@property (nonatomic, retain) LocationController *CLController;


@end
