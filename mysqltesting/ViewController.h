//
//  ViewController.h
//  mysqltesting
//
//  Created by Programming on 2/2/15.
//  Copyright (c) 2015 camrombergerproductions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeModel.h"

@interface labelPage : UIViewController <UITableViewDataSource, UITableViewDelegate, HomeModelProtocol>

@property (strong, nonatomic) IBOutlet UITextView *labelName;

@end
