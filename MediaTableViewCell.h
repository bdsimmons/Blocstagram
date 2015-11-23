//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Benjamin Simmons on 11/22/15.
//  Copyright © 2015 Ben Simmons. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
