//
//  DetailViewController.h
//  WeatherX
//
//  Created by Gertjan Reynaert on 12/01/14.
//  Copyright (c) 2014 Gertjan Reynaert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
