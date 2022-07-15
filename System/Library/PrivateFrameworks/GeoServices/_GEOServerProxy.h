//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;	// 8 = 0x8
    GEOServer *_server;	// 16 = 0x10
}

+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;	// IMP=0x0060000001434c1b
+ (id)proxyForClass:(Class)arg1;	// IMP=0x0060000001434bc5
- (void).cxx_destruct;	// IMP=0x0000000001434f93
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;	// IMP=0x0000000001434f11
- (unsigned long long)hash;	// IMP=0x0000000001434efb
- (_Bool)isEqualToServerProxy:(id)arg1;	// IMP=0x0000000001434eea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001434e91
- (void)startServerWithDaemon:(id)arg1;	// IMP=0x0000000001434ccc
- (void)_setServer:(id)arg1;	// IMP=0x0000000001434cbb

@end
