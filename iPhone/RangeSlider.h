//
//  RangeSlider.h
//  RangeSlider
//
//  Created by Charlie Mezak on 9/16/10.
//  Copyright 2010 Natural Guides, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RangeSlider;

@protocol RangeSliderDelegate <NSObject>

@required

- (void)rangeSliderChangedMaxValue:(RangeSlider *)sender;
- (void)rangeSliderChangedMinValue:(RangeSlider *)sender;

@end

@interface RangeSlider : UIControl {

	CGFloat min, max, middle; //the min and max of the range
	CGFloat minimumRangeLength; //the minimum allowed range size
	
	UIImageView *minSlider, *maxSlider, *backgroundImageView, *trackImageView, *inRangeTrackImageView, *middleSlider; // the sliders representing the min and max, and a background view;
	UIView *trackingSlider; // a variable to keep track of which slider we are tracking (if either)
}

@property (nonatomic, assign) id<RangeSliderDelegate> delegate;

@property (nonatomic) CGFloat min, max, minimumRangeLength, middle;
@property (nonatomic, getter = isMiddleShow) BOOL middleShow;
- (void)setMinThumbImage:(UIImage *)image;
- (void)setMaxThumbImage:(UIImage *)image;
- (void)setTrackImage:(UIImage *)image;
- (void)setInRangeTrackImage:(UIImage *)image;

@end
