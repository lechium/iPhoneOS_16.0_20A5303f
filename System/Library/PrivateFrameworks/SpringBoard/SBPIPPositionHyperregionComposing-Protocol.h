//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBPIPPositionHyperregionProviding-Protocol.h>

@class NSDictionary;
@protocol SBPIPPositionHyperregionComposerDelegate;

@protocol SBPIPPositionHyperregionComposing <SBPIPPositionHyperregionProviding, BSInvalidatable>
@property(nonatomic) __weak id <SBPIPPositionHyperregionComposerDelegate> delegate;
- (NSDictionary *)positionRegionsForRegions:(NSDictionary *)arg1 geometry:(struct SBPIPPositionGeometryContext)arg2 interaction:(struct SBPIPPositionInteractionStateContext)arg3;
@end

