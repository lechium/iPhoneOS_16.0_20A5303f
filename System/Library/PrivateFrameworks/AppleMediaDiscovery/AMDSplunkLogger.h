//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMDSplunkLogger : NSObject
{
}

+ (id)logPayload:(id)arg1 error:(id *)arg2;	// IMP=0x008000000005e8c0
+ (id)logEvents:(id)arg1 toTopic:(id)arg2 withSchema:(id)arg3;	// IMP=0x008000000005dd80
+ (_Bool)checkSchemaValidity:(id)arg1;	// IMP=0x008000000005da60
+ (void)flushEvents:(id)arg1;	// IMP=0x008000000005d9d0

@end

