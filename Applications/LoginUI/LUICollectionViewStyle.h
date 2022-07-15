//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface LUICollectionViewStyle : NSObject
{
}

+ (id)sharedStyle;	// IMP=0x004000000000fcd8
- (double)fixedHeaderHeight;	// IMP=0x004000000001038a
- (struct UIEdgeInsets)headerEdgeInsets;	// IMP=0x0010000000010360
- (struct CGSize)itemSpacingForItemCount:(unsigned long long)arg1;	// IMP=0x001000000001022d
- (struct CGSize)gridInfoForItemCount:(unsigned long long)arg1;	// IMP=0x001000000000fffb
- (struct CGSize)itemSizeForItemCount:(unsigned long long)arg1;	// IMP=0x001000000000ff5f
- (double)verticalItemSpaceForSpaceWithFontDescender:(double)arg1;	// IMP=0x001000000000ff05
- (double)fontYDiameter;	// IMP=0x001000000000fe57
- (double)maxCellSpacing;	// IMP=0x001000000000fe35
- (double)minCellSpacing;	// IMP=0x001000000000fe13
- (double)spaceBetweenAvatarAndNameForFont:(id)arg1;	// IMP=0x001000000000fda5
- (double)spaceBetweenAvatarAndName;	// IMP=0x001000000000fd4e
- (id)avatarNameFont;	// IMP=0x001000000000fd2d

@end
