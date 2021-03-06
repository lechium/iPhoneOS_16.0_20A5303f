//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MUBlockActivity : UIActivity
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

+ (id)createBlockActivitiesFromPlaceActionItems:(id)arg1 usingActionManager:(id)arg2 presentationOptions:(id)arg3;	// IMP=0x0060000000075a3c
- (void).cxx_destruct;	// IMP=0x00000000000759e9
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)performActivity;	// IMP=0x000000000007596e
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000075966
- (long long)activityCategory;	// IMP=0x000000000007595e
- (id)activityType;	// IMP=0x000000000007588b
- (id)activityImage;	// IMP=0x0000000000075879
- (id)activityTitle;	// IMP=0x0000000000075867
- (id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000007576c
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000756ac

@end

