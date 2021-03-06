//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PSDSchedulerAWDSessionState : NSObject
{
    NSMutableDictionary *_stateDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000009d76
- (void).cxx_destruct;	// IMP=0x002000000000af52
- (void)enumerateActivityNamesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ae2a
- (id)stateDictionaryForActivity:(id)arg1;	// IMP=0x001000000000ada7
- (double)durationForActivity:(id)arg1;	// IMP=0x001000000000ac69
- (id)retryCountForActivity:(id)arg1;	// IMP=0x001000000000ac12
- (id)syncTypeForActivity:(id)arg1;	// IMP=0x001000000000abbb
- (id)errorCodeForActivity:(id)arg1;	// IMP=0x001000000000ab64
- (_Bool)hasErrorCodeForActivity:(id)arg1;	// IMP=0x001000000000aafa
- (_Bool)wasDropoutForActivity:(id)arg1;	// IMP=0x001000000000aa85
- (_Bool)hasDurationForActivity:(id)arg1;	// IMP=0x001000000000aa1b
- (void)noteActivityDropout:(id)arg1;	// IMP=0x001000000000a965
- (void)noteActivityInterrupted:(id)arg1;	// IMP=0x001000000000a788
- (void)noteActivityFinished:(id)arg1;	// IMP=0x001000000000a599
- (void)_computeDurationForStateDictionary:(id)arg1 activity:(id)arg2;	// IMP=0x001000000000a396
- (void)noteActivityStarted:(id)arg1 syncSession:(id)arg2;	// IMP=0x0010000000009ff7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000009fd4
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000009dd4
- (id)init;	// IMP=0x0010000000009d7e

@end

