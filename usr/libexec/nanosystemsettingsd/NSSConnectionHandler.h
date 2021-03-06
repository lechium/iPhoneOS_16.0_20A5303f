//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSXPCConnection;
@protocol NSSConnectionHandlerDelegate><NSSServerProtocol;

@interface NSSConnectionHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    MISSING_TYPE *_delegate;	// 16 = 0x10
}

+ (id)serverProtocol;	// IMP=0x00200000000155eb
- (void).cxx_destruct;	// IMP=0x0020000000015ccc
@property(nonatomic) __weak id <NSSConnectionHandlerDelegate><NSSServerProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)getUsageData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015bd8
- (void)enableAirplaneMode:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015a51
- (_Bool)hasNanoSystemSettingsEntitlementKey:(id)arg1;	// IMP=0x00100000000158f0
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000155f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

