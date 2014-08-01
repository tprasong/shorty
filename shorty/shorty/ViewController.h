//
//  ViewController.h
//  shorty
//
//  Created by Prasong on 14/06/2014.
//  Copyright (c) 2014 Prasong Techapanyo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIWebViewDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (weak, nonatomic) IBOutlet UITextField* urlField;
@property (weak, nonatomic) IBOutlet UIWebView* webView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem* shortenButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem* shortLabel;
@property (weak, nonatomic) IBOutlet UIBarButtonItem* clipboardButton;


-(IBAction)loadLocation:(id)sender;
- (IBAction)shortenURL:(id) sender;
-(IBAction)clipboardURL:(id)sender;
@end

