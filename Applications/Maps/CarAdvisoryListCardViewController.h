//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRoute, NSArray, NSString;
@protocol CarAdvisoryListCardViewControllerDelegate;

@interface CarAdvisoryListCardViewController
{
    GEOComposedRoute *_route;	// 8 = 0x8
    NSArray *_advisoryItems;	// 16 = 0x10
    id <CarAdvisoryListCardViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005e4c36
@property(nonatomic) __weak id <CarAdvisoryListCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setAdvisoryItems:(id)arg1;	// IMP=0x00100000005e4bf5
- (id)advisoryItems;	// IMP=0x00100000005e4be4
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (unsigned long long)numberOfItems;	// IMP=0x00100000005e4ac4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000005e49db
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000005e49be
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005e4876
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00100000005e47d9
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005e47cb
- (id)uniqueName;	// IMP=0x00100000005e47b1
- (void)viewDidLoad;	// IMP=0x00100000005e444d
- (id)initWithRoute:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000005e42f3

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
