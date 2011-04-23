//
//  MtGoxTraderAppDelegate.h
//  MtGoxTrader
//
//  Created by Sheldon Thomas on 4/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MtGoxTraderAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
	NSTimer* applicationTimer_;
}

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, retain) NSTimer* applicationTimer;

-(void)initalize;

@end
