//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/CRSUIWindow.h>

@class NSHashTable, NSString;

@interface CarDisplayWindow : CRSUIWindow
{
    NSHashTable *_eventTaps;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000b09995
- (void)notificationLayoutGuideDidChange;	// IMP=0x0010000000b098cb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000b0974d
- (void)registerEventTap:(id)arg1;	// IMP=0x0010000000b096d3
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000b09507
- (void)setRootViewController:(id)arg1;	// IMP=0x0010000000b09419
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000b09348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

