//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchListKit/WLKCoding-Protocol.h>

@class NSObject;
@protocol WLKMergeableCoding;

@protocol WLKMergeableCoding <WLKCoding>
- (NSObject<WLKMergeableCoding> *)dataByMergingWith:(NSObject<WLKMergeableCoding> *)arg1;
@end

