//
//  AppDelegate.h
//  SaltEdge API Demo
//
//  Created by nemesis on 7/22/14.
//  Copyright (c) 2014 Salt Edge. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TabBarVC;

#define CUSTOMER_EMAIL @"customers.email@example.com"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, readonly)  TabBarVC* tabBar;

@end
