//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPActivity : NSObject
{
    long long _intervalSec;	// 8 = 0x8
}

+ (_Bool)runRemote;	// IMP=0x0000000000008047
+ (_Bool)ignoreCancellation;	// IMP=0x0010000000007e9f
+ (unsigned long long)taskID;	// IMP=0x0010000000007e30
+ (const char *)identifier;	// IMP=0x0010000000007e0d
+ (void)notImplementedException:(id)arg1;	// IMP=0x0010000000007d5f
@property long long intervalSec; // @synthesize intervalSec=_intervalSec;
- (void)registerActivity;	// IMP=0x00100000000081ef
- (void)execute:(id)arg1;	// IMP=0x0010000000007e7e
- (_Bool)oneShot;	// IMP=0x0010000000007e76
- (id)criteria;	// IMP=0x0010000000007e53

@end
