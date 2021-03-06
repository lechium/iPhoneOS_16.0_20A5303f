//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

@interface VCPMADRemoteActivityClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    struct atomic<unsigned int> _taskID;	// 16 = 0x10
    struct atomic<double> _progress;	// 24 = 0x18
}

+ (void)notifyServicePID;	// IMP=0x004000000008b2fe
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x001000000008b1e5
+ (id)serviceName;	// IMP=0x001000000008ae24
- (void).cxx_destruct;	// IMP=0x002000000008cce7
- (void)cancelActivity;	// IMP=0x001000000008cbc3
- (void)startActivityWithType:(unsigned long long)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b575
- (void)handleLostConnection;	// IMP=0x001000000008b24a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000008ae38

@end

