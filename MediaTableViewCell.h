//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Benjamin Simmons on 11/22/15.
//  Copyright © 2015 Ben Simmons. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell, ComposeCommentView;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) cellWillStartComposingComment:(MediaTableViewCell *)cell;
- (void) cell:(MediaTableViewCell *)cell didComposeComment:(NSString *)comment;

@end

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;
@property (nonatomic, strong, readonly) ComposeCommentView *commentView;
@property (nonatomic, strong) UITraitCollection *overrideTraitCollection;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width traitCollection:(UITraitCollection *) traitCollection;
- (void) stopComposingComment;

@end
