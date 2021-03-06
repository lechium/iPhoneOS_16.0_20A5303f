//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSDate, NSDictionary, NSURL;

@interface APSettingsStorageServer : NSObject
{
    _Bool _didFetchFromServer;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSDictionary *_headers;	// 24 = 0x18
    NSDate *_lastUpdate;	// 32 = 0x20
    NSDictionary *_defaults;	// 40 = 0x28
    NSDictionary *_serverData;	// 48 = 0x30
    APUnfairLock *_lock;	// 56 = 0x38
}

+ (id)baseServerURL;	// IMP=0x00200000000f7e56
- (void).cxx_destruct;	// IMP=0x00200000000f90c9
@property(retain, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *serverData; // @synthesize serverData=_serverData;
@property(readonly, nonatomic) NSDictionary *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property _Bool didFetchFromServer; // @synthesize didFetchFromServer=_didFetchFromServer;
- (void)synchronize;	// IMP=0x00100000000f9040
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f8ff4
- (id)valueForKey:(id)arg1;	// IMP=0x00100000000f8e5c
- (id)initWithURL:(id)arg1 headers:(id)arg2 defaultValues:(id)arg3;	// IMP=0x00100000000f8d50
- (void)retrieveServerData;	// IMP=0x00100000000f8b10
- (void)fetchNewServerData;	// IMP=0x00100000000f80d1
- (id)initWithDefaultValues:(id)arg1;	// IMP=0x00100000000f805d

@end

