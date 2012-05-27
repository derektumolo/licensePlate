//
//  LicenseAppDelegate.h
//  License
//
//  Created by Derek Tumolo on 5/27/12.
//  Copyright 2012 tbd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LicenseAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

