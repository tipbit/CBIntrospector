//
//  UIView+ViewController.h
//
//  Created by Daniel Leber on 7/31/12.
//  Copyright (c) 2012 Bottle Rocket Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ViewController)

- (UIViewController *)viewController; // Will return the view controller for this view, if it has one.
- (UIViewController *)firstViewController; // Will return first view controller found in the responder hierarchy. This might not be the view controller for this view.

@end
