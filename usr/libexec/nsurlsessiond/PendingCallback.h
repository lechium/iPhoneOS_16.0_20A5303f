//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PendingCallback : NSObject
{
    _Bool _hasBeenCalled;	// 8 = 0x8
    int _type;	// 12 = 0xc
    unsigned long long _taskIdentifier;	// 16 = 0x10
    NSArray *_args;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000061375
- (void).cxx_destruct;	// IMP=0x0020000000061365
@property _Bool hasBeenCalled; // @synthesize hasBeenCalled=_hasBeenCalled;
@property(copy) NSArray *args; // @synthesize args=_args;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property int type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006120f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006112e
- (id)initWithCallbackType:(int)arg1 taskIdentifier:(unsigned long long)arg2 args:(id)arg3;	// IMP=0x0010000000061064

@end
