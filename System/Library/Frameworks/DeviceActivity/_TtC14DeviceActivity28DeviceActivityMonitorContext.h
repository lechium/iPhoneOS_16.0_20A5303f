//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14DeviceActivity28DeviceActivityMonitorContext : NSExtensionContext
{
    MISSING_TYPE *$__lazy_storage_$_monitor;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000473f0
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000473d0
- (void).cxx_destruct;	// IMP=0x0000000000047d20
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x0000000000047c20
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;	// IMP=0x0000000000047a20
- (id)initWithInputItems:(id)arg1;	// IMP=0x00000000000478c0
- (id)init;	// IMP=0x00000000000477f0
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000476f0
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047630
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047610
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000475f0
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000475d0
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000475b0

@end

