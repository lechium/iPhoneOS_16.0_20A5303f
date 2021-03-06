//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFTelephonyURLHandler : NSObject
{
    NSMutableSet *_pendingRequests;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000014c303
- (void).cxx_destruct;	// IMP=0x000000000014c9db
@property(retain, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)removeObserverForRequest:(id)arg1;	// IMP=0x000000000014c8df
- (void)addObserverForRequest:(id)arg1;	// IMP=0x000000000014c53e
- (_Bool)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014c3ae
- (id)init;	// IMP=0x000000000014c358

@end

