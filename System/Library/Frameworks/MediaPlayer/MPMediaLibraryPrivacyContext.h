//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPMediaLibraryPrivacyContext : NSObject
{
}

+ (void)setDefaultClientWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00800000001e5100
+ (id)contextForDefaultClient;	// IMP=0x00800000001e50d5
+ (id)sharedContextForCurrentProcess;	// IMP=0x00800000001e50a5
+ (void)initialize;	// IMP=0x00800000001e509f
- (void)endAccessInterval;	// IMP=0x00000000001e5099
- (void)beginAccessInterval;	// IMP=0x00000000001e5093
- (void)logPrivacyAccess;	// IMP=0x00000000001e508d
- (id)initWithPAApplication:(id)arg1;	// IMP=0x00000000001e505e
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000001e504a
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x00000000001e5036
- (id)init;	// IMP=0x00000000001e5022

@end

