//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView
{
    unsigned int _selected:1;	// 184 = 0xb8
}

- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000010c363e
- (id)cell;	// IMP=0x00000000010c35c1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010c350c
@property(nonatomic, getter=isSelected) _Bool selected;

@end
