//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol SBMainDisplayInterfaceOrientationSource <NSObject>
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;

@optional
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@end
