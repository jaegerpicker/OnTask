//
//  caAppDelegate.h
//  OnTask
//
//  Created by Shawn Campbell on 9/29/13.
//  Copyright (c) 2013 Code Art Games. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface caAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end