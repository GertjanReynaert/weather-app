//
//  MasterViewController.h
//  WeatherX
//
//  Created by Gertjan Reynaert on 12/01/14.
//  Copyright (c) 2014 Gertjan Reynaert. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
