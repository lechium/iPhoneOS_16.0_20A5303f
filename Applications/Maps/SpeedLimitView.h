//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SpeedLimitView : UIView
{
    UIImage *_speedLimitImage;	// 8 = 0x8
    UIImage *_dimmedSpeedLimitImage;	// 16 = 0x10
    _Bool _useNightMode;	// 24 = 0x18
    UIImageView *_speedLimitImageView;	// 32 = 0x20
    unsigned long long _speedLimit;	// 40 = 0x28
    long long _shieldType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000005cf080
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
- (id)_stringWithSpeedLimit:(unsigned long long)arg1;	// IMP=0x00100000005cef0d
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000005cee8d
- (void)_updateShield;	// IMP=0x00100000005ceaa7
@property(readonly, nonatomic) _Bool hasContent;
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;	// IMP=0x00100000005ce944
@property(readonly, nonatomic) UIImageView *speedLimitImageView; // @synthesize speedLimitImageView=_speedLimitImageView;
- (void)didMoveToWindow;	// IMP=0x00100000005ce85e
@property(readonly, nonatomic) long long shieldSize;
- (void)_maps_commonInit;	// IMP=0x00100000005ce53a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005ce4dd
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005ce491

@end

