//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RAPMapStateProtocol-Protocol.h"

@class RAPTransitLine;
@protocol RAPPlace;

@protocol RAPMutableMapStateProtocol <RAPMapStateProtocol>
@property(retain, nonatomic) RAPTransitLine *reportedLine;
@property(retain, nonatomic) id <RAPPlace> reportedPlace;
@end
