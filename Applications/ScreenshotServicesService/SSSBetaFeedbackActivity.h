//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface SSSBetaFeedbackActivity : UIActivity
{
    NSString *_title;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000032293
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)performActivity;	// IMP=0x00100000000321f4
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00100000000321ec
- (id)activityType;	// IMP=0x00100000000321df
- (id)activityImage;	// IMP=0x00100000000321cd
- (id)activityTitle;	// IMP=0x00100000000321bb
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003204c

@end

