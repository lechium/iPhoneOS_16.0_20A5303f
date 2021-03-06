//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQHPages : NSObject
{
}

+ (void)mapCurrentHiddenPositioningFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b94d
+ (void)mapCurrentHeaderAndFooterFromPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b80f
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;	// IMP=0x001000000002b7d9
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;	// IMP=0x001000000002b78d
+ (int)handleFooters:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x001000000002b755
+ (int)handleHeaders:(struct __CFArray *)arg1 state:(id)arg2;	// IMP=0x001000000002b71d
+ (Class)enterBodyStorage:(id)arg1;	// IMP=0x001000000002b70c
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;	// IMP=0x001000000002b6fb
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;	// IMP=0x001000000002b6f0
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;	// IMP=0x001000000002aff3
+ (int)endPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002acd1
+ (int)beginPublication:(id)arg1 state:(id)arg2;	// IMP=0x001000000002acc6
+ (void)mapHeaderOrFooter:(id)arg1 isHeader:(_Bool)arg2 toPublication:(id)arg3 state:(id)arg4;	// IMP=0x001000000002bce3
+ (void)handlePagesOrders:(id)arg1;	// IMP=0x001000000002bbcc
+ (void)handleZOrder:(unsigned int)arg1 cssClassName:(struct __CFString *)arg2 state:(id)arg3;	// IMP=0x001000000002bb79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

