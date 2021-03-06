//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXRuntime/NSObject-Protocol.h>

@class AXElementGroup;

@protocol AXGroupable <NSObject>
@property(nonatomic) AXElementGroup *parentGroup;
@property(readonly, nonatomic) struct CGRect frame;
- (AXElementGroup *)keyboardContainer;
- (_Bool)isGroup;
- (AXElementGroup *)highestAncestorGroup;
@end

