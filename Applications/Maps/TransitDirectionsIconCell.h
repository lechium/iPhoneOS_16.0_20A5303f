//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TransitDirectionsListItem;

@interface TransitDirectionsIconCell
{
}

+ (Class)stepViewClass;	// IMP=0x002000000064964f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0020000000649660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long displayOptions;
@property(readonly) unsigned long long hash;
@property(nonatomic) double leadingInstructionMargin;
@property(nonatomic) long long navigationState;
@property(readonly) Class superclass;
// Error: Property attributes should begin with the type ('T') attribute, property name: trailingView
// Property attributes: (null)

@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
@property(nonatomic) _Bool useNavigationMetrics;

@end

