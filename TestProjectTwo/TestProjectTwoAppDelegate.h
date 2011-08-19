//
//  TestProjectTwoAppDelegate.h
//  TestProjectTwo
//
//  Created by Alex Grinman on 8/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestProjectTwoViewController;

@interface TestProjectTwoAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestProjectTwoViewController *viewController;

@end
