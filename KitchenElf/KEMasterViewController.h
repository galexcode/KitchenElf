//
//  KEMasterViewController.h
//  KitchenElf
//
//  Created by Ming Fu on 4/20/13.
//  Copyright (c) 2013 Ming Fu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KEDetailViewController;

#import <CoreData/CoreData.h>

@interface KEMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) KEDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
