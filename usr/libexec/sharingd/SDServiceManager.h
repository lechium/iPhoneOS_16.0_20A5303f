//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SFCompanionServiceManagerClient;

@interface SDServiceManager : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_managerID;	// 16 = 0x10
    id <SFCompanionServiceManagerClient> _clientProxy;	// 24 = 0x18
    NSMutableDictionary *_streamHandlers;	// 32 = 0x20
    NSMutableArray *_enabledServices;	// 40 = 0x28
    NSMutableArray *_companionStreams;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000019f03f
@property(retain) NSMutableArray *companionStreams; // @synthesize companionStreams=_companionStreams;
@property(retain) NSMutableArray *enabledServices; // @synthesize enabledServices=_enabledServices;
@property(retain) NSMutableDictionary *streamHandlers; // @synthesize streamHandlers=_streamHandlers;
@property(retain) id <SFCompanionServiceManagerClient> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly) NSString *managerID; // @synthesize managerID=_managerID;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x001000000019ef66
- (void)manager:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000019ed3a
- (void)disableService:(id)arg1;	// IMP=0x001000000019ecb0
- (void)enableService:(id)arg1;	// IMP=0x001000000019ec32
- (id)streamHandlerForService:(id)arg1;	// IMP=0x001000000019ebcf
- (void)stop;	// IMP=0x001000000019e960
- (void)start;	// IMP=0x001000000019e90d
- (id)initWithClientProxy:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x001000000019e816

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
