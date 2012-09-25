//
//  DetailViewController.h
//  Contextually
//
//  Created by Cecil Urena on 9/24/12.
//  Copyright (c) 2012 Seesol. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
