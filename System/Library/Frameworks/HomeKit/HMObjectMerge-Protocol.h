//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSUUID;
@protocol HMObjectMerge;

@protocol HMObjectMerge <NSObject>
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_mergeWithNewObject:(id <HMObjectMerge>)arg1;

@optional
- (void)mergeWithNewObjectNoMergeCount:(id <HMObjectMerge>)arg1;
@end
