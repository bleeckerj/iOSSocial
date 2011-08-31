//
//  iOSSServicesViewController.h
//  InstaBeta
//
//  Created by Christopher White on 7/21/11.
//  Copyright 2011 Mad Races, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Three20/Three20.h"

typedef void(^ServicesViewControllerHandler)();

@class iOSSServicesViewController;

@protocol iOSSocialServiceProtocol;

@protocol iOSSServicesViewControllerDelegate <NSObject>

@optional

-(void)servicesViewController:(iOSSServicesViewController*)servicesController 
             didSelectService:(id<iOSSocialServiceProtocol>)service;

-(void)servicesViewControllerDidSelectDoneButton:(iOSSServicesViewController*)servicesController;

@end



@interface iOSSServicesViewController : TTTableViewController <UITableViewDelegate> {
    id _serviceControllerDelegate;
}

@property(nonatomic, retain)    id<iOSSServicesViewControllerDelegate> serviceControllerDelegate;

- (void)refreshUI;

- (void)presentModallyFromViewController:(UIViewController*)vc 
                   withCompletionHandler:(ServicesViewControllerHandler)completionHandler;

@end
