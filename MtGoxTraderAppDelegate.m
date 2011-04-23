//
//  MtGoxTraderAppDelegate.m
//  MtGoxTrader
//
//  Created by Sheldon Thomas on 4/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MtGoxTraderAppDelegate.h"
#import "ChartsView.h"

@implementation MtGoxTraderAppDelegate

@synthesize window;
@synthesize applicationTimer = applicationTimer_;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	NSLog(@"Just making sure this code runs");
	[self initalize];
}

- (void)initalize
{
	ChartsView* cv = [[ChartsView alloc]initWithNibName:@"ChartsView" bundle:nil];
	
//	NSInvocation* tick = [NSInvocation invocationWithMethodSignature:<#(NSMethodSignature *)sig#>
	
	
//	self.applicationTimer = [NSTimer scheduledTimerWithTimeInterval:5.0 invocation:<#(NSInvocation *)invocation#> repeats:yes];
}

@end
