//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIButton;

@interface FloatingButtonItem : NSObject
{
    _Bool _isSeparator;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    long long _option;	// 24 = 0x18
}

+ (id)separatorItem;	// IMP=0x0020000000176673
- (void).cxx_destruct;	// IMP=0x0020000000176716
@property(readonly, nonatomic) _Bool isSeparator; // @synthesize isSeparator=_isSeparator;
@property(readonly, nonatomic) long long option; // @synthesize option=_option;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (id)initWithButton:(id)arg1 option:(long long)arg2;	// IMP=0x00100000001765fd

@end

