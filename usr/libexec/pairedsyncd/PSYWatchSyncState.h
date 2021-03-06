//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSYWatchSyncState : NSObject
{
    NSString *_activityLabel;	// 8 = 0x8
    long long _globalProgress;	// 16 = 0x10
    unsigned long long _syncProgressState;	// 24 = 0x18
    unsigned long long _version;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000017e23
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long syncProgressState; // @synthesize syncProgressState=_syncProgressState;
@property(readonly, nonatomic) long long globalProgress; // @synthesize globalProgress=_globalProgress;
@property(readonly, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
- (id)description;	// IMP=0x0010000000017cd3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017b3d
- (unsigned long long)hash;	// IMP=0x0010000000017acc
- (id)plistRepresentation;	// IMP=0x001000000001793a
- (id)initWithPlistRepresentation:(id)arg1;	// IMP=0x00100000000177f7
- (id)initWithActivityLabel:(id)arg1 globalProgress:(long long)arg2 syncProgressState:(unsigned long long)arg3;	// IMP=0x001000000001776e

@end

