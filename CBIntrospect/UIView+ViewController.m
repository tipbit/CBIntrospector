//
//  UIView+ViewController.m
//
//  Created by Daniel Leber on 7/31/12.
//

#import "UIView+ViewController.h"

@implementation UIView (ViewController)

- (UIViewController *)viewController
{
	UIResponder *nextResponder = [self nextResponder];
	
	if ([nextResponder isKindOfClass:[UIViewController class]])
		return (UIViewController *)nextResponder;
	else
		return nil;
}

- (UIViewController *)firstViewController
{
	UIViewController *viewController = nil;
	
	UIResponder *nextResponder = [self nextResponder];
	while (nextResponder)
	{
		if ([nextResponder isKindOfClass:[UIViewController class]])
		{
			viewController = (UIViewController *)nextResponder;
			break;
		}
		else
		{
			nextResponder = [nextResponder nextResponder];
		}
	}
	
	return viewController;
}

@end
