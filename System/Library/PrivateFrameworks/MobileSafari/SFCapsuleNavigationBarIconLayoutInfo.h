//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface SFCapsuleNavigationBarIconLayoutInfo : NSObject
{
    UIImageView *_imageView;	// 8 = 0x8
    NSArray *_constraintsToItemBefore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013ade
@property(retain, nonatomic) NSArray *constraintsToItemBefore; // @synthesize constraintsToItemBefore=_constraintsToItemBefore;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithImageView:(id)arg1;	// IMP=0x0000000000013a3b

@end
