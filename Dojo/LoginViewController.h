//
//  ViewController.h
//  Dojo
//
//  Created by Fabio Leonardo Barros Martinez on 27/09/17.
//  Copyright © 2017 CI&T. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblCopyright;

@property (weak, nonatomic) IBOutlet UILabel *lblName;
@property (weak, nonatomic) IBOutlet UITextField *txtNome;

@end

