//
//  AddItemViewController.h
//  TodoListApplication
//
//  Created by Alex Quigley on 2017-10-14.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

-(void) didSaveNewTodo: (NSString *) todoText;

@end

@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)save:(id)sender;

- (IBAction)cancel:(id)sender;

@end
