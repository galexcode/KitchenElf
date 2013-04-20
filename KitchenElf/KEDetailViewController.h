//
//  KEDetailViewController.h
//  KitchenElf
//
//  Created by Ming Fu on 4/20/13.
//  Copyright (c) 2013 Ming Fu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KEDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
