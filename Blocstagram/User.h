//
//  User.h
//  Blocstagram
//
//  Created by Benjamin Simmons on 11/18/15.
//  Copyright © 2015 Ben Simmons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface User : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;

- (instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@end
