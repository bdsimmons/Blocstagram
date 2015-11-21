//
//  DataSource.h
//  Blocstagram
//
//  Created by Benjamin Simmons on 11/18/15.
//  Copyright © 2015 Ben Simmons. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
