//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel
{
    NSString *_countString;	// 184 = 0xb8
    int _count;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000010c2df2
- (long long)count;	// IMP=0x00000000010c2de1
- (void)setCount:(long long)arg1;	// IMP=0x00000000010c2d53
- (void)setCountString:(id)arg1 withCount:(long long)arg2;	// IMP=0x00000000010c2cfe
- (id)initWithFrame:(struct CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3;	// IMP=0x00000000010c2bc3

@end
