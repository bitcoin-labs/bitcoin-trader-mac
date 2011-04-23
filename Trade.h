//
//  Trade.h
//  MtGoxTrader
//
//  Created by Sheldon Thomas on 4/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Trade : NSObject {

}

@property(nonatomic, retain)NSDate* Date;
@property(nonatomic, retain)NSNumber* Price;
@property(nonatomic, retain)NSNumber* Amount;

@end
