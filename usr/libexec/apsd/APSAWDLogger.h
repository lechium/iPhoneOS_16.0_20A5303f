//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSAWDLogger : NSObject
{
}

+ (id)logger;	// IMP=0x0020000000072fd1
- (_Bool)_shouldSubmit;	// IMP=0x0020000000073164
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;	// IMP=0x00100000000730ee
- (void)_submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;	// IMP=0x00100000000730dc
- (void)logMetric:(id)arg1;	// IMP=0x0010000000073055
- (id)init;	// IMP=0x0010000000073026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
