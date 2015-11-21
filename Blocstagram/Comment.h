//
//  Comment.h
//  Blocstagram
//
//  Created by Benjamin Simmons on 11/18/15.
//  Copyright © 2015 Ben Simmons. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong)  NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
