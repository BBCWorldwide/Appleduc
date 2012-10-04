//
//  DuckViewController.m
//  Appleduc
//
//  Created by Nick Lupinetti on 10/3/12.
//  Copyright (c) 2012 Nick Lupinetti. All rights reserved.
//

#import "DuckViewController.h"
#import "Duck.h"

@interface DuckViewController ()

@end

@implementation DuckViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    Duck *d = [[Duck alloc] init];
    
    [d quack];
    id goose = nil;
    
    [self duck:d duck:d goose:goose];
    
    [d release];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
