//
//  CoreDataAppDelegate.h
//  TourTrak Geolocation
//
//  Created by Rob on 10/22/13.
//  Copyright (c) 2013 Rob. All rights reserved.
//

#import <UIKit/UIKit.h>

@class coreDataViewController;

@interface coreDataAppDelegate : NSObject <UIApplicationDelegate> {
    
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    
    coreDataViewController *viewController;
    
    UIWindow *window;
}

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet coreDataViewController *viewController;
- (NSString *)applicationDocumentsDirectory;
@end
